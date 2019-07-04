#include "mediacontroler.h"
#include "volumeprogressbar.h"
#include <QBoxLayout>
#include <QtWidgets>
#include "mediaslider.h"

MediaControler::MediaControler(QWidget *parent) : QWidget(parent)
{
    //change to read from settings
    isMute = false;

   timeElapsed = new QLabel("--:--");
   timeSlider = new MediaSlider(this);
   //duration->setDisabled(true);
   timeLeft = new QLabel("--:--");

   QHBoxLayout *topLayout = new QHBoxLayout;
   topLayout->addWidget(timeElapsed);
   topLayout->addWidget(timeSlider);
   topLayout->addWidget(timeLeft);

   playButton = new QToolButton;
   playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
   playButton->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
   playButton->setToolTip(tr("Play\nIf the playlist is empty, open a medium"));
   playButton->setMinimumSize(QSize(32,32));

   QHBoxLayout *playBackLayout = new QHBoxLayout;

   previousButton = new QToolButton;
   previousButton->setIcon(style()->standardIcon(QStyle::SP_MediaSkipBackward));
   previousButton->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
   previousButton->setMinimumSize(QSize(28,28));
   previousButton->setToolTip(tr("Previous media in the playlist, skip backward when held"));

   stopButton = new QToolButton;
   stopButton->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
   stopButton->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
   stopButton->setMinimumSize(QSize(28,28));
   stopButton->setToolTip(tr("Stop playback"));

   nextButton = new QToolButton;
   nextButton->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
   nextButton->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
   nextButton->setMinimumSize(QSize(28,28));
   nextButton->setToolTip(tr("Next media in the playlist, skip forward when held"));

   playBackLayout->addWidget(previousButton);
   playBackLayout->addWidget(stopButton);
   playBackLayout->addWidget(nextButton);

   QHBoxLayout *settingsLayout = new QHBoxLayout;
   fullScreenButton = new QToolButton;
   fullScreenButton->setIcon(QIcon(":/images/icons/toggleFullScreen.png"));
   fullScreenButton->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
   fullScreenButton->setMinimumSize(QSize(28,28));
   fullScreenButton->setToolTip(tr("Toggle  the video in full screen"));
   fullScreenButton->setCheckable(true);

   extendedSettingsButton = new QToolButton;
   extendedSettingsButton->setIcon(QIcon(":/images/icons/extendedSettings.jpg"));
   extendedSettingsButton->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
   extendedSettingsButton->setMinimumSize(QSize(28,28));
   extendedSettingsButton->setToolTip(tr("Show extended settings"));

   settingsLayout->addWidget(fullScreenButton);
   settingsLayout->addWidget(extendedSettingsButton);
   settingsLayout->setSpacing(0);

   QHBoxLayout *playListLayout = new QHBoxLayout;
   playlistButton = new QToolButton;
   playlistButton->setIcon(QIcon(":/images/icons/togglePlaylist.png"));
   playlistButton->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
   playlistButton->setMinimumSize(QSize(28,28));
   playlistButton->setToolTip(tr("Toggle playlist"));

   loopButton = new QToolButton;
   loopButton->setIcon(QIcon(":/images/icons/toggleRepeat.png"));
   loopButton->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
   loopButton->setMinimumSize(QSize(28,28));
   loopButton->setToolTip(tr("Click to toggle between loop all, loop one and no loop"));
   loopButton->setProperty("state",QVariant(NO_LOOP));
   loopButton->setCheckable(true);

   randomButton = new QToolButton;
   randomButton->setIcon(QIcon(":/images/icons/random.jpg"));
   randomButton->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
   randomButton->setMinimumSize(QSize(28,28));
   randomButton->setToolTip(tr("Random"));
   randomButton->setCheckable(true);

   playListLayout->addWidget(playlistButton);
   playListLayout->addWidget(loopButton);
   playListLayout->addWidget(randomButton);
   playListLayout->setSpacing(0);

   QHBoxLayout *volumeLayout = new QHBoxLayout;
   volButton = new QToolButton;
   volButton->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
   volButton->setStyleSheet("border:none;background:transparent;");
   volButton->setCheckable(true);
   //vol->setToolTip("");
   connect(volButton,&QToolButton::toggled,this,&MediaControler::toggleVolButton);

   volProgBar = new VolumeProgressBar;
    volumeLayout->addWidget(volButton);
    volumeLayout->addWidget(volProgBar);
    volumeLayout->setSpacing(0);

   QHBoxLayout *bottomLayout = new QHBoxLayout;
   bottomLayout->addWidget(playButton);
   bottomLayout->addLayout(playBackLayout);
   bottomLayout->addLayout(settingsLayout);
   bottomLayout->addLayout(playListLayout);
   bottomLayout->addStretch();
   bottomLayout->addLayout(volumeLayout);
   bottomLayout->setContentsMargins(3,0,3,0);

   QVBoxLayout *mainLayout = new QVBoxLayout;
   mainLayout->addLayout(topLayout);
   mainLayout->addLayout(bottomLayout);
   mainLayout->setContentsMargins(3,0,3,0);

   QFile file(":/styleSheets/volumeSlider.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QTextStream text(&file);

    QString style = text.readAll();

    timeSlider->setStyleSheet(style);
   setLayout(mainLayout);

   setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Fixed);
   setMinimumSize(QSize(480,72));
   setMaximumHeight(72);

   connect(playButton,&QToolButton::clicked,this,&MediaControler::onPlayClicked);
   connect(stopButton,&QToolButton::clicked,this,&MediaControler::stop);
   connect(fullScreenButton,&QToolButton::clicked,this,&MediaControler::onFullScreenClicked);
   connect(previousButton,&QToolButton::clicked,this,&MediaControler::previous);
   connect(previousButton,&QToolButton::pressed ,this,&MediaControler::skipBackward);
   connect(nextButton,&QToolButton::clicked,this,&MediaControler::next);
   connect(nextButton,&QToolButton::pressed,this,&MediaControler::skipForward);
   connect(fullScreenButton,&QToolButton::toggled,this,&MediaControler::onFullScreenClicked);
   connect(volProgBar,&VolumeProgressBar::volumeChanged,this,&MediaControler::volumeChanged);
   connect(timeSlider,&MediaSlider::mediaSliderPressed,this,&MediaControler::onSliderPositionChanged);
   connect(loopButton,&QToolButton::clicked,this,&MediaControler::toggleLoop);

}

