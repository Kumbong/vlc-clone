#ifndef VOLUMEPROGRESSBAR_H
#define VOLUMEPROGRESSBAR_H

#include <QWidget>

class VolumeProgressBar : public QWidget
{
    Q_OBJECT
public:
    explicit VolumeProgressBar(QWidget *parent = nullptr);
    QSize sizeHint() const;
    int getVolume() const;
protected:

    void paintEvent(QPaintEvent* event);
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);


signals:
    void volumeChanged(int);
public slots:
    void setVolume(int vol);

private:
    int volume;
};

#endif // VOLUMEPROGRESSBAR_H
