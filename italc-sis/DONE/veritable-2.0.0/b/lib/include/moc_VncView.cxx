/****************************************************************************
** Meta object code from reading C++ file 'VncView.h'
**
** Created: Fri Jun 22 23:16:55 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../lib/include/VncView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VncView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VncView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      24,   22,    8,    8, 0x05,
      43,    8,    8,    8, 0x05,
      61,    8,    8,    8, 0x05,
      85,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     107,  103,    8,    8, 0x0a,
     129,  125,    8,    8, 0x0a,
     161,  149,    8,    8, 0x08,
     190,  186,    8,    8, 0x08,
     233,  215,    8,    8, 0x08,
     275,  267,    8,    8, 0x08,
     308,  304,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VncView[] = {
    "VncView\0\0mouseAtTop()\0,\0keyEvent(int,bool)\0"
    "startConnection()\0connectionEstablished()\0"
    "sizeHintChanged()\0_vo\0setViewOnly(bool)\0"
    "_sv\0setScaledView(bool)\0key,pressed\0"
    "checkKeyEvent(uint,bool)\0x,y\0"
    "updateCursorPos(int,int)\0cursorShape,xh,yh\0"
    "updateCursorShape(QImage,int,int)\0"
    "x,y,w,h\0updateImage(int,int,int,int)\0"
    "w,h\0updateSizeHint(int,int)\0"
};

const QMetaObject VncView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VncView,
      qt_meta_data_VncView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VncView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VncView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VncView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VncView))
        return static_cast<void*>(const_cast< VncView*>(this));
    return QWidget::qt_metacast(_clname);
}

int VncView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mouseAtTop(); break;
        case 1: keyEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: startConnection(); break;
        case 3: connectionEstablished(); break;
        case 4: sizeHintChanged(); break;
        case 5: setViewOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: setScaledView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: checkKeyEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: updateCursorPos((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: updateCursorShape((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: updateImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 11: updateSizeHint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void VncView::mouseAtTop()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void VncView::keyEvent(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VncView::startConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void VncView::connectionEstablished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void VncView::sizeHintChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
