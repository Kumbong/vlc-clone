#include "playerpage.h"
#include "mediacontroler.h"
#include "playlistpage.h"
#include <QtWidgets>
#include <QtMultimedia>
#include <QGraphicsVideoItem>
#include <QtDebug>

const qreal FASTER_FINE = 1.1;
const qreal FASTER = 1.5;
const qreal SLOWER_FINE= 0.9;
const qreal SLOWER = 0.6;
const qreal NORMAL = 1.0;
const qreal STEP =0.1;
const qreal MAX_RATE = 32.0;
const qreal MIN_RATE = 0.01;

const qreal JUMP_RATE = 0.025;

PlayerPage::PlayerPage(QWidget *parent) : QWidget(parent)
{
    //change to read from settings
         isDockedPlaylist = true;


    //end change
   setAcceptDrops(true);
   playerControler = new MediaControler;
   videoWidget = new QVideoWidget;
   videoWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
   videoWidget->setMinimumHeight(0);
   //videoWidget->setFullScreen(true);
    playlistPage = new PlaylistPage;

   stackedWidget = new QStackedWidget;
   stackedWidget->addWidget(videoWidget);
   stackedWidget->addWidget(playlistPage);
   stackedWidget->setCurrentWidget(videoWidget);

   player = new QMediaPlayer(this);
   playlist = new QMediaPlaylist;

   player->setPlaylist(playlist);
   player->setPlaybackRate(1);
   player->play();

   QPalette pal= videoWidget->palette();
   pal.setBrush(QPalette::Window,QBrush(QPixmap(":/images/icons/windowIcon.png")));
   //videoWidget->setAutoFillBackground(false);
   videoWidget->setPalette(pal);

   player->setVideoOutput(videoWidget);
   QVBoxLayout *layout = new QVBoxLayout;

   layout->addWidget(stackedWidget);
   layout->addWidget(playerControler);
   layout->setSpacing(0);
   layout->setMargin(0);
   setLayout(layout);

   connect(player,&QMediaPlayer::durationChanged,this,&PlayerPage::durationChanged);
   connect(player,&QMediaPlayer::positionChanged,this,&PlayerPage::positionChanged);
   connect(player,&QMediaPlayer::stateChanged,playerControler,&MediaControler::mediaStateChanged);
   connect(player,&QMediaPlayer::stateChanged,this,&PlayerPage::mediaStateChanged);
   connect(player,&QMediaPlayer::mutedChanged,playerControler,&MediaControler::muted);
   connect(player,&QMediaPlayer::mutedChanged,this,&PlayerPage::muted);
   //connect(player,&QMediaPlayer::positionChanged,this,&PlayerPage::mediaPosChanged);

   connect(playerControler,&MediaControler::play,player,&QMediaPlayer::play);
   connect(playerControler,&MediaControler::pause,player,&QMediaPlayer::pause);
   connect(playerControler,&MediaControler::stop,this,&PlayerPage::stop);
   connect(playerControler,&MediaControler::muteVolume,this,&PlayerPage::mute);
   connect(playerControler,&MediaControler::volumeChanged,player,&QMediaPlayer::setVolume);
   //connect(playerControler,&MediaControler::skipForward,this,&PlayerPage::jumpForward);
   //connect(playerControler,&MediaControler::skipBackward,this,&PlayerPage::jumpBackward);
   connect(playerControler,&MediaControler::next,this,&PlayerPage::next);
   connect(playerControler,&MediaControler::previous,this,&PlayerPage::previous);
   connect(playerControler,&MediaControler::loopToggled,this,&PlayerPage::setPlaylistMode);


   connect(playerControler,&MediaControler::sliderPositionChanged,player,&QMediaPlayer::setPosition);
   connect(playlist,&QMediaPlaylist::currentIndexChanged,this,&PlayerPage::currentIndexChanged);
   connect(playlist,&QMediaPlaylist::currentMediaChanged,this,&PlayerPage::currentIndexChanged);
}

qint64 PlayerPage::mediaDuration() const
{
    return player->duration();
}

qint64 PlayerPage::mediaPosition() const
{
    return player->position();
}

qreal PlayerPage::mediaRate() const
{
    return player->playbackRate();
}

void PlayerPage::load(const QList<QUrl> &urls)
{
  QListIterator<QUrl> i(urls);
  while(i.hasNext()){
      playlist->addMedia(i.next());
  }
  playlist->setCurrentIndex(playlist->mediaCount()-1);
  player->play();
}

void PlayerPage::load(const QString &fileName)
{
    playlist->addMedia(QUrl(fileName));
    playlist->setCurrentIndex(playlist->mediaCount()-1);
    player->play();
}

void PlayerPage::durationChanged(qint64 dur)
{
    //convert from milliseconds to seconds
    duration = dur/1000;
    playerControler->setDuration(duration);
    playerControler->updateTimeLabels(0,dur);
}

