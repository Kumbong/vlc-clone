/********************************************************************************
** Form generated from reading UI file 'mediaplayerframe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIAPLAYERFRAME_H
#define UI_MEDIAPLAYERFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_MediaPlayerFrame
{
public:

    void setupUi(QFrame *MediaPlayerFrame)
    {
        if (MediaPlayerFrame->objectName().isEmpty())
            MediaPlayerFrame->setObjectName(QStringLiteral("MediaPlayerFrame"));
        MediaPlayerFrame->resize(400, 300);
        MediaPlayerFrame->setStyleSheet(QLatin1String("image: url(:/images/icons/windowIcon.png);\n"
"background-color: rgb(0, 0, 0);"));
        MediaPlayerFrame->setFrameShape(QFrame::StyledPanel);
        MediaPlayerFrame->setFrameShadow(QFrame::Raised);

        retranslateUi(MediaPlayerFrame);

        QMetaObject::connectSlotsByName(MediaPlayerFrame);
    } // setupUi

    void retranslateUi(QFrame *MediaPlayerFrame)
    {
        MediaPlayerFrame->setWindowTitle(QApplication::translate("MediaPlayerFrame", "Frame", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MediaPlayerFrame: public Ui_MediaPlayerFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIAPLAYERFRAME_H
