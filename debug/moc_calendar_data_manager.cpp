/****************************************************************************
** Meta object code from reading C++ file 'calendar_data_manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../calendar_data_manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calendar_data_manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalendarDataManager_t {
    QByteArrayData data[10];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalendarDataManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalendarDataManager_t qt_meta_stringdata_CalendarDataManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CalendarDataManager"
QT_MOC_LITERAL(1, 20, 12), // "errorOccured"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "calendarListReady"
QT_MOC_LITERAL(4, 52, 11), // "eventsReady"
QT_MOC_LITERAL(5, 64, 19), // "calendarListChanged"
QT_MOC_LITERAL(6, 84, 12), // "eventChanged"
QT_MOC_LITERAL(7, 97, 2), // "id"
QT_MOC_LITERAL(8, 100, 13), // "replyFinished"
QT_MOC_LITERAL(9, 114, 14) // "QNetworkReply*"

    },
    "CalendarDataManager\0errorOccured\0\0"
    "calendarListReady\0eventsReady\0"
    "calendarListChanged\0eventChanged\0id\0"
    "replyFinished\0QNetworkReply*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalendarDataManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,
       4,    0,   48,    2, 0x06 /* Public */,
       5,    0,   49,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void CalendarDataManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CalendarDataManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorOccured((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->calendarListReady(); break;
        case 2: _t->eventsReady(); break;
        case 3: _t->calendarListChanged(); break;
        case 4: _t->eventChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CalendarDataManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalendarDataManager::errorOccured)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CalendarDataManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalendarDataManager::calendarListReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CalendarDataManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalendarDataManager::eventsReady)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CalendarDataManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalendarDataManager::calendarListChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CalendarDataManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalendarDataManager::eventChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CalendarDataManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CalendarDataManager.data,
    qt_meta_data_CalendarDataManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalendarDataManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalendarDataManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalendarDataManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CalendarDataManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CalendarDataManager::errorOccured(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CalendarDataManager::calendarListReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CalendarDataManager::eventsReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CalendarDataManager::calendarListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CalendarDataManager::eventChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
