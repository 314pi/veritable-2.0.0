/****************************************************************************
** Meta object code from reading C++ file 'DemoServer.h'
**
** Created: Fri Jun 22 23:17:38 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ica/src/DemoServer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DemoServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DemoServer[] = {

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
      45,   37,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DemoServer[] = {
    "DemoServer\0\0checkForCursorMovement()\0"
    "img,x,y\0updateInitialCursorShape(QImage,int,int)\0"
};

const QMetaObject DemoServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_DemoServer,
      qt_meta_data_DemoServer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DemoServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DemoServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DemoServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DemoServer))
        return static_cast<void*>(const_cast< DemoServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int DemoServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: checkForCursorMovement(); break;
        case 1: updateInitialCursorShape((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_DemoServerClient[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   18,   17,   17, 0x08,
      72,   54,   17,   17, 0x08,
     106,   17,   17,   17, 0x08,
     119,   17,   17,   17, 0x08,
     135,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DemoServerClient[] = {
    "DemoServerClient\0\0x,y,w,h\0"
    "updateRect(int,int,int,int)\0"
    "cursorShape,xh,yh\0updateCursorShape(QImage,int,int)\0"
    "moveCursor()\0processClient()\0sendUpdates()\0"
};

const QMetaObject DemoServerClient::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DemoServerClient,
      qt_meta_data_DemoServerClient, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DemoServerClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DemoServerClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DemoServerClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DemoServerClient))
        return static_cast<void*>(const_cast< DemoServerClient*>(this));
    return QThread::qt_metacast(_clname);
}

int DemoServerClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateRect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: updateCursorShape((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: moveCursor(); break;
        case 3: processClient(); break;
        case 4: sendUpdates(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
