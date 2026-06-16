/****************************************************************************
** Meta object code from reading C++ file 'FlameCheckUpdate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/modplatform/flame/FlameCheckUpdate.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlameCheckUpdate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFlameCheckUpdateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFlameCheckUpdateENDCLASS = QtMocHelpers::stringData(
    "FlameCheckUpdate",
    "abort",
    "",
    "executeTask",
    "getLatestVersionCallback",
    "Resource*",
    "resource",
    "QByteArray*",
    "response",
    "collectBlockedMods"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFlameCheckUpdateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x09,    2 /* Protected */,
       4,    2,   40,    2, 0x08,    3 /* Private */,
       9,    0,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FlameCheckUpdate::staticMetaObject = { {
    QMetaObject::SuperData::link<CheckUpdateTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSFlameCheckUpdateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFlameCheckUpdateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFlameCheckUpdateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FlameCheckUpdate, std::true_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'executeTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getLatestVersionCallback'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Resource *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>,
        // method 'collectBlockedMods'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FlameCheckUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlameCheckUpdate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->abort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->executeTask(); break;
        case 2: _t->getLatestVersionCallback((*reinterpret_cast< std::add_pointer_t<Resource*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[2]))); break;
        case 3: _t->collectBlockedMods(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Resource* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *FlameCheckUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlameCheckUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFlameCheckUpdateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return CheckUpdateTask::qt_metacast(_clname);
}

int FlameCheckUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CheckUpdateTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
