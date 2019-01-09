/****************************************************************************
** Meta object code from reading C++ file 'VeritableCoreConnection.h'
**
** Created: Fri Jun 22 23:16:55 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../lib/include/VeritableCoreConnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VeritableCoreConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VeritableCoreConnection[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   25,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VeritableCoreConnection[] = {
    "VeritableCoreConnection\0\0client\0"
    "initNewClient(rfbClient*)\0"
};

const QMetaObject VeritableCoreConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VeritableCoreConnection,
      qt_meta_data_VeritableCoreConnection, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VeritableCoreConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VeritableCoreConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VeritableCoreConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VeritableCoreConnection))
        return static_cast<void*>(const_cast< VeritableCoreConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int VeritableCoreConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initNewClient((*reinterpret_cast< rfbClient*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
