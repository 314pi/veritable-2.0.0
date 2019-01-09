/****************************************************************************
** Meta object code from reading C++ file 'KeyFileAssistant.h'
**
** Created: Fri Jun 22 23:20:21 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../imc/src/KeyFileAssistant.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeyFileAssistant.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KeyFileAssistant[] = {

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

static const char qt_meta_stringdata_KeyFileAssistant[] = {
    "KeyFileAssistant\0\0openPubKeyDir()\0"
    "openDestDir()\0"
};

const QMetaObject KeyFileAssistant::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_KeyFileAssistant,
      qt_meta_data_KeyFileAssistant, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeyFileAssistant::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeyFileAssistant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeyFileAssistant::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeyFileAssistant))
        return static_cast<void*>(const_cast< KeyFileAssistant*>(this));
    return QWizard::qt_metacast(_clname);
}

int KeyFileAssistant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: openPubKeyDir(); break;
        case 1: openDestDir(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
