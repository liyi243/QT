/****************************************************************************
** Meta object code from reading C++ file 'serverdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Server/serverdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_serverDialog_t {
    const uint offsetsAndSize[16];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_serverDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_serverDialog_t qt_meta_stringdata_serverDialog = {
    {
QT_MOC_LITERAL(0, 12), // "serverDialog"
QT_MOC_LITERAL(13, 22), // "on_creatButton_clicked"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 15), // "onNewConnection"
QT_MOC_LITERAL(53, 11), // "onReadyRead"
QT_MOC_LITERAL(65, 11), // "sendMessage"
QT_MOC_LITERAL(77, 3), // "buf"
QT_MOC_LITERAL(81, 9) // "onTimeout"

    },
    "serverDialog\0on_creatButton_clicked\0"
    "\0onNewConnection\0onReadyRead\0sendMessage\0"
    "buf\0onTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_serverDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    1,   47,    2, 0x08,    4 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void,

       0        // eod
};

void serverDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<serverDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_creatButton_clicked(); break;
        case 1: _t->onNewConnection(); break;
        case 2: _t->onReadyRead(); break;
        case 3: _t->sendMessage((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->onTimeout(); break;
        default: ;
        }
    }
}

const QMetaObject serverDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_serverDialog.offsetsAndSize,
    qt_meta_data_serverDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_serverDialog_t
, QtPrivate::TypeAndForceComplete<serverDialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *serverDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serverDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_serverDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int serverDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
