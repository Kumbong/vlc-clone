/********************************************************************************
** Form generated from reading UI file 'mediaplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIAPLAYER_H
#define UI_MEDIAPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_MediaPlayer
{
public:

    void setupUi(QFrame *MediaPlayer)
    {
        if (MediaPlayer->objectName().isEmpty())
            MediaPlayer->setObjectName(QStringLiteral("MediaPlayer"));
        MediaPlayer->resize(400, 300);
        MediaPlayer->setStyleSheet(QLatin1String("image: url(:/images/icons/windowIcon.png);\n"
"background-color: rgb(0, 0, 0);"));
        MediaPlayer->setFrameShape(QFrame::StyledPanel);
        MediaPlayer->setFrameShadow(QFrame::Raised);

        retranslateUi(MediaPlayer);

        QMetaObject::connectSlotsByName(MediaPlayer);
    } // setupUi

    void retranslateUi(QFrame *MediaPlayer)
    {
        MediaPlayer->setWindowTitle(QApplication::translate("MediaPlayer", "Frame", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MediaPlayer: public Ui_MediaPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIAPLAYER_H
