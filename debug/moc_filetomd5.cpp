/****************************************************************************
** Meta object code from reading C++ file 'filetomd5.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../filetomd5.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filetomd5.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fileToMd5_t {
    QByteArrayData data[10];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fileToMd5_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fileToMd5_t qt_meta_stringdata_fileToMd5 = {
    {
QT_MOC_LITERAL(0, 0, 9), // "fileToMd5"
QT_MOC_LITERAL(1, 10, 12), // "findSameFile"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 26), // "QHash<QString,QStringList>"
QT_MOC_LITERAL(4, 51, 8), // "sameFile"
QT_MOC_LITERAL(5, 60, 8), // "progress"
QT_MOC_LITERAL(6, 69, 7), // "current"
QT_MOC_LITERAL(7, 77, 5), // "total"
QT_MOC_LITERAL(8, 83, 10), // "filesToMd5"
QT_MOC_LITERAL(9, 94, 4) // "list"

    },
    "fileToMd5\0findSameFile\0\0"
    "QHash<QString,QStringList>\0sameFile\0"
    "progress\0current\0total\0filesToMd5\0"
    "list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fileToMd5[] = {

 // content:
       8,       // revision
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
       5,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void fileToMd5::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<fileToMd5 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->findSameFile((*reinterpret_cast< const QHash<QString,QStringList>(*)>(_a[1]))); break;
        case 1: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->filesToMd5((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (fileToMd5::*)(const QHash<QString,QStringList> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&fileToMd5::findSameFile)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (fileToMd5::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&fileToMd5::progress)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject fileToMd5::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_fileToMd5.data,
    qt_meta_data_fileToMd5,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *fileToMd5::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fileToMd5::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fileToMd5.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fileToMd5::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void fileToMd5::findSameFile(const QHash<QString,QStringList> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fileToMd5::progress(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
