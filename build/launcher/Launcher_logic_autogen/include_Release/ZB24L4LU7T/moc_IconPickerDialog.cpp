/****************************************************************************
** Meta object code from reading C++ file 'IconPickerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/ui/dialogs/IconPickerDialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IconPickerDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSIconPickerDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSIconPickerDialogENDCLASS = QtMocHelpers::stringData(
    "IconPickerDialog",
    "selectionChanged",
    "",
    "QItemSelection",
    "activated",
    "QModelIndex",
    "delayed_scroll",
    "addNewIcon",
    "removeSelectedIcon",
    "openFolder",
    "filterIcons",
    "text",
    "filterIconsByCategory",
    "IconPickerCategory",
    "Any",
    "Modern",
    "Legacy",
    "Modpacks",
    "Custom"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSIconPickerDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   82, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x08,    2 /* Private */,
       4,    1,   67,    2, 0x08,    5 /* Private */,
       6,    1,   70,    2, 0x08,    7 /* Private */,
       7,    0,   73,    2, 0x08,    9 /* Private */,
       8,    0,   74,    2, 0x08,   10 /* Private */,
       9,    0,   75,    2, 0x08,   11 /* Private */,
      10,    1,   76,    2, 0x08,   12 /* Private */,
      12,    1,   79,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 13,    2,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    5,   87,

 // enum data: key, value
      14, uint(IconPickerDialog::Any),
      15, uint(IconPickerDialog::Modern),
      16, uint(IconPickerDialog::Legacy),
      17, uint(IconPickerDialog::Modpacks),
      18, uint(IconPickerDialog::Custom),

       0        // eod
};

Q_CONSTINIT const QMetaObject IconPickerDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSIconPickerDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSIconPickerDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSIconPickerDialogENDCLASS_t,
        // enum 'IconPickerCategory'
        QtPrivate::TypeAndForceComplete<IconPickerDialog::IconPickerCategory, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IconPickerDialog, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QItemSelection, std::false_type>,
        QtPrivate::TypeAndForceComplete<QItemSelection, std::false_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'delayed_scroll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'addNewIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeSelectedIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filterIcons'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'filterIconsByCategory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<IconPickerCategory, std::false_type>
    >,
    nullptr
} };

void IconPickerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IconPickerDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 1: _t->activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->delayed_scroll((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->addNewIcon(); break;
        case 4: _t->removeSelectedIcon(); break;
        case 5: _t->openFolder(); break;
        case 6: _t->filterIcons((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->filterIconsByCategory((*reinterpret_cast< std::add_pointer_t<IconPickerCategory>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    }
}

const QMetaObject *IconPickerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IconPickerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSIconPickerDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int IconPickerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
