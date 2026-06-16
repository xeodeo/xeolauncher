/****************************************************************************
** Meta object code from reading C++ file 'ConcurrentTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/tasks/ConcurrentTask.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConcurrentTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSConcurrentTaskENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSConcurrentTaskENDCLASS = QtMocHelpers::stringData(
    "ConcurrentTask",
    "abort",
    "",
    "clear",
    "executeTask",
    "executeNextSubTask",
    "subTaskSucceeded",
    "Task::Ptr",
    "subTaskFailed",
    "msg",
    "subTaskFinished",
    "TaskStepState",
    "subTaskStatus",
    "task",
    "subTaskDetails",
    "subTaskProgress",
    "current",
    "total"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSConcurrentTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x0a,    1 /* Public */,
       3,    0,   75,    2, 0x0a,    2 /* Public */,
       4,    0,   76,    2, 0x09,    3 /* Protected */,
       5,    0,   77,    2, 0x09,    4 /* Protected */,
       6,    1,   78,    2, 0x09,    5 /* Protected */,
       8,    2,   81,    2, 0x09,    7 /* Protected */,
      10,    2,   86,    2, 0x09,   10 /* Protected */,
      12,    2,   91,    2, 0x09,   13 /* Protected */,
      14,    2,   96,    2, 0x09,   16 /* Protected */,
      15,    3,  101,    2, 0x09,   19 /* Protected */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    2,    9,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 11,    2,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,   13,    9,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,   13,    9,
    QMetaType::Void, 0x80000000 | 7, QMetaType::LongLong, QMetaType::LongLong,   13,   16,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject ConcurrentTask::staticMetaObject = { {
    QMetaObject::SuperData::link<Task::staticMetaObject>(),
    qt_meta_stringdata_CLASSConcurrentTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSConcurrentTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSConcurrentTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ConcurrentTask, std::true_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'executeTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'executeNextSubTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'subTaskSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Task::Ptr, std::false_type>,
        // method 'subTaskFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Task::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'subTaskFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Task::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<TaskStepState, std::false_type>,
        // method 'subTaskStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Task::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'subTaskDetails'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Task::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'subTaskProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Task::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void ConcurrentTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConcurrentTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->abort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->clear(); break;
        case 2: _t->executeTask(); break;
        case 3: _t->executeNextSubTask(); break;
        case 4: _t->subTaskSucceeded((*reinterpret_cast< std::add_pointer_t<Task::Ptr>>(_a[1]))); break;
        case 5: _t->subTaskFailed((*reinterpret_cast< std::add_pointer_t<Task::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->subTaskFinished((*reinterpret_cast< std::add_pointer_t<Task::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TaskStepState>>(_a[2]))); break;
        case 7: _t->subTaskStatus((*reinterpret_cast< std::add_pointer_t<Task::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->subTaskDetails((*reinterpret_cast< std::add_pointer_t<Task::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->subTaskProgress((*reinterpret_cast< std::add_pointer_t<Task::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TaskStepState >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ConcurrentTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConcurrentTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSConcurrentTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int ConcurrentTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
