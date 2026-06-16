/****************************************************************************
** Meta object code from reading C++ file 'SingleZipPackInstallTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/modplatform/technic/SingleZipPackInstallTask.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SingleZipPackInstallTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTechnicSCOPESingleZipPackInstallTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTechnicSCOPESingleZipPackInstallTaskENDCLASS = QtMocHelpers::stringData(
    "Technic::SingleZipPackInstallTask",
    "downloadSucceeded",
    "",
    "downloadFailed",
    "reason",
    "downloadProgressChanged",
    "current",
    "total",
    "extractFinished",
    "extractAborted"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTechnicSCOPESingleZipPackInstallTaskENDCLASS[] = {

 // content:
      12,       // revision
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
       3,    1,   45,    2, 0x08,    2 /* Private */,
       5,    2,   48,    2, 0x08,    4 /* Private */,
       8,    0,   53,    2, 0x08,    7 /* Private */,
       9,    0,   54,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Technic::SingleZipPackInstallTask::staticMetaObject = { {
    QMetaObject::SuperData::link<InstanceTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSTechnicSCOPESingleZipPackInstallTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTechnicSCOPESingleZipPackInstallTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTechnicSCOPESingleZipPackInstallTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SingleZipPackInstallTask, std::true_type>,
        // method 'downloadSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'downloadProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'extractFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'extractAborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Technic::SingleZipPackInstallTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SingleZipPackInstallTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->downloadSucceeded(); break;
        case 1: _t->downloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->downloadProgressChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 3: _t->extractFinished(); break;
        case 4: _t->extractAborted(); break;
        default: ;
        }
    }
}

const QMetaObject *Technic::SingleZipPackInstallTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Technic::SingleZipPackInstallTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTechnicSCOPESingleZipPackInstallTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return InstanceTask::qt_metacast(_clname);
}

int Technic::SingleZipPackInstallTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstanceTask::qt_metacall(_c, _id, _a);
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
