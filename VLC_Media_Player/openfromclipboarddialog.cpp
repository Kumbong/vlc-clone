#include "openfromclipboarddialog.h"
#include "ui_openfromclipboarddialog.h"

openFromClipboardDialog::openFromClipboardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::openFromClipboardDialog)
{
    ui->setupUi(this);
}

openFromClipboardDialog::~openFromClipboardDialog()
{
    delete ui;
}
