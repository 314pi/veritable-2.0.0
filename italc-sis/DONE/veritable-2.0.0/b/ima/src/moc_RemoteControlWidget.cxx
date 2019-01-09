/****************************************************************************
** Meta object code from reading C++ file 'RemoteControlWidget.h'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ima/src/RemoteControlWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RemoteControlWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RemoteControlWidgetToolBar[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      37,   27,   27,   27, 0x0a,
      49,   27,   27,   27, 0x08,
      77,   27,   27,   27, 0x08,
      94,   27,   27,   27, 0x08,
     112,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RemoteControlWidgetToolBar[] = {
    "RemoteControlWidgetToolBar\0\0appear()\0"
    "disappear()\0updateConnectionAnimation()\0"
    "updatePosition()\0startConnection()\0"
    "connectionEstablished()\0"
};

const QMetaObject RemoteControlWidgetToolBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RemoteControlWidgetToolBar,
      qt_meta_data_RemoteControlWidgetToolBar, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RemoteControlWidgetToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RemoteControlWidgetToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RemoteControlWidgetToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteControlWidgetToolBar))
        return static_cast<void*>(const_cast< RemoteControlWidgetToolBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int RemoteControlWidgetToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: appear(); break;
        case 1: disappear(); break;
        case 2: updateConnectionAnimation(); break;
        case 3: updatePosition(); break;
        case 4: startConnection(); break;
        case 5: connectionEstablished(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_RemoteControlWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      39,   20,   20,   20, 0x0a,
      62,   20,   20,   20, 0x0a,
      83,   20,   20,   20, 0x0a,
     100,   98,   20,   20, 0x08,
     124,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RemoteControlWidget[] = {
    "RemoteControlWidget\0\0lockStudent(bool)\0"
    "toggleFullScreen(bool)\0toggleViewOnly(bool)\0"
    "takeSnapshot()\0,\0checkKeyEvent(int,bool)\0"
    "lateInit()\0"
};

const QMetaObject RemoteControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RemoteControlWidget,
      qt_meta_data_RemoteControlWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RemoteControlWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RemoteControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RemoteControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteControlWidget))
        return static_cast<void*>(const_cast< RemoteControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int RemoteControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: lockStudent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: toggleFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: toggleViewOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: takeSnapshot(); break;
        case 4: checkKeyEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: lateInit(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
