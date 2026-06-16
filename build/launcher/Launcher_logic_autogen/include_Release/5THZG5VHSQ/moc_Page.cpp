/****************************************************************************
** Meta object code from reading C++ file 'Page.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/ui/pages/modplatform/legacy_ftb/Page.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Page.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS = QtMocHelpers::stringData(
    "LegacyFTB::Page",
    "ftbPackDataDownloadSuccessfully",
    "",
    "ModpackList",
    "publicPacks",
    "thirdPartyPacks",
    "ftbPackDataDownloadFailed",
    "reason",
    "ftbPackDataDownloadAborted",
    "ftbPrivatePackDataDownloadSuccessfully",
    "Modpack",
    "pack",
    "ftbPrivatePackDataDownloadFailed",
    "packCode",
    "onSortingSelectionChanged",
    "data",
    "onVersionSelectionItemChanged",
    "onPublicPackSelectionChanged",
    "QModelIndex",
    "first",
    "second",
    "onThirdPartyPackSelectionChanged",
    "onPrivatePackSelectionChanged",
    "onTabChanged",
    "tab",
    "onAddPackClicked",
    "onRemovePackClicked",
    "triggerSearch"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLegacyFTBSCOPEPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   98,    2, 0x08,    1 /* Private */,
       6,    1,  103,    2, 0x08,    4 /* Private */,
       8,    0,  106,    2, 0x08,    6 /* Private */,
       9,    1,  107,    2, 0x08,    7 /* Private */,
      12,    2,  110,    2, 0x08,    9 /* Private */,
      14,    1,  115,    2, 0x08,   12 /* Private */,
      16,    1,  118,    2, 0x08,   14 /* Private */,
      17,    2,  121,    2, 0x08,   16 /* Private */,
      21,    2,  126,    2, 0x08,   19 /* Private */,
      22,    2,  131,    2, 0x08,   22 /* Private */,
      23,    1,  136,    2, 0x08,   25 /* Private */,
      25,    0,  139,    2, 0x08,   27 /* Private */,
      26,    0,  140,    2, 0x08,   28 /* Private */,
      27,    0,  141,    2, 0x08,   29 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LegacyFTB::Page::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLegacyFTBSCOPEPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Page, std::true_type>,
        // method 'ftbPackDataDownloadSuccessfully'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModpackList, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModpackList, std::false_type>,
        // method 'ftbPackDataDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'ftbPackDataDownloadAborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ftbPrivatePackDataDownloadSuccessfully'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Modpack &, std::false_type>,
        // method 'ftbPrivatePackDataDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onSortingSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onVersionSelectionItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onPublicPackSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onThirdPartyPackSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onPrivatePackSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onTabChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onAddPackClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemovePackClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triggerSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LegacyFTB::Page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Page *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ftbPackDataDownloadSuccessfully((*reinterpret_cast< std::add_pointer_t<ModpackList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModpackList>>(_a[2]))); break;
        case 1: _t->ftbPackDataDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->ftbPackDataDownloadAborted(); break;
        case 3: _t->ftbPrivatePackDataDownloadSuccessfully((*reinterpret_cast< std::add_pointer_t<Modpack>>(_a[1]))); break;
        case 4: _t->ftbPrivatePackDataDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->onSortingSelectionChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->onVersionSelectionItemChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->onPublicPackSelectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 8: _t->onThirdPartyPackSelectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 9: _t->onPrivatePackSelectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 10: _t->onTabChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->onAddPackClicked(); break;
        case 12: _t->onRemovePackClicked(); break;
        case 13: _t->triggerSearch(); break;
        default: ;
        }
    }
}

const QMetaObject *LegacyFTB::Page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LegacyFTB::Page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModpackProviderBasePage"))
        return static_cast< ModpackProviderBasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int LegacyFTB::Page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
