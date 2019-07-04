#ifndef PLAYERPAGE_H
#define PLAYERPAGE_H

#include <QWidget>
#include <QMediaPlayer>
class MediaControler;
class QGraphicsView;
class QGraphicsVideoItem;
class QGraphicsScene;
class PlaylistPage;
class QStackedWidget;

class PlayerPage : public QWidget
{
    Q_OBJECT
public:
    explicit PlayerPage(QWidget *parent = nullptr);
    qint64 mediaDuration()const;
    qint64 mediaPosition() const;
    qreal mediaRate() const;
signals:
     void muted(bool);
     void mediaPosChanged(qint64 pos);
     void mediaStateChanged(QMediaPlayer::State);
     void mediaChanged(const QString&);
public slots:
    void load(const QList<QUrl> &urls);
    void load(const QString& fileName);
    void durationChanged(qint64 dur);
    void positionChanged(qint64 pos);
    void increaseVolume();
    void decreaseVolume();
    void mute(bool muteVol);
    void chagePosition(qint64 pos);
    void play();
    void stop();
    void pause();
    void next();
    void previous();
    void jumpForward();
    void jumpBackward();
    void goToTime(qint64 pos);
    void faster();
    void fasterFine();
    void slower();
    void slowerFine();
    void normalSpeed();
    void addSpeed();
    void reduceSpeed();
    void currentIndexChanged();
    void setPlaylistMode(int);
    void togglePlaylistView(bool isPlaylistView);
    void toggleDockedPlaylistView(bool isDockedPlaylist);

protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
private:
    MediaControler *playerControler;
    QGraphicsView *playerView;
    QGraphicsVideoItem *videoItem;
    QVideoWidget *videoWidget;
    QGraphicsScene *scene;
    QMediaPlayer *player;
    QMediaPlaylist *playlist;
    PlaylistPage *playlistPage;
    QStackedWidget *stackedWidget;

    bool isDockedPlaylist;

    quint64 duration;
    QMediaPlayer::MediaStatus status;

};

#endif // PLAYERPAGE_H
