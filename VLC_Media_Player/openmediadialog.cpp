#include "openmediadialog.h"
#include "ui_openmediadialog.h"

openMediaDialog::openMediaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::openMediaDialog)
{
    ui->setupUi(this);
    ui->moreOptionsGroupBox->setVisible(ui->showMoreOptionsCheckBox->isChecked());
}

openMediaDialog::~openMediaDialog()
{
    delete ui;
}

void openMediaDialog::on_showMoreOptionsCheckBox_toggled(bool checked)
{
    ui->moreOptionsGroupBox->setVisible(checked);
}
