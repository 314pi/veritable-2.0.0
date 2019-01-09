/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Fri Jun 22 23:20:21 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../imc/src/MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      39,   35,   11,   11, 0x08,
      70,   11,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,
      99,   11,   11,   11, 0x08,
     122,   11,   11,   11, 0x08,
     145,   11,   11,   11, 0x08,
     161,   11,   11,   11, 0x08,
     180,   11,   11,   11, 0x08,
     201,   11,   11,   11, 0x08,
     225,   11,   11,   11, 0x08,
     248,   11,   11,   11, 0x08,
     272,   11,   11,   11, 0x08,
     295,   11,   11,   11, 0x08,
     316,   11,   11,   11, 0x08,
     341,   11,   11,   11, 0x08,
     354,   11,   11,   11, 0x08,
     380,   11,   11,   11, 0x08,
     407,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0configurationChanged()\0"
    "btn\0resetOrApply(QAbstractButton*)\0"
    "startService()\0stopService()\0"
    "updateServiceControl()\0openLogFileDirectory()\0"
    "clearLogFiles()\0openGlobalConfig()\0"
    "openPersonalConfig()\0openSnapshotDirectory()\0"
    "openPublicKeyBaseDir()\0openPrivateKeyBaseDir()\0"
    "loadSettingsFromFile()\0saveSettingsToFile()\0"
    "launchKeyFileAssistant()\0manageACLs()\0"
    "testLogonAuthentication()\0"
    "generateBugReportArchive()\0aboutVeritable()\0"
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
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: configurationChanged(); break;
        case 1: resetOrApply((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: startService(); break;
        case 3: stopService(); break;
        case 4: updateServiceControl(); break;
        case 5: openLogFileDirectory(); break;
        case 6: clearLogFiles(); break;
        case 7: openGlobalConfig(); break;
        case 8: openPersonalConfig(); break;
        case 9: openSnapshotDirectory(); break;
        case 10: openPublicKeyBaseDir(); break;
        case 11: openPrivateKeyBaseDir(); break;
        case 12: loadSettingsFromFile(); break;
        case 13: saveSettingsToFile(); break;
        case 14: launchKeyFileAssistant(); break;
        case 15: manageACLs(); break;
        case 16: testLogonAuthentication(); break;
        case 17: generateBugReportArchive(); break;
        case 18: aboutVeritable(); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
