/****************************************************************************
** Meta object code from reading C++ file 'Slave.h'
**
** Created: Fri Jun 22 23:16:55 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lib/include/Ipc/Slave.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Slave.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ipc__Slave[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      29,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Ipc__Slave[] = {
    "Ipc::Slave\0\0receiveMessage()\0masterPing()\0"
};

const QMetaObject Ipc::Slave::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_Ipc__Slave,
      qt_meta_data_Ipc__Slave, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ipc::Slave::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ipc::Slave::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ipc::Slave::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ipc__Slave))
        return static_cast<void*>(const_cast< Slave*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int Ipc::Slave::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: receiveMessage(); break;
        case 1: masterPing(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
