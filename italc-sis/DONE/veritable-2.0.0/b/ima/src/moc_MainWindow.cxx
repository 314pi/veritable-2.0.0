/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ima/src/MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindowUpdateThread[] = {

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
      24,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindowUpdateThread[] = {
    "MainWindowUpdateThread\0\0update()\0"
};

const QMetaObject MainWindowUpdateThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MainWindowUpdateThread,
      qt_meta_data_MainWindowUpdateThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindowUpdateThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindowUpdateThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindowUpdateThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowUpdateThread))
        return static_cast<void*>(const_cast< MainWindowUpdateThread*>(this));
    return QThread::qt_metacast(_clname);
}

int MainWindowUpdateThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x08,
      75,   72,   11,   11, 0x08,
     105,   11,   11,   11, 0x08,
     141,   11,   11,   11, 0x08,
     158,   11,   11,   11, 0x08,
     186,   11,   11,   11, 0x08,
     200,   11,   11,   11, 0x08,
     220,   11,   11,   11, 0x08,
     236,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0_r\0"
    "handleSystemTrayEvent(QSystemTrayIcon::ActivationReason)\0"
    "_c\0remoteControlClient(QAction*)\0"
    "remoteControlWidgetClosed(QObject*)\0"
    "aboutVERITABLE()\0changeGlobalClientMode(int)\0"
    "mapOverview()\0mapFullscreenDemo()\0"
    "mapWindowDemo()\0mapScreenLock()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: handleSystemTrayEvent((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 1: remoteControlClient((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: remoteControlWidgetClosed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: aboutVERITABLE(); break;
        case 4: changeGlobalClientMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: mapOverview(); break;
        case 6: mapFullscreenDemo(); break;
        case 7: mapWindowDemo(); break;
        case 8: mapScreenLock(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
