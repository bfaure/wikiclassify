/****************************************************************************
** Meta object code from reading C++ file 'progresswindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wikiGUI/progresswindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progresswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_progresswindow_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_progresswindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_progresswindow_t qt_meta_stringdata_progresswindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "progresswindow"
QT_MOC_LITERAL(1, 15, 8), // "sendData"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "shared_data"
QT_MOC_LITERAL(4, 37, 22), // "total_articles_changed"
QT_MOC_LITERAL(5, 60, 5), // "input"
QT_MOC_LITERAL(6, 66, 12), // "receive_data"
QT_MOC_LITERAL(7, 79, 8), // "progress"
QT_MOC_LITERAL(8, 88, 21) // "on_pushButton_clicked"

    },
    "progresswindow\0sendData\0\0shared_data\0"
    "total_articles_changed\0input\0receive_data\0"
    "progress\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_progresswindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::ULongLong,    5,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

       0        // eod
};

void progresswindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        progresswindow *_t = static_cast<progresswindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< shared_data(*)>(_a[1]))); break;
        case 1: _t->total_articles_changed((*reinterpret_cast< unsigned long long(*)>(_a[1]))); break;
        case 2: _t->receive_data((*reinterpret_cast< shared_data(*)>(_a[1]))); break;
        case 3: _t->progress((*reinterpret_cast< shared_data(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (progresswindow::*_t)(shared_data );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&progresswindow::sendData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject progresswindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_progresswindow.data,
      qt_meta_data_progresswindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *progresswindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *progresswindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_progresswindow.stringdata0))
        return static_cast<void*>(const_cast< progresswindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int progresswindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void progresswindow::sendData(shared_data _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
