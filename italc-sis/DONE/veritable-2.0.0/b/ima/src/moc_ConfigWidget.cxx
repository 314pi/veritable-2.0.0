/****************************************************************************
** Meta object code from reading C++ file 'ConfigWidget.h'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ima/src/ConfigWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConfigWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConfigWidget[] = {

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
      14,   13,   13,   13, 0x09,
      36,   32,   13,   13, 0x09,
      63,   32,   13,   13, 0x09,
     103,   95,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ConfigWidget[] = {
    "ConfigWidget\0\0roleSelected(int)\0_on\0"
    "toggleToolButtonTips(bool)\0"
    "toggleIconOnlyToolButtons(bool)\0_domain\0"
    "domainChanged(QString)\0"
};

const QMetaObject ConfigWidget::staticMetaObject = {
    { &SideBarWidget::staticMetaObject, qt_meta_stringdata_ConfigWidget,
      qt_meta_data_ConfigWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConfigWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConfigWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConfigWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigWidget))
        return static_cast<void*>(const_cast< ConfigWidget*>(this));
    return SideBarWidget::qt_metacast(_clname);
}

int ConfigWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SideBarWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: roleSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: toggleToolButtonTips((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: toggleIconOnlyToolButtons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: domainChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
