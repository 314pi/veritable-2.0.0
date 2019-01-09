/****************************************************************************
** Meta object code from reading C++ file 'Master.h'
**
** Created: Tue 15. May 10:39:00 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../veritable-2.0.0 - OpenInQt/lib/include/Ipc/Master.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Master.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ipc__Master[] = {

 // content:
       6,       // revision
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

void Ipc::Master::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Master *_t = static_cast<Master *>(_o);
        switch (_id) {
        case 0: _t->messagesPending(); break;
        case 1: _t->acceptConnection(); break;
        case 2: _t->receiveMessage((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->sendPendingMessages(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Ipc::Master::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Ipc::Master::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_Ipc__Master,
      qt_meta_data_Ipc__Master, &staticMetaObjectExtraData }
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
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
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
