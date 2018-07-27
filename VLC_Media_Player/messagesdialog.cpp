#include "messagesdialog.h"
#include "ui_messagesdialog.h"

messagesDialog::messagesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::messagesDialog)
{
    ui->setupUi(this);
}

messagesDialog::~messagesDialog()
{
    delete ui;
}

