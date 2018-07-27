#ifndef MEDIAINFORMATIONDIALOG_H
#define MEDIAINFORMATIONDIALOG_H

#include <QDialog>

namespace Ui {
class mediaInformationDialog;
}

class mediaInformationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit mediaInformationDialog(QWidget *parent = 0);
    ~mediaInformationDialog();

private:
    Ui::mediaInformationDialog *ui;
};

#endif // MEDIAINFORMATIONDIALOG_H
