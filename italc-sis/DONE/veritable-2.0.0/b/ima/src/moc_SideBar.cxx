/****************************************************************************
** Meta object code from reading C++ file 'SideBar.h'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ima/src/SideBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SideBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SideBar[] = {

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
      12,    9,    8,    8, 0x08,
      40,   35,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SideBar[] = {
    "SideBar\0\0_a\0toggleButton(QAction*)\0"
    "_btn\0toggleButton(QAbstractButton*)\0"
};

const QMetaObject SideBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SideBar,
      qt_meta_data_SideBar, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SideBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SideBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SideBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SideBar))
        return static_cast<void*>(const_cast< SideBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SideBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toggleButton((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: toggleButton((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE