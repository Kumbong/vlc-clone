#ifndef OPENMEDIADIALOG_H
#define OPENMEDIADIALOG_H

#include <QDialog>

namespace Ui {
class openMediaDialog;
}

class openMediaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit openMediaDialog(QWidget *parent = 0);
    ~openMediaDialog();

private slots:
    void on_showMoreOptionsCheckBox_toggled(bool checked);

private:
    Ui::openMediaDialog *ui;
};

#endif // OPENMEDIADIALOG_H
