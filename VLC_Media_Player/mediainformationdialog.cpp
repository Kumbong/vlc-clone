#include "mediainformationdialog.h"
#include "ui_mediainformationdialog.h"

mediaInformationDialog::mediaInformationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mediaInformationDialog)
{
    ui->setupUi(this);
}

mediaInformationDialog::~mediaInformationDialog()
{
    delete ui;
}
