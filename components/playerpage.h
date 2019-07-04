#ifndef PLAYERPAGE_H
#define PLAYERPAGE_H

#include <QWidget>
#include <QMediaPlayer>
#include "playernamespace.h"
class MediaControler;
class QGraphicsView;
class QGraphicsVideoItem;
class QGraphicsScene;
class PlaylistPage;
class QVBoxLayout;
class PlayerPage : public QWidget
{
    Q_OBJECT
public:
    explicit PlayerPage(QWidget *parent = nullptr);
    qint64 mediaDuration()const;
    qint64 mediaPosition() const;
    qreal mediaRate() const;
    QMediaPlaylist* getPlaylist();
signals:
     void muted(bool);
     void mediaPosChanged(qint64 pos);
     void mediaStateChanged(QMediaPlayer::State);
     void mediaChanged(const QString&);
     void mediaAdded(int count);

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
    void playlistViewModeChanged(PlaylistViewMode);
    void changeView(bool,bool);
    void setDockedView(bool);

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
    quint64 duration;
    QMediaPlayer::MediaStatus status;
    QVBoxLayout *layout;
    PlaylistViewMode pl_viewMode;

    bool dockedView;

};

#endif // PLAYERPAGE_H
