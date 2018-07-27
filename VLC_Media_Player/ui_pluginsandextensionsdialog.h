/********************************************************************************
** Form generated from reading UI file 'pluginsandextensionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINSANDEXTENSIONSDIALOG_H
#define UI_PLUGINSANDEXTENSIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pluginsAndExtensionsDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QListView *listView_3;
    QWidget *page_8;
    QListView *listView_5;
    QWidget *page_2;
    QListView *listView_4;
    QToolBox *toolBox;
    QWidget *page_3;
    QWidget *page_5;
    QWidget *page_6;
    QWidget *page_7;
    QWidget *page_4;
    QLineEdit *lineEdit_2;
    QWidget *tab_2;
    QListView *listView_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tab_3;
    QListView *listView;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *pluginsAndExtensionsDialog)
    {
        if (pluginsAndExtensionsDialog->objectName().isEmpty())
            pluginsAndExtensionsDialog->setObjectName(QStringLiteral("pluginsAndExtensionsDialog"));
        pluginsAndExtensionsDialog->resize(491, 403);
        tabWidget = new QTabWidget(pluginsAndExtensionsDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 471, 351));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        stackedWidget = new QStackedWidget(tab);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(120, 10, 331, 291));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        listView_3 = new QListView(page);
        listView_3->setObjectName(QStringLiteral("listView_3"));
        listView_3->setGeometry(QRect(5, 1, 321, 281));
        stackedWidget->addWidget(page);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        listView_5 = new QListView(page_8);
        listView_5->setObjectName(QStringLiteral("listView_5"));
        listView_5->setGeometry(QRect(0, 0, 321, 281));
        stackedWidget->addWidget(page_8);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        listView_4 = new QListView(page_2);
        listView_4->setObjectName(QStringLiteral("listView_4"));
        listView_4->setGeometry(QRect(0, 0, 321, 281));
        stackedWidget->addWidget(page_2);
        toolBox = new QToolBox(tab);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 40, 101, 241));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 101, 106));
        toolBox->addItem(page_3, QStringLiteral("All"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        toolBox->addItem(page_5, QStringLiteral("Skins"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        toolBox->addItem(page_6, QStringLiteral("Playlist parsers"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        toolBox->addItem(page_7, QStringLiteral("Service Discovery"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 101, 106));
        toolBox->addItem(page_4, QStringLiteral("Extensions"));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 10, 101, 20));
        lineEdit_2->setClearButtonEnabled(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        listView_2 = new QListView(tab_2);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(10, 10, 441, 281));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 300, 131, 23));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 300, 131, 23));
        pushButton_3->setStyleSheet(QStringLiteral(""));
        pushButton_3->setFlat(false);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        listView = new QListView(tab_3);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 10, 441, 281));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 300, 41, 21));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 300, 391, 20));
        lineEdit->setClearButtonEnabled(true);
        tabWidget->addTab(tab_3, QString());
        pushButton = new QPushButton(pluginsAndExtensionsDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 370, 75, 23));

        retranslateUi(pluginsAndExtensionsDialog);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(4);
        pushButton_3->setDefault(false);


        QMetaObject::connectSlotsByName(pluginsAndExtensionsDialog);
    } // setupUi

    void retranslateUi(QDialog *pluginsAndExtensionsDialog)
    {
        pluginsAndExtensionsDialog->setWindowTitle(QApplication::translate("pluginsAndExtensionsDialog", "Addons Manager", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("pluginsAndExtensionsDialog", "All", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("pluginsAndExtensionsDialog", "Skins", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("pluginsAndExtensionsDialog", "Playlist parsers", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_7), QApplication::translate("pluginsAndExtensionsDialog", "Service Discovery", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("pluginsAndExtensionsDialog", "Extensions", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("pluginsAndExtensionsDialog", "Search", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("pluginsAndExtensionsDialog", "Addons Manager", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("pluginsAndExtensionsDialog", "Reload extensions", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("pluginsAndExtensionsDialog", "More information", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("pluginsAndExtensionsDialog", "Active Extensions", Q_NULLPTR));
        label->setText(QApplication::translate("pluginsAndExtensionsDialog", "Search:", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("pluginsAndExtensionsDialog", "Search", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("pluginsAndExtensionsDialog", "Plugins", Q_NULLPTR));
        pushButton->setText(QApplication::translate("pluginsAndExtensionsDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pluginsAndExtensionsDialog: public Ui_pluginsAndExtensionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINSANDEXTENSIONSDIALOG_H
