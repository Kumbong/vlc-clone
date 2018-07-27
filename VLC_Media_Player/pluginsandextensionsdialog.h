#ifndef PLUGINSANDEXTENSIONSDIALOG_H
#define PLUGINSANDEXTENSIONSDIALOG_H

#include <QDialog>

namespace Ui {
class pluginsAndExtensionsDialog;
}

class pluginsAndExtensionsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit pluginsAndExtensionsDialog(QWidget *parent = 0);
    ~pluginsAndExtensionsDialog();

private:
    Ui::pluginsAndExtensionsDialog *ui;
};

#endif // PLUGINSANDEXTENSIONSDIALOG_H
