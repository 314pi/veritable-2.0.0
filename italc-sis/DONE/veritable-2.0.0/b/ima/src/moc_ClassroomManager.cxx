/****************************************************************************
** Meta object code from reading C++ file 'ClassroomManager.h'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ima/src/ClassroomManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClassroomManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClassroomManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      34,   17,   17,   17, 0x0a,
      62,   54,   17,   17, 0x0a,
      92,   17,   17,   17, 0x0a,
     120,   17,   17,   17, 0x0a,
     134,   17,   17,   17, 0x0a,
     151,   17,   17,   17, 0x0a,
     170,   17,   17,   17, 0x0a,
     186,   17,   17,   17, 0x0a,
     206,  202,   17,   17, 0x0a,
     233,   17,   17,   17, 0x0a,
     254,   17,   17,   17, 0x0a,
     283,  275,   17,   17, 0x0a,
     313,   17,   17,   17, 0x0a,
     336,  333,   17,   17, 0x0a,
     371,  365,   17,   17, 0x0a,
     391,   17,   17,   17, 0x0a,
     417,  413,   17,   17, 0x08,
     462,  457,   17,   17, 0x08,
     489,   17,   17,   17, 0x08,
     506,   17,   17,   17, 0x08,
     527,   17,   17,   17, 0x08,
     542,   17,   17,   17, 0x08,
     567,   17,   17,   17, 0x08,
     592,   17,   17,   17, 0x08,
     612,   17,   17,   17, 0x08,
     630,   17,   17,   17, 0x08,
     642,   17,   17,   17, 0x08,
     657,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ClassroomManager[] = {
    "ClassroomManager\0\0updateClients()\0"
    "clientMenuRequest()\0_action\0"
    "clientMenuTriggered(QAction*)\0"
    "changeGlobalClientMode(int)\0sendMessage()\0"
    "powerOnClients()\0powerDownClients()\0"
    "directSupport()\0adjustWindows()\0_on\0"
    "arrangeWindowsToggle(bool)\0"
    "increaseClientSize()\0decreaseClientSize()\0"
    "seconds\0updateIntervalChanged(double)\0"
    "hideAllClassRooms()\0_a\0"
    "setClientDblClickAction(int)\0_show\0"
    "showUserColumn(int)\0clickedExportToFile()\0"
    "_i,\0itemDoubleClicked(QTreeWidgetItem*,int)\0"
    "_pos\0contextMenuRequest(QPoint)\0"
    "showHideClient()\0editClientSettings()\0"
    "removeClient()\0showSelectedClassRooms()\0"
    "hideSelectedClassRooms()\0editClassRoomName()\0"
    "removeClassRoom()\0addClient()\0"
    "addClassRoom()\0hideTeacherClients()\0"
};

const QMetaObject ClassroomManager::staticMetaObject = {
    { &SideBarWidget::staticMetaObject, qt_meta_stringdata_ClassroomManager,
      qt_meta_data_ClassroomManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClassroomManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClassroomManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClassroomManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClassroomManager))
        return static_cast<void*>(const_cast< ClassroomManager*>(this));
    return SideBarWidget::qt_metacast(_clname);
}

int ClassroomManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SideBarWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateClients(); break;
        case 1: clientMenuRequest(); break;
        case 2: clientMenuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: changeGlobalClientMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: sendMessage(); break;
        case 5: powerOnClients(); break;
        case 6: powerDownClients(); break;
        case 7: directSupport(); break;
        case 8: adjustWindows(); break;
        case 9: arrangeWindowsToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: increaseClientSize(); break;
        case 11: decreaseClientSize(); break;
        case 12: updateIntervalChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: hideAllClassRooms(); break;
        case 14: setClientDblClickAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: showUserColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: clickedExportToFile(); break;
        case 17: itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: contextMenuRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 19: showHideClient(); break;
        case 20: editClientSettings(); break;
        case 21: removeClient(); break;
        case 22: showSelectedClassRooms(); break;
        case 23: hideSelectedClassRooms(); break;
        case 24: editClassRoomName(); break;
        case 25: removeClassRoom(); break;
        case 26: addClient(); break;
        case 27: addClassRoom(); break;
        case 28: hideTeacherClients(); break;
        default: ;
        }
        _id -= 29;
    }
    return _id;
}
static const uint qt_meta_data_classTreeWidget[] = {

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
      17,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_classTreeWidget[] = {
    "classTreeWidget\0\0itemSelectionChanged()\0"
};

const QMetaObject classTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_classTreeWidget,
      qt_meta_data_classTreeWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &classTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *classTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *classTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_classTreeWidget))
        return static_cast<void*>(const_cast< classTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int classTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: itemSelectionChanged(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_classRoom[] = {

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
      11,   10,   10,   10, 0x0a,
      39,   31,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_classRoom[] = {
    "classRoom\0\0switchToClassRoom()\0_action\0"
    "clientMenuTriggered(QAction*)\0"
};

const QMetaObject classRoom::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_classRoom,
      qt_meta_data_classRoom, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &classRoom::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *classRoom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *classRoom::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_classRoom))
        return static_cast<void*>(const_cast< classRoom*>(this));
    if (!strcmp(_clname, "QTreeWidgetItem"))
        return static_cast< QTreeWidgetItem*>(const_cast< classRoom*>(this));
    return QObject::qt_metacast(_clname);
}

int classRoom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: switchToClassRoom(); break;
        case 1: clientMenuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
