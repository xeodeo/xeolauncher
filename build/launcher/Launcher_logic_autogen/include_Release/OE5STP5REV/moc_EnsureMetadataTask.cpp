/****************************************************************************
** Meta object code from reading C++ file 'EnsureMetadataTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/modplatform/EnsureMetadataTask.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EnsureMetadataTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSEnsureMetadataTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSEnsureMetadataTaskENDCLASS = QtMocHelpers::stringData(
    "EnsureMetadataTask",
    "metadataReady",
    "",
    "Resource*",
    "metadataFailed",
    "abort",
    "executeTask",
    "updateMetadata",
    "ModPlatform::IndexedPack&",
    "pack",
    "ModPlatform::IndexedVersion&",
    "ver",
    "updateMetadataCallback",
    "resource"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEnsureMetadataTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    1,   53,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   56,    2, 0x0a,    5 /* Public */,
       6,    0,   57,    2, 0x09,    6 /* Protected */,
       7,    3,   58,    2, 0x08,    7 /* Private */,
      12,    2,   65,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 3,    9,   11,    2,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 3,    9,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject EnsureMetadataTask::staticMetaObject = { {
    QMetaObject::SuperData::link<Task::staticMetaObject>(),
    qt_meta_stringdata_CLASSEnsureMetadataTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEnsureMetadataTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEnsureMetadataTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EnsureMetadataTask, std::true_type>,
        // method 'metadataReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Resource *, std::false_type>,
        // method 'metadataFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Resource *, std::false_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'executeTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedPack &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedVersion &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Resource *, std::false_type>,
        // method 'updateMetadataCallback'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedPack &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Resource *, std::false_type>
    >,
    nullptr
} };

void EnsureMetadataTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EnsureMetadataTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->metadataReady((*reinterpret_cast< std::add_pointer_t<Resource*>>(_a[1]))); break;
        case 1: _t->metadataFailed((*reinterpret_cast< std::add_pointer_t<Resource*>>(_a[1]))); break;
        case 2: { bool _r = _t->abort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->executeTask(); break;
        case 4: _t->updateMetadata((*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedPack&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedVersion&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Resource*>>(_a[3]))); break;
        case 5: _t->updateMetadataCallback((*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedPack&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Resource*>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Resource* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Resource* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Resource* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Resource* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EnsureMetadataTask::*)(Resource * );
            if (_t _q_method = &EnsureMetadataTask::metadataReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EnsureMetadataTask::*)(Resource * );
            if (_t _q_method = &EnsureMetadataTask::metadataFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *EnsureMetadataTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnsureMetadataTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEnsureMetadataTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int EnsureMetadataTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void EnsureMetadataTask::metadataReady(Resource * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EnsureMetadataTask::metadataFailed(Resource * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
