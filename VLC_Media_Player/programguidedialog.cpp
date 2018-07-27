#include "programguidedialog.h"
#include "ui_programguidedialog.h"

programGuideDialog::programGuideDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::programGuideDialog)
{
    ui->setupUi(this);
}

programGuideDialog::~programGuideDialog()
{
    delete ui;
}
