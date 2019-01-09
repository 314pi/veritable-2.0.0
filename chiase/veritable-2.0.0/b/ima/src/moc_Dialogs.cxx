/****************************************************************************
** Meta object code from reading C++ file 'Dialogs.h'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ima/src/Dialogs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Dialogs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClientSettingsDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ClientSettingsDialog[] = {
    "ClientSettingsDialog\0"
};

const QMetaObject ClientSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ClientSettingsDialog,
      qt_meta_data_ClientSettingsDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClientSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClientSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClientSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientSettingsDialog))
        return static_cast<void*>(const_cast< ClientSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ClientSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_TextMessageDialog[] = {

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
      19,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TextMessageDialog[] = {
    "TextMessageDialog\0\0accept()\0"
};

const QMetaObject TextMessageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TextMessageDialog,
      qt_meta_data_TextMessageDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextMessageDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextMessageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextMessageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextMessageDialog))
        return static_cast<void*>(const_cast< TextMessageDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int TextMessageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_RemoteLogonDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   19,   18,   18, 0x08,
      50,   47,   18,   18, 0x08,
      82,   75,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RemoteLogonDialog[] = {
    "RemoteLogonDialog\0\0un\0userNameChanged(QString)\0"
    "pw\0passwordChanged(QString)\0domain\0"
    "domainChanged(QString)\0"
};

const QMetaObject RemoteLogonDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RemoteLogonDialog,
      qt_meta_data_RemoteLogonDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RemoteLogonDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RemoteLogonDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RemoteLogonDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteLogonDialog))
        return static_cast<void*>(const_cast< RemoteLogonDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RemoteLogonDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: userNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: passwordChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: domainChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
