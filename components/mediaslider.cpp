#include "mediaslider.h"

void MediaSlider::onMediaSliderPressed()
{
    //sends the value in ms
    emit mediaSliderPressed(value()*1000);
}

MediaSlider::MediaSlider(QWidget *parent) : QSlider(Qt::Horizontal,parent)
{
    connect(this,&MediaSlider::sliderPressed,this,&MediaSlider::onMediaSliderPressed);
}

void MediaSlider::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        setValue(minimum()+(maximum()-minimum())*(event->x())/width());

        event->accept();
    }
    QSlider::mousePressEvent(event);
}
