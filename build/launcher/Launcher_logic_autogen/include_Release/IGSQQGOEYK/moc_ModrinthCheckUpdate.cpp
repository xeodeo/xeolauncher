/****************************************************************************
** Meta object code from reading C++ file 'ModrinthCheckUpdate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/modplatform/modrinth/ModrinthCheckUpdate.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModrinthCheckUpdate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModrinthCheckUpdateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSModrinthCheckUpdateENDCLASS = QtMocHelpers::stringData(
    "ModrinthCheckUpdate",
    "abort",
    "",
    "executeTask",
    "getUpdateModsForLoader",
    "std::optional<ModPlatform::ModLoaderTypes>",
    "loader",
    "forceModLoaderCheck",
    "checkVersionsResponse",
    "QByteArray*",
    "response",
    "checkNextLoader"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModrinthCheckUpdateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    0,   57,    2, 0x09,    2 /* Protected */,
       4,    2,   58,    2, 0x09,    3 /* Protected */,
       4,    1,   63,    2, 0x29,    6 /* Protected | MethodCloned */,
       4,    0,   66,    2, 0x29,    8 /* Protected | MethodCloned */,
       8,    2,   67,    2, 0x09,    9 /* Protected */,
      11,    0,   72,    2, 0x09,   12 /* Protected */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 5,   10,    6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModrinthCheckUpdate::staticMetaObject = { {
    QMetaObject::SuperData::link<CheckUpdateTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSModrinthCheckUpdateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModrinthCheckUpdateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModrinthCheckUpdateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModrinthCheckUpdate, std::true_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'executeTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getUpdateModsForLoader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::optional<ModPlatform::ModLoaderTypes>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getUpdateModsForLoader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::optional<ModPlatform::ModLoaderTypes>, std::false_type>,
        // method 'getUpdateModsForLoader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkVersionsResponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::optional<ModPlatform::ModLoaderTypes>, std::false_type>,
        // method 'checkNextLoader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ModrinthCheckUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModrinthCheckUpdate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->abort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->executeTask(); break;
        case 2: _t->getUpdateModsForLoader((*reinterpret_cast< std::add_pointer_t<std::optional<ModPlatform::ModLoaderTypes>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->getUpdateModsForLoader((*reinterpret_cast< std::add_pointer_t<std::optional<ModPlatform::ModLoaderTypes>>>(_a[1]))); break;
        case 4: _t->getUpdateModsForLoader(); break;
        case 5: _t->checkVersionsResponse((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::optional<ModPlatform::ModLoaderTypes>>>(_a[2]))); break;
        case 6: _t->checkNextLoader(); break;
        default: ;
        }
    }
}

const QMetaObject *ModrinthCheckUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModrinthCheckUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModrinthCheckUpdateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return CheckUpdateTask::qt_metacast(_clname);
}

int ModrinthCheckUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CheckUpdateTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
