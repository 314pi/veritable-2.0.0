/****************************************************************************
** Meta object code from reading C++ file 'SystemKeyTrapper.h'
**
** Created: Fri Jun 22 23:16:55 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../lib/include/SystemKeyTrapper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemKeyTrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemKeyTrapper[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SystemKeyTrapper[] = {
    "SystemKeyTrapper\0\0,\0keyEvent(uint,bool)\0"
    "checkForTrappedKeys()\0"
};

const QMetaObject SystemKeyTrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SystemKeyTrapper,
      qt_meta_data_SystemKeyTrapper, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemKeyTrapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemKeyTrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemKeyTrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemKeyTrapper))
        return static_cast<void*>(const_cast< SystemKeyTrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int SystemKeyTrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: keyEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: checkForTrappedKeys(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SystemKeyTrapper::keyEvent(unsigned int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
