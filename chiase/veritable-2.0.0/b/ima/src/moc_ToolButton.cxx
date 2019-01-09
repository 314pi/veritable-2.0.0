/****************************************************************************
** Meta object code from reading C++ file 'ToolButton.h'
**
** Created: Fri Jun 22 23:19:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ima/src/ToolButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToolButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ToolButton[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   11,   30,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToolButton[] = {
    "ToolButton\0\0mouseLeftButton()\0bool\0"
    "checkForLeaveEvent()\0"
};

const QMetaObject ToolButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_ToolButton,
      qt_meta_data_ToolButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToolButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToolButton))
        return static_cast<void*>(const_cast< ToolButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int ToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mouseLeftButton(); break;
        case 1: { bool _r = checkForLeaveEvent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ToolButton::mouseLeftButton()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
