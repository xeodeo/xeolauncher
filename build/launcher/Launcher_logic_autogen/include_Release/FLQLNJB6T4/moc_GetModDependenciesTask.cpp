/****************************************************************************
** Meta object code from reading C++ file 'GetModDependenciesTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/minecraft/mod/tasks/GetModDependenciesTask.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GetModDependenciesTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGetModDependenciesTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGetModDependenciesTaskENDCLASS = QtMocHelpers::stringData(
    "GetModDependenciesTask",
    "prepareDependencyTask",
    "Task::Ptr",
    "",
    "ModPlatform::Dependency",
    "ModPlatform::ResourceProvider",
    "getDependenciesForVersion",
    "QList<ModPlatform::Dependency>",
    "ModPlatform::IndexedVersion",
    "providerName",
    "prepare",
    "getProjectInfoTask",
    "std::shared_ptr<PackDependency>",
    "pDep",
    "getOverride",
    "removePack",
    "addonId",
    "isLocalyInstalled",
    "maybeInstalled"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGetModDependenciesTaskENDCLASS[] = {

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
       1,    3,   62,    3, 0x09,    1 /* Protected */,
       6,    2,   69,    3, 0x09,    5 /* Protected */,
      10,    0,   74,    3, 0x09,    8 /* Protected */,
      11,    1,   75,    3, 0x09,    9 /* Protected */,
      14,    2,   78,    3, 0x09,   11 /* Protected */,
      15,    1,   83,    3, 0x09,   14 /* Protected */,
      17,    1,   86,    3, 0x09,   16 /* Protected */,
      18,    1,   89,    3, 0x09,   18 /* Protected */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 5, QMetaType::Int,    3,    3,    3,
    0x80000000 | 7, 0x80000000 | 8, 0x80000000 | 5,    3,    9,
    QMetaType::Void,
    0x80000000 | 2, 0x80000000 | 12,   13,
    0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 5,    3,    9,
    QMetaType::Void, QMetaType::QVariant,   16,
    QMetaType::Bool, 0x80000000 | 12,   13,
    QMetaType::Bool, 0x80000000 | 12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject GetModDependenciesTask::staticMetaObject = { {
    QMetaObject::SuperData::link<SequentialTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSGetModDependenciesTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGetModDependenciesTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGetModDependenciesTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetModDependenciesTask, std::true_type>,
        // method 'prepareDependencyTask'
        QtPrivate::TypeAndForceComplete<Task::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ModPlatform::Dependency &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::ResourceProvider, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getDependenciesForVersion'
        QtPrivate::TypeAndForceComplete<QList<ModPlatform::Dependency>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ModPlatform::IndexedVersion &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::ResourceProvider, std::false_type>,
        // method 'prepare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getProjectInfoTask'
        QtPrivate::TypeAndForceComplete<Task::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<PackDependency>, std::false_type>,
        // method 'getOverride'
        QtPrivate::TypeAndForceComplete<ModPlatform::Dependency, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ModPlatform::Dependency &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::ResourceProvider, std::false_type>,
        // method 'removePack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'isLocalyInstalled'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<PackDependency>, std::false_type>,
        // method 'maybeInstalled'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<PackDependency>, std::false_type>
    >,
    nullptr
} };

void GetModDependenciesTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetModDependenciesTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { Task::Ptr _r = _t->prepareDependencyTask((*reinterpret_cast< std::add_pointer_t<ModPlatform::Dependency>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModPlatform::ResourceProvider>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< Task::Ptr*>(_a[0]) = std::move(_r); }  break;
        case 1: { QList<ModPlatform::Dependency> _r = _t->getDependenciesForVersion((*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedVersion>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModPlatform::ResourceProvider>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<ModPlatform::Dependency>*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->prepare(); break;
        case 3: { Task::Ptr _r = _t->getProjectInfoTask((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<PackDependency>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Task::Ptr*>(_a[0]) = std::move(_r); }  break;
        case 4: { ModPlatform::Dependency _r = _t->getOverride((*reinterpret_cast< std::add_pointer_t<ModPlatform::Dependency>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModPlatform::ResourceProvider>>(_a[2])));
            if (_a[0]) *reinterpret_cast< ModPlatform::Dependency*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->removePack((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 6: { bool _r = _t->isLocalyInstalled((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<PackDependency>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->maybeInstalled((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<PackDependency>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModPlatform::ResourceProvider >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModPlatform::ResourceProvider >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModPlatform::ResourceProvider >(); break;
            }
            break;
        }
    }
}

const QMetaObject *GetModDependenciesTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetModDependenciesTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGetModDependenciesTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SequentialTask::qt_metacast(_clname);
}

int GetModDependenciesTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SequentialTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
