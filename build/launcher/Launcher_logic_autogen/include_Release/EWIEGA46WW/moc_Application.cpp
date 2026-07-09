/****************************************************************************
** Meta object code from reading C++ file 'Application.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/Application.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Application.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSApplicationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSApplicationENDCLASS = QtMocHelpers::stringData(
    "Application",
    "updateAllowedChanged",
    "",
    "status",
    "globalSettingsAboutToOpen",
    "globalSettingsApplied",
    "oauthReplyRecieved",
    "launch",
    "BaseInstance*",
    "instance",
    "LaunchMode",
    "mode",
    "std::shared_ptr<MinecraftTarget>",
    "targetToJoin",
    "shared_qobject_ptr<MinecraftAccount>",
    "accountToUse",
    "offlineName",
    "kill",
    "closeCurrentWindow",
    "on_windowClose",
    "messageReceived",
    "message",
    "controllerFinished",
    "setupWizardFinished"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSApplicationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,    1 /* Public */,
       4,    0,  107,    2, 0x06,    3 /* Public */,
       5,    0,  108,    2, 0x06,    4 /* Public */,
       6,    1,  109,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    5,  112,    2, 0x0a,    7 /* Public */,
       7,    4,  123,    2, 0x2a,   13 /* Public | MethodCloned */,
       7,    3,  132,    2, 0x2a,   18 /* Public | MethodCloned */,
       7,    2,  139,    2, 0x2a,   22 /* Public | MethodCloned */,
       7,    1,  144,    2, 0x2a,   25 /* Public | MethodCloned */,
      17,    1,  147,    2, 0x0a,   27 /* Public */,
      18,    0,  150,    2, 0x0a,   29 /* Public */,
      19,    0,  151,    2, 0x08,   30 /* Private */,
      20,    1,  152,    2, 0x08,   31 /* Private */,
      22,    0,  155,    2, 0x08,   33 /* Private */,
      23,    1,  156,    2, 0x08,   34 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    2,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 14, QMetaType::QString,    9,   11,   13,   15,   16,
    QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 14,    9,   11,   13,   15,
    QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 12,    9,   11,   13,
    QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject Application::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_meta_stringdata_CLASSApplicationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSApplicationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSApplicationENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Application, std::true_type>,
        // method 'updateAllowedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'globalSettingsAboutToOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'globalSettingsApplied'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'oauthReplyRecieved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseInstance *, std::false_type>,
        QtPrivate::TypeAndForceComplete<LaunchMode, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<MinecraftTarget>, std::false_type>,
        QtPrivate::TypeAndForceComplete<shared_qobject_ptr<MinecraftAccount>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseInstance *, std::false_type>,
        QtPrivate::TypeAndForceComplete<LaunchMode, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<MinecraftTarget>, std::false_type>,
        QtPrivate::TypeAndForceComplete<shared_qobject_ptr<MinecraftAccount>, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseInstance *, std::false_type>,
        QtPrivate::TypeAndForceComplete<LaunchMode, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<MinecraftTarget>, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseInstance *, std::false_type>,
        QtPrivate::TypeAndForceComplete<LaunchMode, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseInstance *, std::false_type>,
        // method 'kill'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseInstance *, std::false_type>,
        // method 'closeCurrentWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_windowClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'messageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'controllerFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupWizardFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Application *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateAllowedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->globalSettingsAboutToOpen(); break;
        case 2: _t->globalSettingsApplied(); break;
        case 3: _t->oauthReplyRecieved((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 4: { bool _r = _t->launch((*reinterpret_cast< std::add_pointer_t<BaseInstance*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LaunchMode>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MinecraftTarget>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<shared_qobject_ptr<MinecraftAccount>>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->launch((*reinterpret_cast< std::add_pointer_t<BaseInstance*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LaunchMode>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MinecraftTarget>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<shared_qobject_ptr<MinecraftAccount>>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->launch((*reinterpret_cast< std::add_pointer_t<BaseInstance*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LaunchMode>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::shared_ptr<MinecraftTarget>>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->launch((*reinterpret_cast< std::add_pointer_t<BaseInstance*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LaunchMode>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->launch((*reinterpret_cast< std::add_pointer_t<BaseInstance*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->kill((*reinterpret_cast< std::add_pointer_t<BaseInstance*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->closeCurrentWindow(); break;
        case 11: _t->on_windowClose(); break;
        case 12: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 13: _t->controllerFinished(); break;
        case 14: _t->setupWizardFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Application::*)(bool );
            if (_t _q_method = &Application::updateAllowedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Application::*)();
            if (_t _q_method = &Application::globalSettingsAboutToOpen; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Application::*)();
            if (_t _q_method = &Application::globalSettingsApplied; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Application::*)(QVariantMap );
            if (_t _q_method = &Application::oauthReplyRecieved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Application::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSApplicationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int Application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Application::updateAllowedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Application::globalSettingsAboutToOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Application::globalSettingsApplied()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Application::oauthReplyRecieved(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
