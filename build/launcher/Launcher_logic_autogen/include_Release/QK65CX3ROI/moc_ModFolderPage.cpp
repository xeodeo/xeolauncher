/****************************************************************************
** Meta object code from reading C++ file 'ModFolderPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/ui/pages/instance/ModFolderPage.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModFolderPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModFolderPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSModFolderPageENDCLASS = QtMocHelpers::stringData(
    "ModFolderPage",
    "updateFrame",
    "",
    "QModelIndex",
    "current",
    "previous",
    "removeItems",
    "QItemSelection",
    "selection",
    "downloadMods",
    "downloadDialogFinished",
    "result",
    "updateMods",
    "includeDeps",
    "deleteModMetadata",
    "exportModMetadata",
    "changeModVersion"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModFolderPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   68,    2, 0x0a,    1 /* Public */,
       6,    1,   73,    2, 0x08,    4 /* Private */,
       9,    0,   76,    2, 0x08,    6 /* Private */,
      10,    1,   77,    2, 0x08,    7 /* Private */,
      12,    1,   80,    2, 0x08,    9 /* Private */,
      12,    0,   83,    2, 0x28,   11 /* Private | MethodCloned */,
      14,    0,   84,    2, 0x08,   12 /* Private */,
      15,    0,   85,    2, 0x08,   13 /* Private */,
      16,    0,   86,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModFolderPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ExternalResourcesPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSModFolderPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModFolderPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModFolderPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModFolderPage, std::true_type>,
        // method 'updateFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'removeItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'downloadMods'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadDialogFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateMods'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateMods'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteModMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportModMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeModVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ModFolderPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModFolderPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateFrame((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 1: _t->removeItems((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1]))); break;
        case 2: _t->downloadMods(); break;
        case 3: _t->downloadDialogFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->updateMods((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->updateMods(); break;
        case 6: _t->deleteModMetadata(); break;
        case 7: _t->exportModMetadata(); break;
        case 8: _t->changeModVersion(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ModFolderPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModFolderPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModFolderPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ExternalResourcesPage::qt_metacast(_clname);
}

int ModFolderPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExternalResourcesPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCoreModFolderPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCoreModFolderPageENDCLASS = QtMocHelpers::stringData(
    "CoreModFolderPage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCoreModFolderPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject CoreModFolderPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ModFolderPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSCoreModFolderPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCoreModFolderPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCoreModFolderPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CoreModFolderPage, std::true_type>
    >,
    nullptr
} };

void CoreModFolderPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *CoreModFolderPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoreModFolderPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCoreModFolderPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ModFolderPage::qt_metacast(_clname);
}

int CoreModFolderPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModFolderPage::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSNilModFolderPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSNilModFolderPageENDCLASS = QtMocHelpers::stringData(
    "NilModFolderPage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSNilModFolderPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject NilModFolderPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ModFolderPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSNilModFolderPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSNilModFolderPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSNilModFolderPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NilModFolderPage, std::true_type>
    >,
    nullptr
} };

void NilModFolderPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *NilModFolderPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NilModFolderPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSNilModFolderPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ModFolderPage::qt_metacast(_clname);
}

int NilModFolderPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModFolderPage::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
