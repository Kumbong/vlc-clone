/********************************************************************************
** Form generated from reading UI file 'vlmconfigurationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VLMCONFIGURATIONDIALOG_H
#define UI_VLMCONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VLMconfigurationDialog
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QFrame *line;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox_2;
    QListView *listView;
    QFrame *line_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *VLMconfigurationDialog)
    {
        if (VLMconfigurationDialog->objectName().isEmpty())
            VLMconfigurationDialog->setObjectName(QStringLiteral("VLMconfigurationDialog"));
        VLMconfigurationDialog->resize(623, 494);
        groupBox = new QGroupBox(VLMconfigurationDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 501, 166));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 2);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);


        gridLayout->addLayout(formLayout, 2, 0, 3, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 2, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 1);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 5, 0, 1, 1);

        groupBox_2 = new QGroupBox(VLMconfigurationDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 180, 591, 261));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 20, 256, 231));
        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(273, 20, 20, 231));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_5 = new QPushButton(VLMconfigurationDialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(380, 450, 75, 23));
        pushButton_6 = new QPushButton(VLMconfigurationDialog);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(460, 450, 75, 23));
        pushButton_7 = new QPushButton(VLMconfigurationDialog);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(540, 450, 75, 23));
        widget = new QWidget(VLMconfigurationDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(530, 10, 77, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(VLMconfigurationDialog);

        QMetaObject::connectSlotsByName(VLMconfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *VLMconfigurationDialog)
    {
        VLMconfigurationDialog->setWindowTitle(QApplication::translate("VLMconfigurationDialog", "VLM configurator", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("VLMconfigurationDialog", "Media Manager Edition", Q_NULLPTR));
        label->setText(QApplication::translate("VLMconfigurationDialog", "Name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("VLMconfigurationDialog", "Input:", Q_NULLPTR));
        label_3->setText(QApplication::translate("VLMconfigurationDialog", "Output:", Q_NULLPTR));
        checkBox->setText(QApplication::translate("VLMconfigurationDialog", "Enable", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VLMconfigurationDialog", "Select Input", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("VLMconfigurationDialog", "Select Output", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("VLMconfigurationDialog", "Loop", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("VLMconfigurationDialog", "Media Manager List", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("VLMconfigurationDialog", "Import", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("VLMconfigurationDialog", "Export", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("VLMconfigurationDialog", "Close", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("VLMconfigurationDialog", "Add", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("VLMconfigurationDialog", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VLMconfigurationDialog: public Ui_VLMconfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VLMCONFIGURATIONDIALOG_H
