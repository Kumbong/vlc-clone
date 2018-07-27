#include "volumeprogressbar.h"
#include <QPainter>
#include <QMouseEvent>
#include <QtDebug>

VolumeProgressBar::VolumeProgressBar(QWidget *parent) : QWidget(parent)
{
    volume = 100;
    setToolTip(QString("%1 %").arg(volume));
    setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    connect(this,&VolumeProgressBar::volumeChanged,this,&VolumeProgressBar::setVolume);

}
QSize VolumeProgressBar::sizeHint() const
{
    return QSize(120,25);
}
void VolumeProgressBar::paintEvent(QPaintEvent *event)
{
   QPainter painter(this);
   QPen pen;
   pen.setJoinStyle(Qt::RoundJoin);
   painter.setRenderHint(QPainter::Antialiasing);
   static const QPointF points[3] = {
       QPointF(0.0, 25.0),
       QPointF(120.0, 25.0),
       QPointF(120.0, 0.0),
       //QPointF(90.0, 70.0)
   };
   QLinearGradient gradient(QPointF(0.0, 25.0),QPointF(120.0, 25.0));

   gradient.setSpread(QGradient::ReflectSpread);
   if(volume<=100){
       gradient.setColorAt(0.0,QColor::fromRgb(11, 196, 79));
       if(volume!=0 && volume!=1)
            gradient.setColorAt((volume-1)/120.0,QColor::fromRgb(11, 196, 79));
       gradient.setColorAt(volume/120.0,QWidget::palette().background().color());
   }
   else if(volume<=115){
       gradient.setColorAt(0.0,QColor::fromRgb(11, 196, 79));
       gradient.setColorAt(99/120.0,QColor::fromRgb(11, 196, 79));
       gradient.setColorAt(100/120.0,QColor::fromRgb(249, 202, 29));
       gradient.setColorAt((volume-1)/120.0,QColor::fromRgb(247, 159, 27));
       gradient.setColorAt(volume/120.0,QWidget::palette().background().color());

   }
   else{
       gradient.setColorAt(0.0,QColor::fromRgb(11, 196, 79));
       gradient.setColorAt(99/120.0,QColor::fromRgb(11, 196, 79));
       gradient.setColorAt(100/120.0,QColor::fromRgb(249, 202, 29));
       //gradient.setColorAt(109/120.0,QColor::fromRgb(249, 202, 29));
       gradient.setColorAt(115/120.0,QColor::fromRgb(249, 69, 29));
       //gradient.setColorAt((volume-1)/120.0,Qt::red);

       gradient.setColorAt((volume)/120.0,QWidget::palette().background().color());
   }
   QBrush brush(gradient);

   painter.setPen(pen);
   painter.setBrush(brush);
   painter.drawPolygon(points,3);

   QPen volumeLabelPen;
   volumeLabelPen.setColor(Qt::gray);
   painter.setPen(volumeLabelPen);

   painter.drawText(QRect(15,0,35,15),QString("%1 %").arg(volume));

   QWidget::paintEvent(event);
}

void VolumeProgressBar::mousePressEvent(QMouseEvent *event)
{
   if(event->x()>=0 &&event->x()<=120)
        volume = event->x();
   else if(event->x() >120)
       volume =120;
   else
       volume = 0;
   update();
   qDebug()<<volume;

   emit volumeChanged(volume);
   QWidget::mousePressEvent(event);
}

void VolumeProgressBar::mouseMoveEvent(QMouseEvent *event)
{
    mousePressEvent(event);
}

void VolumeProgressBar::setVolume(int vol)
{
    volume = vol;
    update();
}
int VolumeProgressBar::getVolume() const{
    return volume;
}



