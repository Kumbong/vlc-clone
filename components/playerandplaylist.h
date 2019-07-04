#ifndef PLAYERANDPLAYLIST_H
#define PLAYERANDPLAYLIST_H

#include <QWidget>

class QMediaPlayer;
class QVideoWidget;

namespace Ui {
class PlayerAndPlayList;
}

class PlayerAndPlayList : public QWidget
{
    Q_OBJECT

public:
    explicit PlayerAndPlayList(QWidget *parent = 0);
    ~PlayerAndPlayList();

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;

private slots:
    void durationChanged(qint64 duration);
    void positionChanged(qint64 progress);
    void stopMedia();
    void playMedia();
    void pauseMedia();
    void previousMedia();
    void nextMedia();
    void fullScreen();
    void showExtendedSettings();
    void togglePlayList();
    void loop();
    void random();
private:

    Ui::PlayerAndPlayList *ui;
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
    QString trackInfo;
    QString statusInfo;
    qint64 duration;

};

#endif // PLAYERANDPLAYLIST_H
