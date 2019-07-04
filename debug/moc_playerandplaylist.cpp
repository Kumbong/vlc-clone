/****************************************************************************
** Meta object code from reading C++ file 'playerandplaylist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../playerandplaylist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playerandplaylist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayerAndPlayList_t {
    QByteArrayData data[16];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerAndPlayList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerAndPlayList_t qt_meta_stringdata_PlayerAndPlayList = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PlayerAndPlayList"
QT_MOC_LITERAL(1, 18, 15), // "durationChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "duration"
QT_MOC_LITERAL(4, 44, 15), // "positionChanged"
QT_MOC_LITERAL(5, 60, 8), // "progress"
QT_MOC_LITERAL(6, 69, 9), // "stopMedia"
QT_MOC_LITERAL(7, 79, 9), // "playMedia"
QT_MOC_LITERAL(8, 89, 10), // "pauseMedia"
QT_MOC_LITERAL(9, 100, 13), // "previousMedia"
QT_MOC_LITERAL(10, 114, 9), // "nextMedia"
QT_MOC_LITERAL(11, 124, 10), // "fullScreen"
QT_MOC_LITERAL(12, 135, 20), // "showExtendedSettings"
QT_MOC_LITERAL(13, 156, 14), // "togglePlayList"
QT_MOC_LITERAL(14, 171, 4), // "loop"
QT_MOC_LITERAL(15, 176, 6) // "random"

    },
    "PlayerAndPlayList\0durationChanged\0\0"
    "duration\0positionChanged\0progress\0"
    "stopMedia\0playMedia\0pauseMedia\0"
    "previousMedia\0nextMedia\0fullScreen\0"
    "showExtendedSettings\0togglePlayList\0"
    "loop\0random"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerAndPlayList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       6,    0,   80,    2, 0x08 /* Private */,
       7,    0,   81,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlayerAndPlayList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayerAndPlayList *_t = static_cast<PlayerAndPlayList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->stopMedia(); break;
        case 3: _t->playMedia(); break;
        case 4: _t->pauseMedia(); break;
        case 5: _t->previousMedia(); break;
        case 6: _t->nextMedia(); break;
        case 7: _t->fullScreen(); break;
        case 8: _t->showExtendedSettings(); break;
        case 9: _t->togglePlayList(); break;
        case 10: _t->loop(); break;
        case 11: _t->random(); break;
        default: ;
        }
    }
}

const QMetaObject PlayerAndPlayList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlayerAndPlayList.data,
      qt_meta_data_PlayerAndPlayList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlayerAndPlayList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerAndPlayList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerAndPlayList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PlayerAndPlayList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
