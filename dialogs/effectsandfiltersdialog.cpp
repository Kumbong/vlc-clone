#include "effectsandfiltersdialog.h"
#include "ui_effectsandfiltersdialog.h"
#include <QFileDialog>

effectsAndFiltersDialog::effectsAndFiltersDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::effectsAndFiltersDialog)
{

    ui->setupUi(this);
    configureSpatialiser();
    setSyncLabelText(ui->audioTrackSpinBox->value(),ui->audioTrackLabel);
    setSyncLabelText(ui->subTrackSpinBox->value(),ui->subTrackLabel);
}

effectsAndFiltersDialog::~effectsAndFiltersDialog()
{
    delete ui;
}

void effectsAndFiltersDialog::configureSpatialiser()
{
    QSlider *dampSlider = ui->dampSlider;
    QLabel *dampValue = ui->dampValue;

    dampSlider->setRange(0,10);
    dampValue->setText(QString::number(dampSlider->value()));
    connect(dampSlider,SIGNAL(valueChanged(int)),dampValue,SLOT(setNum(int)));

    QSlider *drySlider = ui->drySlider;
    QLabel *dryValue = ui->dryValue;

    drySlider->setRange(0,10);
    dryValue->setText(QString::number(drySlider->value()));
    connect(drySlider,SIGNAL(valueChanged(int)),dryValue,SLOT(setNum(int)));

    QSlider *wetSlider = ui->wetSlider;
    QLabel *wetValue = ui->wetValue;

    wetSlider->setRange(0,10);
    wetValue->setText(QString::number(wetSlider->value()));
    connect(wetSlider,SIGNAL(valueChanged(int)),wetValue,SLOT(setNum(int)));

    QSlider *widthSlider = ui->widthSlider;
    QLabel *widthValue = ui->widthValue;

    widthSlider->setRange(0,10);
    widthValue->setText(QString::number(widthSlider->value()));
    connect(widthSlider,SIGNAL(valueChanged(int)),widthValue,SLOT(setNum(int)));

    QSlider *sizeSlider = ui->sizeSlider;
    QLabel *sizeValue = ui->sizeValue;

    sizeSlider->setRange(0,11);
    sizeValue->setText(QString::number(sizeSlider->value()));
    connect(sizeSlider,SIGNAL(valueChanged(int)),sizeValue,SLOT(setNum(int)));


}

void effectsAndFiltersDialog::configureCompressor()
{

}

void effectsAndFiltersDialog::configureEqualiser()
{

}

void effectsAndFiltersDialog::configureVideoEffects()
{
  ui->topSpinBox->setSuffix(tr(" px"));
  ui->leftSpinBox->setSuffix(tr(" px"));
  ui->rightSpinBox->setSuffix(tr(" px"));
  ui->bottomSpinBox->setSuffix(tr(" px"));
  ui->bottomSpinBox->setDisabled(ui->syncTopAndBottomCheckBox->isChecked());
  ui->rightSpinBox->setDisabled(ui->syncLeftAndRightCheckBox->isChecked());
  ui->dialValueLabel->setText(QString::number(ui->angleDial->value()));
}

void effectsAndFiltersDialog::on_audioTrackSpinBox_valueChanged(double arg1)
{
        setSyncLabelText(arg1,ui->audioTrackLabel);

}

void effectsAndFiltersDialog::on_subTrackSpinBox_valueChanged(double arg1)
{
        setSyncLabelText(arg1,ui->subTrackLabel);
}

void effectsAndFiltersDialog::setSyncLabelText(double arg1, QLabel *label)
{
    if(arg1>=0.05)
        label->setText(tr("(Delayed)"));
    else if(arg1<=-0.05)
        label->setText(tr("(Hastened)"));
    else
        label->setText(tr(" "));
}

void effectsAndFiltersDialog::on_syncTopAndBottomCheckBox_toggled(bool checked)
{
   ui->bottomSpinBox->setDisabled(checked);
}

void effectsAndFiltersDialog::on_syncLeftAndRightCheckBox_toggled(bool checked)
{
    ui->rightSpinBox->setDisabled(checked);
}

void effectsAndFiltersDialog::on_angleDial_valueChanged(int value)
{
    ui->dialValueLabel->setText(QString::number(value));
}

void effectsAndFiltersDialog::on_overlayLogoButton_clicked()
{
    QFileDialog dialog(this,tr("Logo Filenames"));
    dialog.setFileMode(QFileDialog::ExistingFiles);
    dialog.setNameFilter(tr("Images (*.png *.jpg);;All Files(*)"));
    dialog.setViewMode(QFileDialog::Detail);
    dialog.setAcceptMode(QFileDialog::AcceptOpen);

    QString logoFileName;
    if(dialog.exec()){
        logoFileName = dialog.selectedFiles().first();
        ui->overlayLogoLineEdit->setText(logoFileName);
    }
}

void effectsAndFiltersDialog::on_overlayMaskButton_clicked()
{
    QFileDialog dialog(this,tr("Image Mask"));
    dialog.setFileMode(QFileDialog::ExistingFiles);
    dialog.setNameFilter(tr("Images (*.png *.jpg);;All Files(*)"));
    dialog.setViewMode(QFileDialog::Detail);
    dialog.setAcceptMode(QFileDialog::AcceptOpen);

    QString logoFileName;
    if(dialog.exec()){
        logoFileName = dialog.selectedFiles().first();
        ui->overlayMaskLineEdit->setText(logoFileName);
    }
}
