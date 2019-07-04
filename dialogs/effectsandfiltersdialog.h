#ifndef EFFECTSANDFILTERSDIALOG_H
#define EFFECTSANDFILTERSDIALOG_H

#include <QDialog>
class QLabel;
namespace Ui {
class effectsAndFiltersDialog;
}

class effectsAndFiltersDialog : public QDialog
{
    Q_OBJECT

public:
    explicit effectsAndFiltersDialog(QWidget *parent = 0);
    ~effectsAndFiltersDialog();

private slots:
    void on_audioTrackSpinBox_valueChanged(double arg1);

    void on_subTrackSpinBox_valueChanged(double arg1);

    void on_syncTopAndBottomCheckBox_toggled(bool checked);

    void on_syncLeftAndRightCheckBox_toggled(bool checked);

    void on_angleDial_valueChanged(int value);

    void on_overlayLogoButton_clicked();

    void on_overlayMaskButton_clicked();

private:
    //helper functions
    void setSyncLabelText(double arg1,QLabel *label);//called by on_audioTrackSpinBox_valueChanged(double arg1) and on_subTrackSpinBox_valueChanged(double arg1)
    void configureSpatialiser();
    void configureCompressor();
    void configureEqualiser();
    void configureVideoEffects();
    Ui::effectsAndFiltersDialog *ui;
};

#endif // EFFECTSANDFILTERSDIALOG_H
