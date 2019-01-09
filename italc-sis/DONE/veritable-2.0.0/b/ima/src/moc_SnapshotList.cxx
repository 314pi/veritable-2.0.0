/****************************************************************************
** Meta object code from reading C++ file 'SnapshotList.h'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ima/src/SnapshotList.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SnapshotList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SnapshotList[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x08,
      48,   14,   13,   13, 0x08,
      83,   13,   13,   13, 0x08,
      98,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SnapshotList[] = {
    "SnapshotList\0\0idx\0snapshotSelected(QModelIndex)\0"
    "snapshotDoubleClicked(QModelIndex)\0"
    "showSnapshot()\0deleteSnapshot()\0"
};

const QMetaObject SnapshotList::staticMetaObject = {
    { &SideBarWidget::staticMetaObject, qt_meta_stringdata_SnapshotList,
      qt_meta_data_SnapshotList, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SnapshotList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SnapshotList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SnapshotList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SnapshotList))
        return static_cast<void*>(const_cast< SnapshotList*>(this));
    return SideBarWidget::qt_metacast(_clname);
}

int SnapshotList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SideBarWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: snapshotSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: snapshotDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: showSnapshot(); break;
        case 3: deleteSnapshot(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
