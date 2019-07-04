#ifndef GOTOTIMEDIALOG_H
#define GOTOTIMEDIALOG_H

#include <QDialog>

namespace Ui {
class goToTimeDialog;
}

class goToTimeDialog : public QDialog
{
    Q_OBJECT

signals:
    void goToTime(qint64);
public:
    explicit goToTimeDialog(QWidget *parent = 0);
    ~goToTimeDialog();
private slots:
    void on_pushButton_clicked();

    void on_toolButton_clicked();

private:

    Ui::goToTimeDialog *ui;
};

#endif // GOTOTIMEDIALOG_H
