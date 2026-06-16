/****************************************************************************
** Meta object code from reading C++ file 'FTBPackInstallTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/modplatform/ftb/FTBPackInstallTask.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FTBPackInstallTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFTBSCOPEPackInstallTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFTBSCOPEPackInstallTaskENDCLASS = QtMocHelpers::stringData(
    "FTB::PackInstallTask",
    "onManifestDownloadSucceeded",
    "",
    "QByteArray*",
    "responsePtr",
    "onResolveModsSucceeded",
    "onCreateInstanceSucceeded",
    "onModDownloadSucceeded",
    "onManifestDownloadFailed",
    "reason",
    "onResolveModsFailed",
    "onCreateInstanceFailed",
    "onModDownloadFailed"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFTBSCOPEPackInstallTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x08,    1 /* Private */,
       5,    0,   65,    2, 0x08,    3 /* Private */,
       6,    0,   66,    2, 0x08,    4 /* Private */,
       7,    0,   67,    2, 0x08,    5 /* Private */,
       8,    1,   68,    2, 0x08,    6 /* Private */,
      10,    1,   71,    2, 0x08,    8 /* Private */,
      11,    1,   74,    2, 0x08,   10 /* Private */,
      12,    1,   77,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject FTB::PackInstallTask::staticMetaObject = { {
    QMetaObject::SuperData::link<InstanceTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSFTBSCOPEPackInstallTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFTBSCOPEPackInstallTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFTBSCOPEPackInstallTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PackInstallTask, std::true_type>,
        // method 'onManifestDownloadSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>,
        // method 'onResolveModsSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCreateInstanceSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onModDownloadSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onManifestDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onResolveModsFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onCreateInstanceFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onModDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void FTB::PackInstallTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PackInstallTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onManifestDownloadSucceeded((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1]))); break;
        case 1: _t->onResolveModsSucceeded(); break;
        case 2: _t->onCreateInstanceSucceeded(); break;
        case 3: _t->onModDownloadSucceeded(); break;
        case 4: _t->onManifestDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->onResolveModsFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->onCreateInstanceFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->onModDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *FTB::PackInstallTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FTB::PackInstallTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFTBSCOPEPackInstallTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return InstanceTask::qt_metacast(_clname);
}

int FTB::PackInstallTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstanceTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
