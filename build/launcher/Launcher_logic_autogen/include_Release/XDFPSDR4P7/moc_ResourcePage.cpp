/****************************************************************************
** Meta object code from reading C++ file 'ResourcePage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/ui/pages/modplatform/ResourcePage.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ResourcePage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePageENDCLASS = QtMocHelpers::stringData(
    "ResourceDownload::ResourcePage",
    "updateUi",
    "",
    "QModelIndex",
    "index",
    "updateSelectionButton",
    "versionListUpdated",
    "addResourceToDialog",
    "ModPlatform::IndexedPack::Ptr",
    "ModPlatform::IndexedVersion&",
    "removeResourceFromDialog",
    "packName",
    "removeResourceFromPage",
    "name",
    "addResourceToPage",
    "ResourceFolderModel*",
    "downloadReason",
    "modelReset",
    "selectedPacks",
    "QList<DownloadTaskPtr>",
    "hasSelectedPacks",
    "openProject",
    "projectID",
    "setSuppressInitialSearch",
    "suppress",
    "triggerSearch",
    "onSelectionChanged",
    "curr",
    "prev",
    "onVersionSelectionChanged",
    "onResourceSelected",
    "onResourceToggle",
    "urlHandlers",
    "QMap<QString,QString>",
    "openUrl"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSResourceDownloadSCOPEResourcePageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  134,    2, 0x0a,    1 /* Public */,
       5,    0,  137,    2, 0x0a,    3 /* Public */,
       6,    1,  138,    2, 0x0a,    4 /* Public */,
       7,    2,  141,    2, 0x0a,    6 /* Public */,
      10,    1,  146,    2, 0x0a,    9 /* Public */,
      12,    1,  149,    2, 0x0a,   11 /* Public */,
      14,    4,  152,    2, 0x0a,   13 /* Public */,
      14,    3,  161,    2, 0x2a,   18 /* Public | MethodCloned */,
      17,    0,  168,    2, 0x0a,   22 /* Public */,
      18,    0,  169,    2, 0x0a,   23 /* Public */,
      20,    0,  170,    2, 0x0a,   24 /* Public */,
      21,    1,  171,    2, 0x0a,   25 /* Public */,
      23,    1,  174,    2, 0x0a,   27 /* Public */,
      25,    0,  177,    2, 0x09,   29 /* Protected */,
      26,    2,  178,    2, 0x09,   30 /* Protected */,
      29,    1,  183,    2, 0x09,   33 /* Protected */,
      30,    0,  186,    2, 0x09,   35 /* Protected */,
      31,    1,  187,    2, 0x09,   36 /* Protected */,
      32,    0,  190,    2, 0x109,   38 /* Protected | MethodIsConst  */,
      34,    1,  191,    2, 0x09,   39 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 9,    2,    2,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 9, 0x80000000 | 15, QMetaType::QString,    2,    2,    2,   16,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 9, 0x80000000 | 15,    2,    2,    2,
    QMetaType::Void,
    0x80000000 | 19,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QVariant,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   27,   28,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 33,
    QMetaType::Void, QMetaType::QUrl,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject ResourceDownload::ResourcePage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSResourceDownloadSCOPEResourcePageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ResourcePage, std::true_type>,
        // method 'updateUi'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'updateSelectionButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'versionListUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'addResourceToDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedPack::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedVersion &, std::false_type>,
        // method 'removeResourceFromDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'removeResourceFromPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'addResourceToPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedPack::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedVersion &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ResourceFolderModel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'addResourceToPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedPack::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::IndexedVersion &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ResourceFolderModel *, std::false_type>,
        // method 'modelReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedPacks'
        QtPrivate::TypeAndForceComplete<QList<DownloadTaskPtr>, std::false_type>,
        // method 'hasSelectedPacks'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'openProject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'setSuppressInitialSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'triggerSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onVersionSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onResourceSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResourceToggle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'urlHandlers'
        QtPrivate::TypeAndForceComplete<QMap<QString,QString>, std::false_type>,
        // method 'openUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>
    >,
    nullptr
} };

void ResourceDownload::ResourcePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResourcePage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateUi((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->updateSelectionButton(); break;
        case 2: _t->versionListUpdated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->addResourceToDialog((*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedPack::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedVersion&>>(_a[2]))); break;
        case 4: _t->removeResourceFromDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->removeResourceFromPage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->addResourceToPage((*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedPack::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedVersion&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ResourceFolderModel*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 7: _t->addResourceToPage((*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedPack::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModPlatform::IndexedVersion&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ResourceFolderModel*>>(_a[3]))); break;
        case 8: _t->modelReset(); break;
        case 9: { QList<DownloadTaskPtr> _r = _t->selectedPacks();
            if (_a[0]) *reinterpret_cast< QList<DownloadTaskPtr>*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->hasSelectedPacks();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->openProject((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 12: _t->setSuppressInitialSearch((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->triggerSearch(); break;
        case 14: _t->onSelectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 15: _t->onVersionSelectionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->onResourceSelected(); break;
        case 17: _t->onResourceToggle((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 18: { QMap<QString,QString> _r = _t->urlHandlers();
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->openUrl((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModPlatform::IndexedPack::Ptr >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModPlatform::IndexedPack::Ptr >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModPlatform::IndexedPack::Ptr >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ResourceDownload::ResourcePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceDownload::ResourcePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int ResourceDownload::ResourcePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
