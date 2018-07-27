#ifndef MEDIASLIDER_H
#define MEDIASLIDER_H

#include <QSlider>
#include <QtWidgets>

class MediaSlider : public QSlider
{
    Q_OBJECT
signals:
    void mediaSliderPressed(qint64);
private slots:
     void onMediaSliderPressed();
public:
    MediaSlider(QWidget *parent=0);
protected:
    void mousePressEvent(QMouseEvent *event);
};

#endif // MEDIASLIDER_H
