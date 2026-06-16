/****************************************************************************
** Meta object code from reading C++ file 'LogPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/ui/pages/instance/LogPage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLogPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLogPageENDCLASS = QtMocHelpers::stringData(
    "LogPage",
    "on_btnPaste_clicked",
    "",
    "on_btnCopy_clicked",
    "on_btnClear_clicked",
    "on_btnBottom_clicked",
    "on_trackLogCheckbox_clicked",
    "checked",
    "on_wrapCheckbox_clicked",
    "on_colorCheckbox_clicked",
    "on_findButton_clicked",
    "findActivated",
    "findNextActivated",
    "findPreviousActivated",
    "onInstanceLaunchTaskChanged",
    "LaunchTask*",
    "proc"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLogPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    1,   90,    2, 0x08,    5 /* Private */,
       8,    1,   93,    2, 0x08,    7 /* Private */,
       9,    1,   96,    2, 0x08,    9 /* Private */,
      10,    0,   99,    2, 0x08,   11 /* Private */,
      11,    0,  100,    2, 0x08,   12 /* Private */,
      12,    0,  101,    2, 0x08,   13 /* Private */,
      13,    0,  102,    2, 0x08,   14 /* Private */,
      14,    1,  103,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject LogPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSLogPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLogPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLogPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LogPage, std::true_type>,
        // method 'on_btnPaste_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnCopy_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnClear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnBottom_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_trackLogCheckbox_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_wrapCheckbox_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_colorCheckbox_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_findButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findNextActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findPreviousActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInstanceLaunchTaskChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LaunchTask *, std::false_type>
    >,
    nullptr
} };

void LogPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnPaste_clicked(); break;
        case 1: _t->on_btnCopy_clicked(); break;
        case 2: _t->on_btnClear_clicked(); break;
        case 3: _t->on_btnBottom_clicked(); break;
        case 4: _t->on_trackLogCheckbox_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_wrapCheckbox_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_colorCheckbox_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_findButton_clicked(); break;
        case 8: _t->findActivated(); break;
        case 9: _t->findNextActivated(); break;
        case 10: _t->findPreviousActivated(); break;
        case 11: _t->onInstanceLaunchTaskChanged((*reinterpret_cast< std::add_pointer_t<LaunchTask*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LaunchTask* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *LogPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLogPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int LogPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
