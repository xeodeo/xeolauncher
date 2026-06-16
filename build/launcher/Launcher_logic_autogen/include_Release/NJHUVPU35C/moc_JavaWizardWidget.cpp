/****************************************************************************
** Meta object code from reading C++ file 'JavaWizardWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/ui/widgets/JavaWizardWidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JavaWizardWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSJavaWizardWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSJavaWizardWidgetENDCLASS = QtMocHelpers::stringData(
    "JavaWizardWidget",
    "onSpinBoxValueChanged",
    "",
    "memoryValueChanged",
    "javaPathEdited",
    "path",
    "javaVersionSelected",
    "BaseVersion::Ptr",
    "version",
    "on_javaBrowseBtn_clicked",
    "on_javaStatusBtn_clicked",
    "javaDownloadBtn_clicked",
    "checkFinished",
    "JavaChecker::Result",
    "result"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJavaWizardWidgetENDCLASS[] = {

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
       1,    1,   62,    2, 0x09,    1 /* Protected */,
       3,    0,   65,    2, 0x09,    3 /* Protected */,
       4,    1,   66,    2, 0x09,    4 /* Protected */,
       6,    1,   69,    2, 0x09,    6 /* Protected */,
       9,    0,   72,    2, 0x09,    8 /* Protected */,
      10,    0,   73,    2, 0x09,    9 /* Protected */,
      11,    0,   74,    2, 0x09,   10 /* Protected */,
      12,    1,   75,    2, 0x09,   11 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject JavaWizardWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSJavaWizardWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJavaWizardWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSJavaWizardWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<JavaWizardWidget, std::true_type>,
        // method 'onSpinBoxValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'memoryValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'javaPathEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'javaVersionSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseVersion::Ptr, std::false_type>,
        // method 'on_javaBrowseBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_javaStatusBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'javaDownloadBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const JavaChecker::Result &, std::false_type>
    >,
    nullptr
} };

void JavaWizardWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JavaWizardWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSpinBoxValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->memoryValueChanged(); break;
        case 2: _t->javaPathEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->javaVersionSelected((*reinterpret_cast< std::add_pointer_t<BaseVersion::Ptr>>(_a[1]))); break;
        case 4: _t->on_javaBrowseBtn_clicked(); break;
        case 5: _t->on_javaStatusBtn_clicked(); break;
        case 6: _t->javaDownloadBtn_clicked(); break;
        case 7: _t->checkFinished((*reinterpret_cast< std::add_pointer_t<JavaChecker::Result>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< BaseVersion::Ptr >(); break;
            }
            break;
        }
    }
}

const QMetaObject *JavaWizardWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JavaWizardWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJavaWizardWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int JavaWizardWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
