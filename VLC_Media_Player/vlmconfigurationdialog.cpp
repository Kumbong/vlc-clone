#include "vlmconfigurationdialog.h"
#include "ui_vlmconfigurationdialog.h"

VLMconfigurationDialog::VLMconfigurationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VLMconfigurationDialog)
{
    ui->setupUi(this);
}

VLMconfigurationDialog::~VLMconfigurationDialog()
{
    delete ui;
}
