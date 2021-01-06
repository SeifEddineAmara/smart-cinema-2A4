/****************************************************************************
** Meta object code from reading C++ file 'cinema_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../integration_f/cinema_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cinema_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cinema_page_t {
    QByteArrayData data[16];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cinema_page_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cinema_page_t qt_meta_stringdata_cinema_page = {
    {
QT_MOC_LITERAL(0, 0, 11), // "cinema_page"
QT_MOC_LITERAL(1, 12, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 29), // "on_pushButton_ajouter_clicked"
QT_MOC_LITERAL(4, 65, 30), // "on_pushButton_modifier_clicked"
QT_MOC_LITERAL(5, 96, 29), // "on_pushButton_charger_clicked"
QT_MOC_LITERAL(6, 126, 24), // "on_tableView_2_activated"
QT_MOC_LITERAL(7, 151, 5), // "index"
QT_MOC_LITERAL(8, 157, 31), // "on_pushButton_supprimer_clicked"
QT_MOC_LITERAL(9, 189, 27), // "on_pushButton_trier_clicked"
QT_MOC_LITERAL(10, 217, 39), // "on_pushButton_rechercher_cine..."
QT_MOC_LITERAL(11, 257, 5), // "print"
QT_MOC_LITERAL(12, 263, 9), // "QPrinter*"
QT_MOC_LITERAL(13, 273, 7), // "printer"
QT_MOC_LITERAL(14, 281, 29), // "on_pushButton_refresh_clicked"
QT_MOC_LITERAL(15, 311, 30) // "on_pushButton_imprimer_clicked"

    },
    "cinema_page\0on_pushButton_clicked\0\0"
    "on_pushButton_ajouter_clicked\0"
    "on_pushButton_modifier_clicked\0"
    "on_pushButton_charger_clicked\0"
    "on_tableView_2_activated\0index\0"
    "on_pushButton_supprimer_clicked\0"
    "on_pushButton_trier_clicked\0"
    "on_pushButton_rechercher_cinema_clicked\0"
    "print\0QPrinter*\0printer\0"
    "on_pushButton_refresh_clicked\0"
    "on_pushButton_imprimer_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cinema_page[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cinema_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cinema_page *_t = static_cast<cinema_page *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_ajouter_clicked(); break;
        case 2: _t->on_pushButton_modifier_clicked(); break;
        case 3: _t->on_pushButton_charger_clicked(); break;
        case 4: _t->on_tableView_2_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_supprimer_clicked(); break;
        case 6: _t->on_pushButton_trier_clicked(); break;
        case 7: _t->on_pushButton_rechercher_cinema_clicked(); break;
        case 8: _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_refresh_clicked(); break;
        case 10: _t->on_pushButton_imprimer_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject cinema_page::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cinema_page.data,
      qt_meta_data_cinema_page,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cinema_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cinema_page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cinema_page.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int cinema_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
