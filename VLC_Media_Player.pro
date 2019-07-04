#-------------------------------------------------
#
# Project created by QtCreator 2018-06-19T06:33:33
#
#-------------------------------------------------

QT       += core gui

QT += multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VLC_Media_Player
TEMPLATE = app


SOURCES += main.cpp\
    mainwindow/mainwindow.cpp \
    dialogs/effectsandfiltersdialog.cpp \
    dialogs/openmediadialog.cpp \
    dialogs/openfromclipboarddialog.cpp \
    dialogs/mediainformationdialog.cpp \
    dialogs/vlmconfigurationdialog.cpp \
    dialogs/programguidedialog.cpp \
    dialogs/messagesdialog.cpp \
    dialogs/pluginsandextensionsdialog.cpp \
    dialogs/gototimedialog.cpp \
    components/toolbar.cpp \
    components/volumeprogressbar.cpp \
    components/mediacontroler.cpp \
    components/playerpage.cpp \
    components/mediaslider.cpp \
    components/playlistpage.cpp \
    models/playlistmodel.cpp

HEADERS  += mainwindow/mainwindow.h \
    dialogs/effectsandfiltersdialog.h \
    dialogs/openmediadialog.h \
    dialogs/openfromclipboarddialog.h \
    dialogs/mediainformationdialog.h \
    dialogs/vlmconfigurationdialog.h \
    dialogs/programguidedialog.h \
    dialogs/messagesdialog.h \
    dialogs/pluginsandextensionsdialog.h \
    dialogs/gototimedialog.h \
    components/toolbar.h \
    components/volumeprogressbar.h \
    components/mediacontroler.h \
    components/playerpage.h \
    components/mediaslider.h \
    components/playlistpage.h \
    models/playlistmodel.h

FORMS    += \
    components/bottomtoolbar.ui \
    dialogs/effectsandfiltersdialog.ui \
    dialogs/openmediadialog.ui \
    dialogs/openfromclipboarddialog.ui \
    dialogs/mediainformationdialog.ui \
    dialogs/vlmconfigurationdialog.ui \
    dialogs/programguidedialog.ui \
    dialogs/messagesdialog.ui \
    dialogs/pluginsandextensionsdialog.ui \
    dialogs/gototimedialog.ui \
    components/toolbar.ui

RESOURCES += \
    icons.qrc \
    stylesheets.qrc
