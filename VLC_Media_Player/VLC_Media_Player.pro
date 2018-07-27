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
        mainwindow.cpp \
    effectsandfiltersdialog.cpp \
    openmediadialog.cpp \
    openfromclipboarddialog.cpp \
    mediainformationdialog.cpp \
    vlmconfigurationdialog.cpp \
    programguidedialog.cpp \
    messagesdialog.cpp \
    pluginsandextensionsdialog.cpp \
    gototimedialog.cpp \
    toolbar.cpp \
    volumeprogressbar.cpp \
    mediacontroler.cpp \
    playerpage.cpp \
    mediaslider.cpp \
    playlistmodel.cpp \
    playlistpage.cpp

HEADERS  += mainwindow.h \
    effectsandfiltersdialog.h \
    openmediadialog.h \
    openfromclipboarddialog.h \
    mediainformationdialog.h \
    vlmconfigurationdialog.h \
    programguidedialog.h \
    messagesdialog.h \
    pluginsandextensionsdialog.h \
    gototimedialog.h \
    toolbar.h \
    volumeprogressbar.h \
    mediacontroler.h \
    playerpage.h \
    mediaslider.h \
    playlistpage.h \
    playlistmodel.h \
    playlistpage.h \
    playernamespace.h

FORMS    += \
    bottomtoolbar.ui \
    effectsandfiltersdialog.ui \
    openmediadialog.ui \
    openfromclipboarddialog.ui \
    mediainformationdialog.ui \
    vlmconfigurationdialog.ui \
    programguidedialog.ui \
    messagesdialog.ui \
    pluginsandextensionsdialog.ui \
    gototimedialog.ui \
    toolbar.ui

RESOURCES += \
    icons.qrc \
    stylesheets.qrc \
    testingaids.qrc
