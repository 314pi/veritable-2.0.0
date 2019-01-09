/****************************************************************************
** Meta object code from reading C++ file 'Master.h'
**
** Created: Fri Jun 22 23:16:55 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lib/include/Ipc/Master.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Master.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ipc__Master[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   12,   12,   12, 0x08,
      55,   50,   12,   12, 0x08,
      80,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Ipc__Master[] = {
    "Ipc::Master\0\0messagesPending()\0"
    "acceptConnection()\0sock\0"
    "receiveMessage(QObject*)\0sendPendingMessages()\0"
};

const QMetaObject Ipc::Master::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_Ipc__Master,
      qt_meta_data_Ipc__Master, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ipc::Master::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ipc::Master::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ipc::Master::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ipc__Master))
        return static_cast<void*>(const_cast< Master*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int Ipc::Master::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: messagesPending(); break;
        case 1: acceptConnection(); break;
        case 2: receiveMessage((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: sendPendingMessages(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Ipc::Master::messagesPending()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
