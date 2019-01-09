/****************************************************************************
** Meta object code from reading C++ file 'VeritableConfiguration.h'
**
** Created: Tue 15. May 10:38:59 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../veritable-2.0.0 - OpenInQt/lib/include/VeritableConfiguration.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VeritableConfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VeritableConfiguration[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      48,   23,   23,   23, 0x0a,
      82,   23,   23,   23, 0x0a,
     108,   23,   23,   23, 0x0a,
     137,   23,   23,   23, 0x0a,
     154,   23,   23,   23, 0x0a,
     175,   23,   23,   23, 0x0a,
     205,   23,   23,   23, 0x0a,
     234,   23,   23,   23, 0x0a,
     259,   23,   23,   23, 0x0a,
     288,   23,   23,   23, 0x0a,
     322,   23,   23,   23, 0x0a,
     349,   23,   23,   23, 0x0a,
     373,   23,   23,   23, 0x0a,
     399,   23,   23,   23, 0x0a,
     432,   23,   23,   23, 0x0a,
     455,   23,   23,   23, 0x0a,
     478,   23,   23,   23, 0x0a,
     501,   23,   23,   23, 0x0a,
     535,   23,   23,   23, 0x0a,
     561,   23,   23,   23, 0x0a,
     588,   23,   23,   23, 0x0a,
     624,   23,   23,   23, 0x0a,
     662,   23,   23,   23, 0x0a,
     692,   23,   23,   23, 0x0a,
     726,   23,   23,   23, 0x0a,
     762,   23,   23,   23, 0x0a,
     811,   23,   23,   23, 0x0a,
     841,   23,   23,   23, 0x0a,
     870,   23,   23,   23, 0x0a,
     921,   23,   23,   23, 0x0a,
     959,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VeritableConfiguration[] = {
    "VeritableConfiguration\0\0setTrayIconHidden(bool)\0"
    "setLockWithDesktopSwitching(bool)\0"
    "setServiceAutostart(bool)\0"
    "setServiceArguments(QString)\0"
    "setLogLevel(int)\0setLogToStdErr(bool)\0"
    "setLogToWindowsEventLog(bool)\0"
    "setLimittedLogFileSize(bool)\0"
    "setLogFileSizeLimit(int)\0"
    "setLogFileDirectory(QString)\0"
    "setVncCaptureLayeredWindows(bool)\0"
    "setVncPollFullScreen(bool)\0"
    "setVncLowAccuracy(bool)\0"
    "setDemoServerBackend(int)\0"
    "setDemoServerMultithreaded(bool)\0"
    "setCoreServerPort(int)\0setDemoServerPort(int)\0"
    "setHttpServerPort(int)\0"
    "setFirewallExceptionEnabled(bool)\0"
    "setLocalConnectOnly(bool)\0"
    "setHttpServerEnabled(bool)\0"
    "setGlobalConfigurationPath(QString)\0"
    "setPersonalConfigurationPath(QString)\0"
    "setSnapshotDirectory(QString)\0"
    "setKeyAuthenticationEnabled(bool)\0"
    "setLogonAuthenticationEnabled(bool)\0"
    "setPermissionRequiredWithKeyAuthentication(bool)\0"
    "setPrivateKeyBaseDir(QString)\0"
    "setPublicKeyBaseDir(QString)\0"
    "setPermissionRequiredWithLogonAuthentication(bool)\0"
    "setSameUserConfirmationDisabled(bool)\0"
    "setLogonGroups(QStringList)\0"
};

void VeritableConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VeritableConfiguration *_t = static_cast<VeritableConfiguration *>(_o);
        switch (_id) {
        case 0: _t->setTrayIconHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setLockWithDesktopSwitching((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setServiceAutostart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setServiceArguments((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setLogLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setLogToStdErr((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setLogToWindowsEventLog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setLimittedLogFileSize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setLogFileSizeLimit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setLogFileDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->setVncCaptureLayeredWindows((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setVncPollFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setVncLowAccuracy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setDemoServerBackend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setDemoServerMultithreaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setCoreServerPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setDemoServerPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setHttpServerPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setFirewallExceptionEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setLocalConnectOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->setHttpServerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setGlobalConfigurationPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->setPersonalConfigurationPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->setSnapshotDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->setKeyAuthenticationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setLogonAuthenticationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setPermissionRequiredWithKeyAuthentication((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->setPrivateKeyBaseDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->setPublicKeyBaseDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->setPermissionRequiredWithLogonAuthentication((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->setSameUserConfirmationDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->setLogonGroups((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VeritableConfiguration::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VeritableConfiguration::staticMetaObject = {
    { &Configuration::Object::staticMetaObject, qt_meta_stringdata_VeritableConfiguration,
      qt_meta_data_VeritableConfiguration, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VeritableConfiguration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VeritableConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VeritableConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VeritableConfiguration))
        return static_cast<void*>(const_cast< VeritableConfiguration*>(this));
    typedef Configuration::Object QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int VeritableConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Configuration::Object QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
