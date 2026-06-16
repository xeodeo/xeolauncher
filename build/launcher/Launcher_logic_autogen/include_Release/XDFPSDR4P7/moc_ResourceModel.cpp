/****************************************************************************
** Meta object code from reading C++ file 'ResourceModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/ui/pages/modplatform/ResourceModel.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ResourceModel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceModelENDCLASS = QtMocHelpers::stringData(
    "ResourceDownload::ResourceModel",
    "versionListUpdated",
    "",
    "QModelIndex",
    "index",
    "projectInfoUpdated",
    "fetchMore",
    "parent",
    "canFetchMore",
    "setSearchTerm",
    "term",
    "createSearchArguments",
    "ResourceAPI::SearchArgs",
    "createVersionsArguments",
    "ResourceAPI::VersionSearchArgs",
    "createInfoArguments",
    "ResourceAPI::ProjectInfoArgs",
    "search",
    "loadEntry",
    "refresh",
    "getIcon",
    "std::optional<QIcon>",
    "QModelIndex&",
    "addPack",
    "ModPlatform::IndexedPack::Ptr",
    "pack",
    "ModPlatform::IndexedVersion&",
    "version",
    "ResourceFolderModel*",
    "packs",
    "isIndexed",
    "downloadReason",
    "removePack",
    "rem",
    "selectedPacks",
    "QList<DownloadTaskPtr>",
    "search_term"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSResourceDownloadSCOPEResourceModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       1,  179, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  116,    2, 0x06,    2 /* Public */,
       5,    1,  119,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,  122,    2, 0x0a,    6 /* Public */,
       8,    1,  125,    2, 0x10a,    8 /* Public | MethodIsConst  */,
       9,    1,  128,    2, 0x0a,   10 /* Public */,
      11,    0,  131,    2, 0x0a,   12 /* Public */,
      13,    1,  132,    2, 0x0a,   13 /* Public */,
      15,    1,  135,    2, 0x0a,   15 /* Public */,
      17,    0,  138,    2, 0x0a,   17 /* Public */,
      18,    1,  139,    2, 0x0a,   18 /* Public */,
      19,    0,  142,    2, 0x0a,   20 /* Public */,
      20,    2,  143,    2, 0x0a,   21 /* Public */,
      23,    5,  148,    2, 0x0a,   24 /* Public */,
      23,    4,  159,    2, 0x2a,   30 /* Public | MethodCloned */,
      23,    3,  168,    2, 0x2a,   35 /* Public | MethodCloned */,
      32,    1,  175,    2, 0x0a,   39 /* Public */,
      34,    0,  178,    2, 0x0a,   41 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Bool, 0x80000000 | 3,    7,
    QMetaType::Void, QMetaType::QString,   10,
    0x80000000 | 12,
    0x80000000 | 14, 0x80000000 | 3,    2,
    0x80000000 | 16, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    0x80000000 | 21, 0x80000000 | 22, QMetaType::QUrl,    2,    2,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26, 0x80000000 | 28, QMetaType::Bool, QMetaType::QString,   25,   27,   29,   30,   31,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26, 0x80000000 | 28, QMetaType::Bool,   25,   27,   29,   30,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26, 0x80000000 | 28,   25,   27,   29,
    QMetaType::Void, QMetaType::QString,   33,
    0x80000000 | 35,

 // properties: name, type, flags
      36, QMetaType::QString, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ResourceDownload::ResourceModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSResourceDownloadSCOPEResourceModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceModelENDCLASS_t,
        // property 'search_term'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ResourceModel, std::true_type>,
        // method 'versionListUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'projectInfoUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'fetchMore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'canFetchMore'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'setSearchTerm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createSearchArguments'
        QtPrivate::TypeAndForceComplete<ResourceAPI::SearchArgs, std::false_type>,
        // method 'createVersionsArguments'
        QtPrivate::TypeAndForceComplete<ResourceAPI::VersionSearchArgs, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'createInfoArguments'
        QtPrivate::TypeAndForceComplete<ResourceAPI::ProjectInfoArgs, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'search'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'refresh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getIcon'
        QtPrivate::TypeAndForceComplete<std::optional<QIcon>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'addPack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedPack::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedVersion &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ResourceFolderModel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'addPack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedPack::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedVersion &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ResourceFolderModel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'addPack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedPack::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedVersion &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ResourceFolderModel *, std::false_type>,
        // method 'removePack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'selectedPacks'
        QtPrivate::TypeAndForceComplete<QList<DownloadTaskPtr>, std::false_type>
    >,
    nullptr
} };

void ResourceDownload::ResourceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResourceModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->versionListUpdated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->projectInfoUpdated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->fetchMore((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: { bool _r = _t->canFetchMore((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setSearchTerm((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: { ResourceAPI::SearchArgs _r = _t->createSearchArguments();
            if (_a[0]) *reinterpret_cast< ResourceAPI::SearchArgs*>(_a[0]) = std::move(_r); }  break;
        case 6: { ResourceAPI::VersionSearchArgs _r = _t->createVersionsArguments((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< ResourceAPI::VersionSearchArgs*>(_a[0]) = std::move(_r); }  break;
        case 7: { ResourceAPI::ProjectInfoArgs _r = _t->createInfoArguments((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])));
            if (_a[0]) *reinterpret_cast< ResourceAPI::ProjectInfoArgs*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->search(); break;
        case 9: _t->loadEntry((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 10: _t->refresh(); break;
        case 11: { std::optional<QIcon> _r = _t->getIcon((*reinterpret_cast< std::add_pointer_t<QModelIndex&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])));
            if (_a[0]) *reinterpret_cast< std::optional<QIcon>*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->addPack((*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedPack::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedVersion&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ResourceFolderModel*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 13: _t->addPack((*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedPack::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedVersion&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ResourceFolderModel*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 14: _t->addPack((*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedPack::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedVersion&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ResourceFolderModel*>>(_a[3]))); break;
        case 15: _t->removePack((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: { QList<DownloadTaskPtr> _r = _t->selectedPacks();
            if (_a[0]) *reinterpret_cast< QList<DownloadTaskPtr>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModPlatform::IndexedPack::Ptr >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModPlatform::IndexedPack::Ptr >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModPlatform::IndexedPack::Ptr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ResourceModel::*)(const QModelIndex & );
            if (_t _q_method = &ResourceModel::versionListUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ResourceModel::*)(const QModelIndex & );
            if (_t _q_method = &ResourceModel::projectInfoUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ResourceModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_search_term; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ResourceModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSearchTerm(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ResourceDownload::ResourceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceDownload::ResourceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ResourceDownload::ResourceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ResourceDownload::ResourceModel::versionListUpdated(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ResourceDownload::ResourceModel::projectInfoUpdated(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
