/****************************************************************************
** Meta object code from reading C++ file 'Client.h'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ima/src/Client.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClientAction[] = {

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

static const char qt_meta_stringdata_ClientAction[] = {
    "ClientAction\0"
};

const QMetaObject ClientAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_ClientAction,
      qt_meta_data_ClientAction, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClientAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClientAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClientAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientAction))
        return static_cast<void*>(const_cast< ClientAction*>(this));
    return QAction::qt_metacast(_clname);
}

int ClientAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_clientMenu[] = {

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

static const char qt_meta_stringdata_clientMenu[] = {
    "clientMenu\0"
};

const QMetaObject clientMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_clientMenu,
      qt_meta_data_clientMenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &clientMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *clientMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *clientMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_clientMenu))
        return static_cast<void*>(const_cast< clientMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int clientMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Client[] = {

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
       8,    7,    7,    7, 0x08,
      18,    7,    7,    7, 0x08,
      27,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Client[] = {
    "Client\0\0enlarge()\0reload()\0setUpdateFlag()\0"
};

const QMetaObject Client::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Client,
      qt_meta_data_Client, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Client::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Client))
        return static_cast<void*>(const_cast< Client*>(this));
    return QWidget::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: enlarge(); break;
        case 1: reload(); break;
        case 2: setUpdateFlag(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
