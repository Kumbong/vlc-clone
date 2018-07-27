#ifndef MESSAGESDIALOG_H
#define MESSAGESDIALOG_H

#include <QDialog>

namespace Ui {
class messagesDialog;
}

class messagesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit messagesDialog(QWidget *parent = 0);
    ~messagesDialog();

private slots:


private:
    Ui::messagesDialog *ui;
};

#endif // MESSAGESDIALOG_H
