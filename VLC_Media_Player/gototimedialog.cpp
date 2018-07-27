#include "gototimedialog.h"
#include "ui_gototimedialog.h"

goToTimeDialog::goToTimeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::goToTimeDialog)
{
    ui->setupUi(this);
    connect(ui->toolButton,&QToolButton::clicked,this,&goToTimeDialog::on_toolButton_clicked);
}

goToTimeDialog::~goToTimeDialog()
{
    delete ui;
}

void goToTimeDialog::on_pushButton_clicked()
{
    //ok button
    QTime q_time = ui->timeEdit->time();
    qint64 time = q_time.hour()*60*60*1000 + q_time.minute()*60*1000 +q_time.second()*1000;

    emit goToTime(time);

    accept();
}

void goToTimeDialog::on_toolButton_clicked()
{
    ui->timeEdit->setTime(QTime(0,0,0));
}
