#include "pluginsandextensionsdialog.h"
#include "ui_pluginsandextensionsdialog.h"

pluginsAndExtensionsDialog::pluginsAndExtensionsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pluginsAndExtensionsDialog)
{
    ui->setupUi(this);
}

pluginsAndExtensionsDialog::~pluginsAndExtensionsDialog()
{
    delete ui;
}
