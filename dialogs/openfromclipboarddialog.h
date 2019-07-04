#ifndef OPENFROMCLIPBOARDDIALOG_H
#define OPENFROMCLIPBOARDDIALOG_H

#include <QDialog>

namespace Ui {
class openFromClipboardDialog;
}

class openFromClipboardDialog : public QDialog
{
    Q_OBJECT

public:
    explicit openFromClipboardDialog(QWidget *parent = 0);
    ~openFromClipboardDialog();

private:
    Ui::openFromClipboardDialog *ui;
};

#endif // OPENFROMCLIPBOARDDIALOG_H
