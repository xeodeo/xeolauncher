/****************************************************************************
** Meta object code from reading C++ file 'MSADeviceCodeStep.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/minecraft/auth/steps/MSADeviceCodeStep.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MSADeviceCodeStep.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMSADeviceCodeStepENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMSADeviceCodeStepENDCLASS = QtMocHelpers::stringData(
    "MSADeviceCodeStep",
    "authorizeWithBrowser",
    "",
    "url",
    "code",
    "expiresIn",
    "abort",
    "deviceAuthorizationFinished",
    "QByteArray*",
    "response",
    "startPoolTimer",
    "authenticateUser",
    "authenticationFinished"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMSADeviceCodeStepENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   57,    2, 0x0a,    5 /* Public */,
       7,    1,   58,    2, 0x08,    6 /* Private */,
      10,    0,   61,    2, 0x08,    8 /* Private */,
      11,    0,   62,    2, 0x08,    9 /* Private */,
      12,    1,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject MSADeviceCodeStep::staticMetaObject = { {
    QMetaObject::SuperData::link<AuthStep::staticMetaObject>(),
    qt_meta_stringdata_CLASSMSADeviceCodeStepENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMSADeviceCodeStepENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMSADeviceCodeStepENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MSADeviceCodeStep, std::true_type>,
        // method 'authorizeWithBrowser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceAuthorizationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>,
        // method 'startPoolTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'authenticateUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'authenticationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>
    >,
    nullptr
} };

void MSADeviceCodeStep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MSADeviceCodeStep *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authorizeWithBrowser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 1: _t->abort(); break;
        case 2: _t->deviceAuthorizationFinished((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1]))); break;
        case 3: _t->startPoolTimer(); break;
        case 4: _t->authenticateUser(); break;
        case 5: _t->authenticationFinished((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MSADeviceCodeStep::*)(QString , QString , int );
            if (_t _q_method = &MSADeviceCodeStep::authorizeWithBrowser; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MSADeviceCodeStep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSADeviceCodeStep::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMSADeviceCodeStepENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AuthStep::qt_metacast(_clname);
}

int MSADeviceCodeStep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AuthStep::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MSADeviceCodeStep::authorizeWithBrowser(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
