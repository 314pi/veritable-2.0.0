/****************************************************************************
** Meta object code from reading C++ file 'VeritableVncConnection.h'
**
** Created: Fri Jun 22 23:16:55 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../lib/include/VeritableVncConnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VeritableVncConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VeritableVncConnection[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   24,   23,   23, 0x05,
      56,   48,   23,   23, 0x05,
      86,   23,   23,   23, 0x05,
     118,  114,   23,   23, 0x05,
     154,  150,   23,   23, 0x05,
     198,  180,   23,   23, 0x05,
     238,  233,   23,   23, 0x05,
     254,   23,   23,   23, 0x05,
     280,  272,   23,   23, 0x05,
     308,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     335,  320,   23,   23, 0x0a,
     371,  359,   23,   23, 0x0a,
     391,  233,   23,   23, 0x0a,
     410,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VeritableVncConnection[] = {
    "VeritableVncConnection\0\0c\0"
    "newClient(rfbClient*)\0x,y,w,h\0"
    "imageUpdated(int,int,int,int)\0"
    "framebufferUpdateComplete()\0w,h\0"
    "framebufferSizeChanged(int,int)\0x,y\0"
    "cursorPosChanged(int,int)\0cursorShape,xh,yh\0"
    "cursorShapeUpdated(QImage,int,int)\0"
    "text\0gotCut(QString)\0passwordRequest()\0"
    "message\0outputErrorMessage(QString)\0"
    "connected()\0x,y,buttonMask\0"
    "mouseEvent(int,int,int)\0key,pressed\0"
    "keyEvent(uint,bool)\0clientCut(QString)\0"
    "checkOutputErrorMessage()\0"
};

const QMetaObject VeritableVncConnection::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_VeritableVncConnection,
      qt_meta_data_VeritableVncConnection, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VeritableVncConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VeritableVncConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VeritableVncConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VeritableVncConnection))
        return static_cast<void*>(const_cast< VeritableVncConnection*>(this));
    return QThread::qt_metacast(_clname);
}

int VeritableVncConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newClient((*reinterpret_cast< rfbClient*(*)>(_a[1]))); break;
        case 1: imageUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: framebufferUpdateComplete(); break;
        case 3: framebufferSizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: cursorPosChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: cursorShapeUpdated((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: gotCut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: passwordRequest(); break;
        case 8: outputErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: connected(); break;
        case 10: mouseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: keyEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: clientCut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: checkOutputErrorMessage(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void VeritableVncConnection::newClient(rfbClient * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VeritableVncConnection::imageUpdated(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VeritableVncConnection::framebufferUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void VeritableVncConnection::framebufferSizeChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VeritableVncConnection::cursorPosChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VeritableVncConnection::cursorShapeUpdated(const QImage & _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void VeritableVncConnection::gotCut(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void VeritableVncConnection::passwordRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void VeritableVncConnection::outputErrorMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void VeritableVncConnection::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
