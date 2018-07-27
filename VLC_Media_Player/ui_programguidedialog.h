/********************************************************************************
** Form generated from reading UI file 'programguidedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMGUIDEDIALOG_H
#define UI_PROGRAMGUIDEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_programGuideDialog
{
public:
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QFrame *line_2;
    QLabel *label;
    QFrame *line;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEdit;

    void setupUi(QDialog *programGuideDialog)
    {
        if (programGuideDialog->objectName().isEmpty())
            programGuideDialog->setObjectName(QStringLiteral("programGuideDialog"));
        programGuideDialog->resize(559, 489);
        pushButton = new QPushButton(programGuideDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(480, 460, 75, 23));
        label_3 = new QLabel(programGuideDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 120, 111, 20));
        widget = new QWidget(programGuideDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 300, 561, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy);
        line_2->setMinimumSize(QSize(20, 0));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label, 0, Qt::AlignTop);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(5);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        widget1 = new QWidget(programGuideDialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 320, 541, 131));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        textEdit = new QTextEdit(widget1);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(programGuideDialog);

        QMetaObject::connectSlotsByName(programGuideDialog);
    } // setupUi

    void retranslateUi(QDialog *programGuideDialog)
    {
        programGuideDialog->setWindowTitle(QApplication::translate("programGuideDialog", "Program Guide", Q_NULLPTR));
        pushButton->setText(QApplication::translate("programGuideDialog", "Close", Q_NULLPTR));
        label_3->setText(QApplication::translate("programGuideDialog", "No EPG Data Available", Q_NULLPTR));
        label->setText(QApplication::translate("programGuideDialog", "Description", Q_NULLPTR));
        label_2->setText(QApplication::translate("programGuideDialog", "Title", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class programGuideDialog: public Ui_programGuideDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMGUIDEDIALOG_H
