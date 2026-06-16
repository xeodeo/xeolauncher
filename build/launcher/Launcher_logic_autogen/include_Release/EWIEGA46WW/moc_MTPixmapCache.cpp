/****************************************************************************
** Meta object code from reading C++ file 'MTPixmapCache.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Codigo fuente/PrismLauncher-develop/launcher/MTPixmapCache.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MTPixmapCache.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPixmapCacheENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPixmapCacheENDCLASS = QtMocHelpers::stringData(
    "PixmapCache",
    "_cacheLimit",
    "",
    "_clear",
    "_find",
    "key",
    "QPixmap*",
    "pixmap",
    "QPixmapCache::Key",
    "_insert",
    "_remove",
    "_replace",
    "_setCacheLimit",
    "n",
    "_markCacheMissByEviciton",
    "_setFastEvictionThreshold",
    "threshold"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPixmapCacheENDCLASS[] = {

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
       4,    2,   88,    2, 0x08,    3 /* Private */,
       4,    2,   93,    2, 0x08,    6 /* Private */,
       9,    2,   98,    2, 0x08,    9 /* Private */,
       9,    1,  103,    2, 0x08,   12 /* Private */,
      10,    1,  106,    2, 0x08,   14 /* Private */,
      10,    1,  109,    2, 0x08,   16 /* Private */,
      11,    2,  112,    2, 0x08,   18 /* Private */,
      12,    1,  117,    2, 0x08,   21 /* Private */,
      14,    0,  120,    2, 0x08,   23 /* Private */,
      15,    1,  121,    2, 0x08,   24 /* Private */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 6,    5,    7,
    QMetaType::Bool, QMetaType::QString, QMetaType::QPixmap,    5,    7,
    0x80000000 | 8, QMetaType::QPixmap,    7,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::Bool, 0x80000000 | 8,    5,
    QMetaType::Bool, 0x80000000 | 8, QMetaType::QPixmap,    5,    7,
    QMetaType::Bool, QMetaType::Int,   13,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject PixmapCache::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPixmapCacheENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPixmapCacheENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPixmapCacheENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PixmapCache, std::true_type>,
        // method '_cacheLimit'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_clear'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_find'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPixmap *, std::false_type>,
        // method '_find'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmapCache::Key &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPixmap *, std::false_type>,
        // method '_insert'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>,
        // method '_insert'
        QtPrivate::TypeAndForceComplete<QPixmapCache::Key, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>,
        // method '_remove'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_remove'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmapCache::Key &, std::false_type>,
        // method '_replace'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmapCache::Key &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>,
        // method '_setCacheLimit'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_markCacheMissByEviciton'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_setFastEvictionThreshold'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void PixmapCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PixmapCache *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->_cacheLimit();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->_clear();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->_find((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPixmap*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->_find((*reinterpret_cast< std::add_pointer_t<QPixmapCache::Key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPixmap*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->_insert((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { QPixmapCache::Key _r = _t->_insert((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmapCache::Key*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->_remove((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->_remove((*reinterpret_cast< std::add_pointer_t<QPixmapCache::Key>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->_replace((*reinterpret_cast< std::add_pointer_t<QPixmapCache::Key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->_setCacheLimit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->_markCacheMissByEviciton();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->_setFastEvictionThreshold((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *PixmapCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PixmapCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPixmapCacheENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PixmapCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
