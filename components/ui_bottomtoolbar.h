/********************************************************************************
** Form generated from reading UI file 'bottomtoolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOTTOMTOOLBAR_H
#define UI_BOTTOMTOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QToolButton *toolButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QSlider *horizontalSlider;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QWidget *tab_7;
    QWidget *tab_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(901, 514);
        toolButton = new QToolButton(Form);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(10, 20, 41, 41));
        layoutWidget = new QWidget(Form);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 20, 73, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        toolButton_5 = new QToolButton(layoutWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));

        horizontalLayout_3->addWidget(toolButton_5);

        toolButton_6 = new QToolButton(layoutWidget);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));

        horizontalLayout_3->addWidget(toolButton_6);

        toolButton_7 = new QToolButton(layoutWidget);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));

        horizontalLayout_3->addWidget(toolButton_7);

        layoutWidget_2 = new QWidget(Form);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(150, 20, 51, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setSpacing(1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        toolButton_8 = new QToolButton(layoutWidget_2);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));

        horizontalLayout_4->addWidget(toolButton_8);

        toolButton_9 = new QToolButton(layoutWidget_2);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));

        horizontalLayout_4->addWidget(toolButton_9);

        horizontalSlider = new QSlider(Form);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(690, 30, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(Form);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(300, 270, 127, 80));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 127, 80));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tabWidget_3 = new QTabWidget(Form);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(30, 380, 311, 111));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_3->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tabWidget_3->addTab(tab_7, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget_3->addTab(tab_6, QString());
        widget = new QWidget(Form);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 881, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 10));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);

        widget1 = new QWidget(Form);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(70, 20, 71, 41));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButton_2 = new QToolButton(widget1);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        horizontalLayout_2->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(widget1);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        horizontalLayout_2->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(widget1);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));

        horizontalLayout_2->addWidget(toolButton_4);


        retranslateUi(Form);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        toolButton->setText(QString());
        toolButton_5->setText(QString());
        toolButton_6->setText(QString());
        toolButton_7->setText(QString());
        toolButton_8->setText(QString());
        toolButton_9->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Form", "Tab 1", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("Form", "Tab 2", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form", "Tab 2", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("Form", "Tab 1", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("Form", "Page", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("Form", "Tab 2", Q_NULLPTR));
        label->setText(QApplication::translate("Form", "00:00", Q_NULLPTR));
        toolButton_2->setText(QString());
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOTTOMTOOLBAR_H
