/****************************************************************************
** Meta object code from reading C++ file 'smartcinema.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../integration_f/smartcinema.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartcinema.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Smartcinema_t {
    QByteArrayData data[14];
    char stringdata0[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Smartcinema_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Smartcinema_t qt_meta_stringdata_Smartcinema = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Smartcinema"
QT_MOC_LITERAL(1, 12, 13), // "update_label1"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(4, 51, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(5, 75, 33), // "on_pushButton_gest_cinema_cli..."
QT_MOC_LITERAL(6, 109, 32), // "on_pushButton_gest_salle_clicked"
QT_MOC_LITERAL(7, 142, 31), // "on_pushButton_gest_film_clicked"
QT_MOC_LITERAL(8, 174, 33), // "on_pushButton_gest_ticket_cli..."
QT_MOC_LITERAL(9, 208, 33), // "on_pushButton_gest_client_cli..."
QT_MOC_LITERAL(10, 242, 37), // "on_pushButton_gest_producteur..."
QT_MOC_LITERAL(11, 280, 44), // "on_pushButton_gest_chaise_pro..."
QT_MOC_LITERAL(12, 325, 32), // "on_pushButton_projection_clicked"
QT_MOC_LITERAL(13, 358, 10) // "myfunction"

    },
    "Smartcinema\0update_label1\0\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_gest_cinema_clicked\0"
    "on_pushButton_gest_salle_clicked\0"
    "on_pushButton_gest_film_clicked\0"
    "on_pushButton_gest_ticket_clicked\0"
    "on_pushButton_gest_client_clicked\0"
    "on_pushButton_gest_producteur_clicked\0"
    "on_pushButton_gest_chaise_producteur_clicked\0"
    "on_pushButton_projection_clicked\0"
    "myfunction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Smartcinema[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Smartcinema::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Smartcinema *_t = static_cast<Smartcinema *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_label1(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->on_pushButton_4_clicked(); break;
        case 3: _t->on_pushButton_gest_cinema_clicked(); break;
        case 4: _t->on_pushButton_gest_salle_clicked(); break;
        case 5: _t->on_pushButton_gest_film_clicked(); break;
        case 6: _t->on_pushButton_gest_ticket_clicked(); break;
        case 7: _t->on_pushButton_gest_client_clicked(); break;
        case 8: _t->on_pushButton_gest_producteur_clicked(); break;
        case 9: _t->on_pushButton_gest_chaise_producteur_clicked(); break;
        case 10: _t->on_pushButton_projection_clicked(); break;
        case 11: _t->myfunction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Smartcinema::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Smartcinema.data,
      qt_meta_data_Smartcinema,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Smartcinema::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Smartcinema::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Smartcinema.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Smartcinema::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
