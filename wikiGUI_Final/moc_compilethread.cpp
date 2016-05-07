/****************************************************************************
** Meta object code from reading C++ file 'compilethread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wikiGUI/compilethread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compilethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_compileThread_t {
    QByteArrayData data[6];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_compileThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_compileThread_t qt_meta_stringdata_compileThread = {
    {
QT_MOC_LITERAL(0, 0, 13), // "compileThread"
QT_MOC_LITERAL(1, 14, 14), // "total_articles"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "send_data"
QT_MOC_LITERAL(4, 40, 11), // "shared_data"
QT_MOC_LITERAL(5, 52, 11) // "receiveData"

    },
    "compileThread\0total_articles\0\0send_data\0"
    "shared_data\0receiveData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_compileThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void compileThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        compileThread *_t = static_cast<compileThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->total_articles((*reinterpret_cast< unsigned long long(*)>(_a[1]))); break;
        case 1: _t->send_data((*reinterpret_cast< const shared_data(*)>(_a[1]))); break;
        case 2: _t->receiveData((*reinterpret_cast< shared_data(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (compileThread::*_t)(unsigned long long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&compileThread::total_articles)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (compileThread::*_t)(const shared_data );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&compileThread::send_data)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject compileThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_compileThread.data,
      qt_meta_data_compileThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *compileThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *compileThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_compileThread.stringdata0))
        return static_cast<void*>(const_cast< compileThread*>(this));
    return QThread::qt_metacast(_clname);
}

int compileThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void compileThread::total_articles(unsigned long long _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void compileThread::send_data(const shared_data _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
