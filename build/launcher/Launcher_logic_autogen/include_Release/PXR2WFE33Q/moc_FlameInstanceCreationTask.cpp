/****************************************************************************
** Meta object code from reading C++ file 'FlameInstanceCreationTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/modplatform/flame/FlameInstanceCreationTask.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlameInstanceCreationTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS = QtMocHelpers::stringData(
    "FlameCreationTask",
    "idResolverSucceeded",
    "",
    "QEventLoop&",
    "setupDownloadJob",
    "copyBlockedMods",
    "QList<BlockedMod>",
    "blocked_mods",
    "validateOtherResources",
    "loop",
    "getVersionForLoader",
    "uid",
    "loaderType",
    "version",
    "mcVersion"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFlameCreationTaskENDCLASS[] = {

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
       1,    1,   44,    2, 0x08,    1 /* Private */,
       4,    1,   47,    2, 0x08,    3 /* Private */,
       5,    1,   50,    2, 0x08,    5 /* Private */,
       8,    1,   53,    2, 0x08,    7 /* Private */,
      10,    4,   56,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,   13,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject FlameCreationTask::staticMetaObject = { {
    QMetaObject::SuperData::link<InstanceCreationTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFlameCreationTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FlameCreationTask, std::true_type>,
        // method 'idResolverSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEventLoop &, std::false_type>,
        // method 'setupDownloadJob'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEventLoop &, std::false_type>,
        // method 'copyBlockedMods'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<BlockedMod> const &, std::false_type>,
        // method 'validateOtherResources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEventLoop &, std::false_type>,
        // method 'getVersionForLoader'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void FlameCreationTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlameCreationTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->idResolverSucceeded((*reinterpret_cast< std::add_pointer_t<QEventLoop&>>(_a[1]))); break;
        case 1: _t->setupDownloadJob((*reinterpret_cast< std::add_pointer_t<QEventLoop&>>(_a[1]))); break;
        case 2: _t->copyBlockedMods((*reinterpret_cast< std::add_pointer_t<QList<BlockedMod>>>(_a[1]))); break;
        case 3: _t->validateOtherResources((*reinterpret_cast< std::add_pointer_t<QEventLoop&>>(_a[1]))); break;
        case 4: { QString _r = _t->getVersionForLoader((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *FlameCreationTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlameCreationTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return InstanceCreationTask::qt_metacast(_clname);
}

int FlameCreationTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstanceCreationTask::qt_metacall(_c, _id, _a);
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
