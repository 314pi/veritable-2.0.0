/****************************************************************************
** Meta object code from reading C++ file 'LogonGroupEditor.h'
**
** Created: Fri Jun 22 23:20:21 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../imc/src/LogonGroupEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogonGroupEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LogonGroupEditor[] = {

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
      18,   17,   17,   17, 0x08,
      34,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LogonGroupEditor[] = {
    "LogonGroupEditor\0\0addLogonGroup()\0"
    "removeLogonGroup()\0"
};

const QMetaObject LogonGroupEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LogonGroupEditor,
      qt_meta_data_LogonGroupEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LogonGroupEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LogonGroupEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LogonGroupEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LogonGroupEditor))
        return static_cast<void*>(const_cast< LogonGroupEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int LogonGroupEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addLogonGroup(); break;
        case 1: removeLogonGroup(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
