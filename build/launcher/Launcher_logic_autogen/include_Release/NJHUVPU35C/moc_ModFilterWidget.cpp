/****************************************************************************
** Meta object code from reading C++ file 'ModFilterWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/ui/widgets/ModFilterWidget.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModFilterWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModFilterWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSModFilterWidgetENDCLASS = QtMocHelpers::stringData(
    "ModFilterWidget",
    "filterChanged",
    "",
    "setCategories",
    "QList<ModPlatform::Category>",
    "onVersionFilterChanged",
    "onVersionFilterTextChanged",
    "version",
    "onLoadersFilterChanged",
    "onSideFilterChanged",
    "onHideInstalledFilterChanged",
    "onShowAllVersionsChanged",
    "onOpenSourceFilterChanged",
    "onReleaseFilterChanged",
    "onShowMoreClicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModFilterWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   81,    2, 0x0a,    2 /* Public */,
       5,    1,   84,    2, 0x08,    4 /* Private */,
       6,    1,   87,    2, 0x08,    6 /* Private */,
       8,    0,   90,    2, 0x08,    8 /* Private */,
       9,    0,   91,    2, 0x08,    9 /* Private */,
      10,    0,   92,    2, 0x08,   10 /* Private */,
      11,    0,   93,    2, 0x08,   11 /* Private */,
      12,    0,   94,    2, 0x08,   12 /* Private */,
      13,    0,   95,    2, 0x08,   13 /* Private */,
      14,    0,   96,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModFilterWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSModFilterWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModFilterWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModFilterWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModFilterWidget, std::true_type>,
        // method 'filterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCategories'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<ModPlatform::Category> &, std::false_type>,
        // method 'onVersionFilterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onVersionFilterTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onLoadersFilterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSideFilterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onHideInstalledFilterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onShowAllVersionsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOpenSourceFilterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReleaseFilterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onShowMoreClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ModFilterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModFilterWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->filterChanged(); break;
        case 1: _t->setCategories((*reinterpret_cast< std::add_pointer_t<QList<ModPlatform::Category>>>(_a[1]))); break;
        case 2: _t->onVersionFilterChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onVersionFilterTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->onLoadersFilterChanged(); break;
        case 5: _t->onSideFilterChanged(); break;
        case 6: _t->onHideInstalledFilterChanged(); break;
        case 7: _t->onShowAllVersionsChanged(); break;
        case 8: _t->onOpenSourceFilterChanged(); break;
        case 9: _t->onReleaseFilterChanged(); break;
        case 10: _t->onShowMoreClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModFilterWidget::*)();
            if (_t _q_method = &ModFilterWidget::filterChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ModFilterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModFilterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModFilterWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int ModFilterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ModFilterWidget::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
