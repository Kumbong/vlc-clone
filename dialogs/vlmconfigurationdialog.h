#ifndef VLMCONFIGURATIONDIALOG_H
#define VLMCONFIGURATIONDIALOG_H

#include <QDialog>

namespace Ui {
class VLMconfigurationDialog;
}

class VLMconfigurationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VLMconfigurationDialog(QWidget *parent = 0);
    ~VLMconfigurationDialog();

private:
    Ui::VLMconfigurationDialog *ui;
};

#endif // VLMCONFIGURATIONDIALOG_H
