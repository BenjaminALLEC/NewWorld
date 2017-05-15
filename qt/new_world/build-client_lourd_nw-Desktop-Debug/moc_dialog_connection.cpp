/****************************************************************************
** Meta object code from reading C++ file 'dialog_connection.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../client_lourd_nw/dialog_connection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog_connection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      48,   18,   18,   18, 0x08,
      80,   75,   18,   18, 0x08,
     120,   75,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog_connection[] = {
    "Dialog_connection\0\0on_pushButton_exit_clicked()\0"
    "on_pushButton_ok_clicked()\0arg1\0"
    "on_lineEdit_pseudo_textChanged(QString)\0"
    "on_lineEdit_mdp_textChanged(QString)\0"
};

void Dialog_connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog_connection *_t = static_cast<Dialog_connection *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_exit_clicked(); break;
        case 1: _t->on_pushButton_ok_clicked(); break;
        case 2: _t->on_lineEdit_pseudo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lineEdit_mdp_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dialog_connection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog_connection::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_connection,
      qt_meta_data_Dialog_connection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog_connection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog_connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog_connection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_connection))
        return static_cast<void*>(const_cast< Dialog_connection*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
