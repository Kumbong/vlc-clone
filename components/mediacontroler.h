#ifndef MEDIACONTROLER_H
#define MEDIACONTROLER_H

#include <QWidget>
#include <QMediaPlayer>
class QLabel;
class QSlider;
class QToolButton;
class VolumeProgressBar;
class MediaSlider;


class MediaControler : public QWidget
{
    Q_OBJECT
public:
    enum{
        NO_LOOP,
        LOOP_ALL,
        LOOP_CURRENT
    };
    explicit MediaControler(QWidget *parent = nullptr);
    void setDuration(quint64 dur);
    void setVolume(int vol);
    int volume();
    qint64 position();

signals:
    void play();
    void pause();
    void stop();
    void previous();
    void skipBackward();
    void next();
    void skipForward();
    void toggleFullScreen(bool);
    void togglePlaylist(bool);
    void muteVolume(bool);
    void volumeChanged(int);
    void sliderPositionChanged(qint64);
    void loopToggled(int);


public slots:
    void toggleVolButton(bool isLoud);
    void updateTimeLabels(qint64 tElapsed,qint64 dur);
    void onFullScreenClicked();
    void onPlayClicked();
    void muted(bool);
    void mediaStateChanged(QMediaPlayer::State);
    void onSliderPositionChanged(qint64 pos);
    /*void onExtendedSettingsClicked();
    void onPlaylistClicked();*/
    void toggleLoop();
    //void onRandomClicked();

private:
  QLabel *timeElapsed;
  QLabel *timeLeft;
  MediaSlider *timeSlider;
  QToolButton *playButton;
  QToolButton *previousButton;
  QToolButton *stopButton;
  QToolButton *nextButton;
  QToolButton *fullScreenButton;
  QToolButton *extendedSettingsButton;
  QToolButton *playlistButton;
  QToolButton *loopButton;
  QToolButton *randomButton;
  QToolButton *volButton;
  VolumeProgressBar *volProgBar;
  QMediaPlayer::State mediaState;

  bool isMute;
  int duration;
};

#endif // MEDIACONTROLER_H
