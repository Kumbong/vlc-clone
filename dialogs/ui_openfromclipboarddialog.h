/********************************************************************************
** Form generated from reading UI file 'openfromclipboarddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENFROMCLIPBOARDDIALOG_H
#define UI_OPENFROMCLIPBOARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_openFromClipboardDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *openFromClipboardDialog)
    {
        if (openFromClipboardDialog->objectName().isEmpty())
            openFromClipboardDialog->setObjectName(QStringLiteral("openFromClipboardDialog"));
        openFromClipboardDialog->resize(309, 95);
        gridLayout = new QGridLayout(openFromClipboardDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(openFromClipboardDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(openFromClipboardDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(openFromClipboardDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(openFromClipboardDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(openFromClipboardDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(openFromClipboardDialog);

        QMetaObject::connectSlotsByName(openFromClipboardDialog);
    } // setupUi

    void retranslateUi(QDialog *openFromClipboardDialog)
    {
        openFromClipboardDialog->setWindowTitle(QApplication::translate("openFromClipboardDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("openFromClipboardDialog", "Please enter the URL or path to the media you want to play.", Q_NULLPTR));
        pushButton->setText(QApplication::translate("openFromClipboardDialog", "Play", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("openFromClipboardDialog", "Enqeue", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("openFromClipboardDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class openFromClipboardDialog: public Ui_openFromClipboardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENFROMCLIPBOARDDIALOG_H
