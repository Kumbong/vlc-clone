#ifndef PROGRAMGUIDEDIALOG_H
#define PROGRAMGUIDEDIALOG_H

#include <QDialog>

namespace Ui {
class programGuideDialog;
}

class programGuideDialog : public QDialog
{
    Q_OBJECT

public:
    explicit programGuideDialog(QWidget *parent = 0);
    ~programGuideDialog();

private:
    Ui::programGuideDialog *ui;
};

#endif // PROGRAMGUIDEDIALOG_H
