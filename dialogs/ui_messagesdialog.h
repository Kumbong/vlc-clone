/********************************************************************************
** Form generated from reading UI file 'messagesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGESDIALOG_H
#define UI_MESSAGESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_messagesDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *textEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWidget *tab_2;
    QTreeView *treeView;
    QPushButton *pushButton_2;

    void setupUi(QDialog *messagesDialog)
    {
        if (messagesDialog->objectName().isEmpty())
            messagesDialog->setObjectName(QStringLiteral("messagesDialog"));
        messagesDialog->resize(514, 462);
        tabWidget = new QTabWidget(messagesDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 491, 411));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 461, 331));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 350, 461, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        treeView = new QTreeView(tab_2);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(15, 11, 451, 361));
        tabWidget->addTab(tab_2, QString());
        pushButton_2 = new QPushButton(messagesDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 430, 75, 23));

        retranslateUi(messagesDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(messagesDialog);
    } // setupUi

    void retranslateUi(QDialog *messagesDialog)
    {
        messagesDialog->setWindowTitle(QApplication::translate("messagesDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("messagesDialog", "Verbosity:", Q_NULLPTR));
        label_2->setText(QApplication::translate("messagesDialog", "Filter:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("messagesDialog", "Save as...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("messagesDialog", "Messages", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("messagesDialog", "Modules Tree", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("messagesDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class messagesDialog: public Ui_messagesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGESDIALOG_H
