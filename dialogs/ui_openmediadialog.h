/********************************************************************************
** Form generated from reading UI file 'openmediadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENMEDIADIALOG_H
#define UI_OPENMEDIADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_openMediaDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QListView *listView;
    QPushButton *addButton;
    QPushButton *removeButton;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QCheckBox *checkBox_3;
    QFrame *line;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QToolButton *toolButton;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_5;
    QSpinBox *spinBox_3;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *spinBox_4;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QSpinBox *spinBox_5;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_10;
    QSpinBox *spinBox_6;
    QWidget *tab_3;
    QGroupBox *groupBox_7;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QWidget *tab_4;
    QFrame *line_2;
    QGroupBox *groupBox_8;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_12;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_13;
    QComboBox *comboBox_3;
    QGroupBox *groupBox_9;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_7;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_11;
    QComboBox *comboBox;
    QCheckBox *showMoreOptionsCheckBox;
    QGroupBox *moreOptionsGroupBox;
    QCheckBox *checkBox_2;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QTimeEdit *timeEdit_2;
    QWidget *layoutWidget7;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *openMediaDialog)
    {
        if (openMediaDialog->objectName().isEmpty())
            openMediaDialog->setObjectName(QStringLiteral("openMediaDialog"));
        openMediaDialog->resize(521, 529);
        tabWidget = new QTabWidget(openMediaDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 9, 501, 321));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 471, 161));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 311, 20));
        listView = new QListView(groupBox);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 40, 371, 111));
        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(390, 40, 71, 23));
        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(390, 70, 71, 23));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 180, 471, 51));
        groupBox_2->setCheckable(true);
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 371, 20));
        lineEdit->setReadOnly(false);
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 20, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 471, 111));
        radioButton = new QRadioButton(groupBox_4);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 20, 82, 17));
        radioButton_2 = new QRadioButton(groupBox_4);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(110, 20, 82, 17));
        radioButton_3 = new QRadioButton(groupBox_4);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(200, 20, 82, 17));
        radioButton_4 = new QRadioButton(groupBox_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(310, 20, 82, 17));
        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 40, 101, 17));
        line = new QFrame(groupBox_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(110, 40, 351, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(groupBox_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 451, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_2->addWidget(lineEdit_4);

        toolButton = new QToolButton(layoutWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout_2->addWidget(toolButton);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);

        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 133, 471, 61));
        layoutWidget1 = new QWidget(groupBox_5);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 451, 24));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        spinBox_3 = new QSpinBox(layoutWidget1);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox_3->sizePolicy().hasHeightForWidth());
        spinBox_3->setSizePolicy(sizePolicy);
        spinBox_3->setMinimumSize(QSize(70, 0));
        spinBox_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(spinBox_3);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        spinBox_4 = new QSpinBox(layoutWidget1);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        sizePolicy.setHeightForWidth(spinBox_4->sizePolicy().hasHeightForWidth());
        spinBox_4->setSizePolicy(sizePolicy);
        spinBox_4->setMinimumSize(QSize(70, 0));
        spinBox_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(spinBox_4);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 208, 471, 51));
        layoutWidget2 = new QWidget(groupBox_6);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 451, 24));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        spinBox_5 = new QSpinBox(layoutWidget2);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        sizePolicy.setHeightForWidth(spinBox_5->sizePolicy().hasHeightForWidth());
        spinBox_5->setSizePolicy(sizePolicy);
        spinBox_5->setMinimumSize(QSize(70, 0));

        horizontalLayout_7->addWidget(spinBox_5);


        horizontalLayout_6->addLayout(horizontalLayout_7);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_8->addWidget(label_10);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        spinBox_6 = new QSpinBox(layoutWidget2);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        sizePolicy.setHeightForWidth(spinBox_6->sizePolicy().hasHeightForWidth());
        spinBox_6->setSizePolicy(sizePolicy);
        spinBox_6->setMinimumSize(QSize(70, 0));

        horizontalLayout_8->addWidget(spinBox_6);


        horizontalLayout_6->addLayout(horizontalLayout_8);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 471, 151));
        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 16, 151, 20));
        lineEdit_5 = new QLineEdit(groupBox_7);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(10, 40, 451, 20));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        line_2 = new QFrame(tab_4);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 30, 471, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        groupBox_8 = new QGroupBox(tab_4);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 50, 471, 101));
        layoutWidget3 = new QWidget(groupBox_8);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 451, 71));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_10->addWidget(label_13);

        horizontalSpacer_12 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);

        comboBox_2 = new QComboBox(layoutWidget3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_14 = new QLabel(layoutWidget3);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_11->addWidget(label_14);

        horizontalSpacer_13 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_13);

        comboBox_3 = new QComboBox(layoutWidget3);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        sizePolicy1.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(comboBox_3);


        verticalLayout->addLayout(horizontalLayout_11);

        groupBox_9 = new QGroupBox(tab_4);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(20, 160, 461, 91));
        layoutWidget4 = new QWidget(groupBox_9);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 30, 441, 22));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget4);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_12->addWidget(label_15);

        horizontalSpacer_14 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_14);

        lineEdit_6 = new QLineEdit(layoutWidget4);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        sizePolicy1.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(lineEdit_6);

        pushButton_7 = new QPushButton(tab_4);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(370, 260, 111, 21));
        layoutWidget5 = new QWidget(tab_4);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(11, 11, 471, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget5);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_9->addWidget(label_12);

        horizontalSpacer_11 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        comboBox = new QComboBox(layoutWidget5);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(comboBox);

        tabWidget->addTab(tab_4, QString());
        showMoreOptionsCheckBox = new QCheckBox(openMediaDialog);
        showMoreOptionsCheckBox->setObjectName(QStringLiteral("showMoreOptionsCheckBox"));
        showMoreOptionsCheckBox->setGeometry(QRect(10, 340, 121, 17));
        moreOptionsGroupBox = new QGroupBox(openMediaDialog);
        moreOptionsGroupBox->setObjectName(QStringLiteral("moreOptionsGroupBox"));
        moreOptionsGroupBox->setGeometry(QRect(10, 360, 501, 131));
        checkBox_2 = new QCheckBox(moreOptionsGroupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 40, 291, 17));
        layoutWidget6 = new QWidget(moreOptionsGroupBox);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 10, 481, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget6);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        spinBox = new QSpinBox(layoutWidget6);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        sizePolicy1.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy1);
        spinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(spinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(layoutWidget6);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        timeEdit_2 = new QTimeEdit(layoutWidget6);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(timeEdit_2->sizePolicy().hasHeightForWidth());
        timeEdit_2->setSizePolicy(sizePolicy3);
        timeEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(timeEdit_2);

        layoutWidget7 = new QWidget(moreOptionsGroupBox);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 70, 481, 48));
        gridLayout = new QGridLayout(layoutWidget7);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget7);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(26, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 2);

        lineEdit_2 = new QLineEdit(layoutWidget7);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(4);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy4);
        lineEdit_2->setReadOnly(false);

        gridLayout->addWidget(lineEdit_2, 0, 3, 1, 1);

        label_5 = new QLabel(layoutWidget7);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget7);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        sizePolicy4.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy4);
        lineEdit_3->setReadOnly(false);

        gridLayout->addWidget(lineEdit_3, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(openMediaDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(440, 500, 75, 23));
        pushButton_5 = new QPushButton(openMediaDialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(360, 500, 75, 23));

        retranslateUi(openMediaDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(openMediaDialog);
    } // setupUi

    void retranslateUi(QDialog *openMediaDialog)
    {
        openMediaDialog->setWindowTitle(QApplication::translate("openMediaDialog", "Open Media", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("openMediaDialog", "File Selection", Q_NULLPTR));
        label->setText(QApplication::translate("openMediaDialog", "You can select local files with the following lists and buttions.", Q_NULLPTR));
        addButton->setText(QApplication::translate("openMediaDialog", "Add...", Q_NULLPTR));
        removeButton->setText(QApplication::translate("openMediaDialog", "Remove", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("openMediaDialog", "Use a subtitle file", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("openMediaDialog", "Browse...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("openMediaDialog", "File", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("openMediaDialog", "Disc selection", Q_NULLPTR));
        radioButton->setText(QApplication::translate("openMediaDialog", "DVD", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("openMediaDialog", "Blu-ray", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("openMediaDialog", "Audio CD", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("openMediaDialog", "SVCD/VCD", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("openMediaDialog", "No disc menus", Q_NULLPTR));
        label_6->setText(QApplication::translate("openMediaDialog", "Disc device", Q_NULLPTR));
        toolButton->setText(QApplication::translate("openMediaDialog", "...", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("openMediaDialog", "Browse...", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("openMediaDialog", "Starting Position", Q_NULLPTR));
        label_7->setText(QApplication::translate("openMediaDialog", "Title", Q_NULLPTR));
        label_8->setText(QApplication::translate("openMediaDialog", "Chapter", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("openMediaDialog", "Audio and Subtitiles", Q_NULLPTR));
        label_9->setText(QApplication::translate("openMediaDialog", "Audio track", Q_NULLPTR));
        label_10->setText(QApplication::translate("openMediaDialog", "Subtitle track", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("openMediaDialog", "Disc", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("openMediaDialog", "Network Protocol", Q_NULLPTR));
        label_11->setText(QApplication::translate("openMediaDialog", "Please Enter a network URL:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("openMediaDialog", "Network", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("openMediaDialog", "Device Selection", Q_NULLPTR));
        label_13->setText(QApplication::translate("openMediaDialog", "Video device name", Q_NULLPTR));
        label_14->setText(QApplication::translate("openMediaDialog", "Audio device name", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("openMediaDialog", "Options", Q_NULLPTR));
        label_15->setText(QApplication::translate("openMediaDialog", "Video size", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("openMediaDialog", "Advanced options..", Q_NULLPTR));
        label_12->setText(QApplication::translate("openMediaDialog", "Capture mode", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("openMediaDialog", "Capture Device", Q_NULLPTR));
        showMoreOptionsCheckBox->setText(QApplication::translate("openMediaDialog", "Show more options", Q_NULLPTR));
        moreOptionsGroupBox->setTitle(QString());
        checkBox_2->setText(QApplication::translate("openMediaDialog", "Play another media synchronously (extra audio file,..)", Q_NULLPTR));
        label_2->setText(QApplication::translate("openMediaDialog", "Caching", Q_NULLPTR));
        spinBox->setSuffix(QApplication::translate("openMediaDialog", " ms", Q_NULLPTR));
        label_3->setText(QApplication::translate("openMediaDialog", "Start Time", Q_NULLPTR));
        timeEdit_2->setDisplayFormat(QApplication::translate("openMediaDialog", "hh:mm:ss", Q_NULLPTR));
        label_4->setText(QApplication::translate("openMediaDialog", "MRL", Q_NULLPTR));
        label_5->setText(QApplication::translate("openMediaDialog", "Edit Options", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("openMediaDialog", "Cancel", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("openMediaDialog", "Play", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class openMediaDialog: public Ui_openMediaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENMEDIADIALOG_H