void PlayerPage::positionChanged(qint64 pos)
{
    pos/=1000;

    playerControler->updateTimeLabels(pos,duration);
}

void PlayerPage::increaseVolume()
{
        player->setVolume((player->volume())+5);
        int vol;
        if(playerControler->volume()<=120)
            playerControler->setVolume(vol = playerControler->volume()+5<=120? playerControler->volume()+5 : 120);

}

void PlayerPage::decreaseVolume()
{
        player->setVolume((player->volume())-5);

        int vol;
        if(playerControler->volume()>=120)
            playerControler->setVolume(vol = playerControler->volume()-5>=0? playerControler->volume()-5 : 0);

}



void PlayerPage::mute(bool muteVol)
{
    player->setMuted(muteVol);
}

void PlayerPage::chagePosition(qint64 pos)
{
    if(player->position() != playerControler->position())
        player->setPosition(pos);
}

void PlayerPage::play()
{
    playerControler->onPlayClicked();
}

void PlayerPage::stop()
{
    player->stop();
}

void PlayerPage::pause()
{

}

void PlayerPage::next()
{
    if(playlist->isEmpty())
        return;
    if(playlist->currentIndex() == playlist->mediaCount()-1)
        playlist->setCurrentIndex(0);
    else
        playlist->next();
}

void PlayerPage::previous()
{
    if(playlist->isEmpty())
        return;
    if(playlist->currentIndex() == 0)
        playlist->setCurrentIndex(playlist->mediaCount()-1);
    else
        playlist->previous();
}

void PlayerPage::jumpForward()
{
    if(player->isAvailable()){
        //first convert duration to milliseconds
           qint64 step = (duration*1000)*JUMP_RATE;
           player->setPosition(player->position()+step);
    }
}

void PlayerPage::jumpBackward()
{
    if(player->isAvailable()){
           qint64 step = (duration*1000)*JUMP_RATE;;
           player->setPosition(player->position()-step);
    }
}

void PlayerPage::goToTime(qint64 pos)
{
    qint64 dur = duration*1000;

    if(pos<=dur && pos>=0)
        player->setPosition(pos);
}

void PlayerPage::faster()
{
     if(player->playbackRate()*FASTER<= MAX_RATE)
        player->setPlaybackRate(FASTER*player->playbackRate());
    else
        player->setPlaybackRate(MAX_RATE);
}

void PlayerPage::fasterFine()
{
    if(player->playbackRate()*FASTER_FINE<= MAX_RATE)
        player->setPlaybackRate(player->playbackRate()*FASTER_FINE);
    else
        player->setPlaybackRate(MAX_RATE);

}

void PlayerPage::slower()
{
     player->setPlaybackRate(player->playbackRate()*SLOWER);
}

void PlayerPage::slowerFine()
{
    player->setPlaybackRate(player->playbackRate()*SLOWER_FINE);
}

void PlayerPage::normalSpeed()
{
    player->setPlaybackRate(NORMAL);
}

void PlayerPage::addSpeed()
{
    if(player->playbackRate()+STEP<= MAX_RATE)
        player->setPlaybackRate(player->playbackRate()+STEP);
    else
        player->setPlaybackRate(MAX_RATE);
}

void PlayerPage::reduceSpeed()
{
    if(player->playbackRate()-STEP>=MIN_RATE)
        player->setPlaybackRate(player->playbackRate()-STEP);
    else
        player->setPlaybackRate(MIN_RATE);
}

void PlayerPage::currentIndexChanged()
{
    qDebug()<<"signal caught";
    emit mediaChanged(playlist->media(playlist->currentIndex()).canonicalUrl().toLocalFile());
}

void PlayerPage::setPlaylistMode(int mode)
{
   if(mode == MediaControler::NO_LOOP)
       playlist->setPlaybackMode(QMediaPlaylist::Sequential);
   else if(mode==MediaControler::LOOP_ALL)
       playlist->setPlaybackMode(QMediaPlaylist::Loop);
   else if(mode ==MediaControler::LOOP_CURRENT)
       playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
}

void PlayerPage::togglePlaylistView(bool isPlaylistView)
{
    if(isPlaylistView){
        if(isDockedPlaylist){
            stackedWidget->setCurrentWidget(playlistPage);
        }
        else{
            //playlistPage->setWindowFlags(Qt::Window);
            playlistPage->show();
        }
    }
    else{
            stackedWidget->setCurrentWidget(videoWidget);
               if(!isDockedPlaylist)
                   playlistPage->hide();
    }
}

void PlayerPage::toggleDockedPlaylistView(bool isDockedPlaylist)
{
     this->isDockedPlaylist = isDockedPlaylist;
}

void PlayerPage::dragEnterEvent(QDragEnterEvent *event)
{

}

void PlayerPage::dropEvent(QDropEvent *event)
{

}


