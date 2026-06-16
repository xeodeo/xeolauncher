/****************************************************************************
** Meta object code from reading C++ file 'MultipleOptionsTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/tasks/MultipleOptionsTask.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultipleOptionsTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMultipleOptionsTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMultipleOptionsTaskENDCLASS = QtMocHelpers::stringData(
    "MultipleOptionsTask",
    "executeNextSubTask",
    "",
    "updateState"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMultipleOptionsTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MultipleOptionsTask::staticMetaObject = { {
    QMetaObject::SuperData::link<ConcurrentTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSMultipleOptionsTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMultipleOptionsTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMultipleOptionsTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MultipleOptionsTask, std::true_type>,
        // method 'executeNextSubTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MultipleOptionsTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultipleOptionsTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->executeNextSubTask(); break;
        case 1: _t->updateState(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MultipleOptionsTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultipleOptionsTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMultipleOptionsTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ConcurrentTask::qt_metacast(_clname);
}

int MultipleOptionsTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConcurrentTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
