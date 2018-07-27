#include "playerandplaylist.h"
#include "ui_playerandplaylist.h"

PlayerAndPlayList::PlayerAndPlayList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayerAndPlayList)
{
    ui->setupUi(this);
}

PlayerAndPlayList::~PlayerAndPlayList()
{
    delete ui;
}

void PlayerAndPlayList::durationChanged(qint64 duration)
{
    this->duration = duration/1000;
    ui->timeSlider->setRange(0,duration);
}