void MediaControler::setDuration(quint64 dur)
{
    duration = dur;
    timeSlider->setRange(0,duration);
}

void MediaControler::setVolume(int vol)
{
    volProgBar->setVolume(vol);
}

int MediaControler::volume()
{
    return volProgBar->getVolume();
}

void MediaControler::toggleVolButton(bool isLoud)
{
    if(isLoud){
        volButton->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
         emit muteVolume(true);
    }
    else{
        volButton->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
        emit muteVolume(false);

    }
}
void MediaControler::muted(bool isLoud)
{
    if(isLoud){
        volButton->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
    }
    else{
        volButton->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    }
}


void MediaControler::updateTimeLabels(qint64 tElapsed/*time elapsed in seconds*/,qint64 dur/*duaration in seconds*/)
{
    qint64 tLeft/*time left*/ = dur - tElapsed;
    QString timeElapsedFormat;
    QString timeLeftFormat;

    timeElapsedFormat = tElapsed<3600? QString("mm:ss") : QString("hh:mm:ss");
    timeLeftFormat = tLeft<3600? QString("mm:ss") : QString("hh:mm:ss");

    QTime elapsedTime(tElapsed/3600,tElapsed/60,tElapsed%60);
    QTime leftTime(tLeft/3600,tLeft/60,tLeft%60);

    timeElapsed->setText(elapsedTime.toString(timeElapsedFormat));

    QString displayTime = tr("%1").arg(leftTime.toString(timeLeftFormat));

    if(tLeft>0)
        displayTime.prepend("- ");

    timeLeft->setText(displayTime);

    //convertback to milliseconds

        timeSlider->setValue(tElapsed);

}

void MediaControler::onFullScreenClicked()
{

}

void MediaControler::mediaStateChanged(QMediaPlayer::State state)
{
     mediaState = state;
    switch (state) {
    case QMediaPlayer::PlayingState :
          playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
          playButton->setToolTip(tr("Pause the playback"));
        break;
    case QMediaPlayer::PausedState :
    case QMediaPlayer::StoppedState :
        playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
        playButton->setToolTip(tr("Play\nIf the playlist is empty, open a medium"));
       break;
    default:
        break;
    }
}

void MediaControler::onSliderPositionChanged(qint64 pos)
{
    emit sliderPositionChanged(pos);
}

void MediaControler::onPlayClicked()
{
    switch (mediaState) {
    case QMediaPlayer::PlayingState :
         emit pause();
        break;
    case QMediaPlayer::PausedState :
    case QMediaPlayer::StoppedState :
        emit play();
       break;
    default:
        break;
    }
}
qint64 MediaControler::position(){
    return timeSlider->value();
}
void MediaControler::toggleLoop(){
    if(loopButton->property("state").toInt()==NO_LOOP){
        loopButton->setProperty("state",QVariant(LOOP_ALL));
        loopButton->setIcon(QIcon(":/images/icons/toggleRepeat.png"));
        loopButton->setChecked(true);
        emit loopToggled(LOOP_ALL);
    }
    else if(loopButton->property("state").toInt()==LOOP_ALL){
        loopButton->setProperty("state",QVariant(LOOP_CURRENT));
        loopButton->setIcon(QIcon(":/images/icons/loopOnce.png"));
        loopButton->setChecked(true);
        emit loopToggled(LOOP_CURRENT);
    }
    else if(loopButton->property("state").toInt()==LOOP_CURRENT){
        loopButton->setProperty("state",QVariant(NO_LOOP));
        loopButton->setIcon(QIcon(":/images/icons/toggleRepeat.png"));
        loopButton->setChecked(false);
        emit loopToggled(NO_LOOP);
    }
}
