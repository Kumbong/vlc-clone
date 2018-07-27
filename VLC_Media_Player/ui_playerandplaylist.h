/********************************************************************************
** Form generated from reading UI file 'playerandplaylist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERANDPLAYLIST_H
#define UI_PLAYERANDPLAYLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerAndPlayList
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QListView *listView;
    QToolButton *toolButton_5;
    QToolButton *toolButton_7;
    QToolButton *toolButton_9;
    QToolButton *toolButton_4;
    QToolButton *toolButton_10;
    QToolButton *toolButton_12;
    QSlider *volumeSlider;
    QToolButton *toolButton_6;
    QToolButton *toolButton_8;
    QToolButton *toolButton_11;
    QLabel *volumeLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *timeElapsed;
    QSlider *timeSlider;
    QLabel *timeLeft_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *PlayerAndPlayList)
    {
        if (PlayerAndPlayList->objectName().isEmpty())
            PlayerAndPlayList->setObjectName(QStringLiteral("PlayerAndPlayList"));
        PlayerAndPlayList->resize(823, 454);
        gridLayout = new QGridLayout(PlayerAndPlayList);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(PlayerAndPlayList);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setStyleSheet(QLatin1String("image: url(:/images/icons/windowIcon.png);\n"
"background-color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        listView = new QListView(page_2);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(530, 90, 256, 192));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 13);

        toolButton_5 = new QToolButton(PlayerAndPlayList);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));

        gridLayout->addWidget(toolButton_5, 2, 2, 1, 1);

        toolButton_7 = new QToolButton(PlayerAndPlayList);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));

        gridLayout->addWidget(toolButton_7, 2, 3, 1, 1);

        toolButton_9 = new QToolButton(PlayerAndPlayList);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));

        gridLayout->addWidget(toolButton_9, 2, 5, 1, 1);

        toolButton_4 = new QToolButton(PlayerAndPlayList);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));

        gridLayout->addWidget(toolButton_4, 2, 0, 1, 1);

        toolButton_10 = new QToolButton(PlayerAndPlayList);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));

        gridLayout->addWidget(toolButton_10, 2, 6, 1, 1);

        toolButton_12 = new QToolButton(PlayerAndPlayList);
        toolButton_12->setObjectName(QStringLiteral("toolButton_12"));

        gridLayout->addWidget(toolButton_12, 2, 8, 1, 1);

        volumeSlider = new QSlider(PlayerAndPlayList);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(volumeSlider->sizePolicy().hasHeightForWidth());
        volumeSlider->setSizePolicy(sizePolicy);
        volumeSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(volumeSlider, 2, 10, 1, 1);

        toolButton_6 = new QToolButton(PlayerAndPlayList);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));

        gridLayout->addWidget(toolButton_6, 2, 1, 1, 1);

        toolButton_8 = new QToolButton(PlayerAndPlayList);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));

        gridLayout->addWidget(toolButton_8, 2, 4, 1, 1);

        toolButton_11 = new QToolButton(PlayerAndPlayList);
        toolButton_11->setObjectName(QStringLiteral("toolButton_11"));

        gridLayout->addWidget(toolButton_11, 2, 7, 1, 1);

        volumeLabel = new QLabel(PlayerAndPlayList);
        volumeLabel->setObjectName(QStringLiteral("volumeLabel"));

        gridLayout->addWidget(volumeLabel, 2, 11, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        timeElapsed = new QLabel(PlayerAndPlayList);
        timeElapsed->setObjectName(QStringLiteral("timeElapsed"));

        horizontalLayout->addWidget(timeElapsed);

        timeSlider = new QSlider(PlayerAndPlayList);
        timeSlider->setObjectName(QStringLiteral("timeSlider"));
        timeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(timeSlider);

        timeLeft_2 = new QLabel(PlayerAndPlayList);
        timeLeft_2->setObjectName(QStringLiteral("timeLeft_2"));

        horizontalLayout->addWidget(timeLeft_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 13);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 9, 1, 1);


        retranslateUi(PlayerAndPlayList);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PlayerAndPlayList);
    } // setupUi

    void retranslateUi(QWidget *PlayerAndPlayList)
    {
        PlayerAndPlayList->setWindowTitle(QApplication::translate("PlayerAndPlayList", "Form", Q_NULLPTR));
        toolButton_5->setText(QApplication::translate("PlayerAndPlayList", "...", Q_NULLPTR));
        toolButton_7->setText(QApplication::translate("PlayerAndPlayList", "...", Q_NULLPTR));
        toolButton_9->setText(QApplication::translate("PlayerAndPlayList", "...", Q_NULLPTR));
        toolButton_4->setText(QApplication::translate("PlayerAndPlayList", "...", Q_NULLPTR));
        toolButton_10->setText(QApplication::translate("PlayerAndPlayList", "...", Q_NULLPTR));
        toolButton_12->setText(QApplication::translate("PlayerAndPlayList", "...", Q_NULLPTR));
        toolButton_6->setText(QApplication::translate("PlayerAndPlayList", "...", Q_NULLPTR));
        toolButton_8->setText(QApplication::translate("PlayerAndPlayList", "...", Q_NULLPTR));
        toolButton_11->setText(QApplication::translate("PlayerAndPlayList", "...", Q_NULLPTR));
        volumeLabel->setText(QApplication::translate("PlayerAndPlayList", "TextLabel", Q_NULLPTR));
        timeElapsed->setText(QApplication::translate("PlayerAndPlayList", "TextLabel", Q_NULLPTR));
        timeLeft_2->setText(QApplication::translate("PlayerAndPlayList", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlayerAndPlayList: public Ui_PlayerAndPlayList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERANDPLAYLIST_H
