/********************************************************************************
** Form generated from reading UI file 'toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLBAR_H
#define UI_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolBar
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QLabel *label_2;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QLabel *label_3;
    QSlider *horizontalSlider;

    void setupUi(QWidget *ToolBar)
    {
        if (ToolBar->objectName().isEmpty())
            ToolBar->setObjectName(QStringLiteral("ToolBar"));
        ToolBar->resize(763, 64);
        gridLayout_4 = new QGridLayout(ToolBar);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ToolBar);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        progressBar = new QProgressBar(ToolBar);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 9));
        progressBar->setStyleSheet(QStringLiteral(""));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        horizontalLayout->addWidget(progressBar);

        label_2 = new QLabel(ToolBar);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 3);

        toolButton = new QToolButton(ToolBar);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout_4->addWidget(toolButton, 1, 0, 2, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        toolButton_2 = new QToolButton(ToolBar);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(toolButton_2, 0, 0, 1, 1);

        toolButton_3 = new QToolButton(ToolBar);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        sizePolicy.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(toolButton_3, 0, 1, 1, 1);

        toolButton_4 = new QToolButton(ToolBar);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        sizePolicy.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(toolButton_4, 0, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        toolButton_5 = new QToolButton(ToolBar);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        sizePolicy.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(toolButton_5);

        toolButton_6 = new QToolButton(ToolBar);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        sizePolicy.setHeightForWidth(toolButton_6->sizePolicy().hasHeightForWidth());
        toolButton_6->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(toolButton_6);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        toolButton_7 = new QToolButton(ToolBar);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        sizePolicy.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(toolButton_7, 0, 0, 1, 1);

        toolButton_8 = new QToolButton(ToolBar);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        sizePolicy.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(toolButton_8, 0, 1, 1, 1);

        toolButton_9 = new QToolButton(ToolBar);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        sizePolicy.setHeightForWidth(toolButton_9->sizePolicy().hasHeightForWidth());
        toolButton_9->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(toolButton_9, 0, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 1, 2, 1);

        label_3 = new QLabel(ToolBar);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 1, 2, 1, 1);

        horizontalSlider = new QSlider(ToolBar);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider, 2, 2, 1, 1);


        retranslateUi(ToolBar);

        QMetaObject::connectSlotsByName(ToolBar);
    } // setupUi

    void retranslateUi(QWidget *ToolBar)
    {
        ToolBar->setWindowTitle(QApplication::translate("ToolBar", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ToolBar", "--|--", Q_NULLPTR));
        progressBar->setFormat(QString());
        label_2->setText(QApplication::translate("ToolBar", "--|--", Q_NULLPTR));
        toolButton->setText(QApplication::translate("ToolBar", "...", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("ToolBar", "...", Q_NULLPTR));
        toolButton_3->setText(QApplication::translate("ToolBar", "...", Q_NULLPTR));
        toolButton_4->setText(QApplication::translate("ToolBar", "...", Q_NULLPTR));
        toolButton_5->setText(QApplication::translate("ToolBar", "...", Q_NULLPTR));
        toolButton_6->setText(QApplication::translate("ToolBar", "...", Q_NULLPTR));
        toolButton_7->setText(QApplication::translate("ToolBar", "...", Q_NULLPTR));
        toolButton_8->setText(QApplication::translate("ToolBar", "...", Q_NULLPTR));
        toolButton_9->setText(QApplication::translate("ToolBar", "...", Q_NULLPTR));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ToolBar: public Ui_ToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBAR_H
