/****************************************************************************
** Meta object code from reading C++ file 'cinema_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Generation__cinema__salle/cinema_page.h"
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
struct qt_meta_stringdata_Cinema_page_t {
    QByteArrayData data[12];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cinema_page_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cinema_page_t qt_meta_stringdata_Cinema_page = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Cinema_page"
QT_MOC_LITERAL(1, 12, 41), // "on_Button_rechercher_ajout_ci..."
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 30), // "on_Button_entrer_salle_clicked"
QT_MOC_LITERAL(4, 86, 34), // "on_Button_supprimer_cinema_cl..."
QT_MOC_LITERAL(5, 121, 32), // "on_Button_afficher_liste_clicked"
QT_MOC_LITERAL(6, 154, 26), // "on_Button_modifier_clicked"
QT_MOC_LITERAL(7, 181, 28), // "on_Button_rechercher_clicked"
QT_MOC_LITERAL(8, 210, 24), // "on_tableView_3_activated"
QT_MOC_LITERAL(9, 235, 5), // "index"
QT_MOC_LITERAL(10, 241, 34), // "on_Button_afficher_liste_2_cl..."
QT_MOC_LITERAL(11, 276, 10) // "myfunction"

    },
    "Cinema_page\0on_Button_rechercher_ajout_cinema_clicked\0"
    "\0on_Button_entrer_salle_clicked\0"
    "on_Button_supprimer_cinema_clicked\0"
    "on_Button_afficher_liste_clicked\0"
    "on_Button_modifier_clicked\0"
    "on_Button_rechercher_clicked\0"
    "on_tableView_3_activated\0index\0"
    "on_Button_afficher_liste_2_clicked\0"
    "myfunction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cinema_page[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Cinema_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cinema_page *_t = static_cast<Cinema_page *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Button_rechercher_ajout_cinema_clicked(); break;
        case 1: _t->on_Button_entrer_salle_clicked(); break;
        case 2: _t->on_Button_supprimer_cinema_clicked(); break;
        case 3: _t->on_Button_afficher_liste_clicked(); break;
        case 4: _t->on_Button_modifier_clicked(); break;
        case 5: _t->on_Button_rechercher_clicked(); break;
        case 6: _t->on_tableView_3_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_Button_afficher_liste_2_clicked(); break;
        case 8: _t->myfunction(); break;
        default: ;
        }
    }
}

const QMetaObject Cinema_page::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Cinema_page.data,
      qt_meta_data_Cinema_page,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cinema_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cinema_page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cinema_page.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Cinema_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
