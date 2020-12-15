/****************************************************************************
** Meta object code from reading C++ file 'mainwindow_film_consommation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../integration_f/mainwindow_film_consommation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow_film_consommation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_film_consommation_t {
    QByteArrayData data[18];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_film_consommation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_film_consommation_t qt_meta_stringdata_MainWindow_film_consommation = {
    {
QT_MOC_LITERAL(0, 0, 28), // "MainWindow_film_consommation"
QT_MOC_LITERAL(1, 29, 27), // "on_actionadd_film_triggered"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 30), // "on_actionremove_film_triggered"
QT_MOC_LITERAL(4, 89, 34), // "on_actionadd_consomation_trig..."
QT_MOC_LITERAL(5, 124, 37), // "on_actionremove_consomation_t..."
QT_MOC_LITERAL(6, 162, 19), // "on_tab_film_clicked"
QT_MOC_LITERAL(7, 182, 5), // "index"
QT_MOC_LITERAL(8, 188, 19), // "on_tab_cons_clicked"
QT_MOC_LITERAL(9, 208, 25), // "on_tab_film_doubleClicked"
QT_MOC_LITERAL(10, 234, 25), // "on_tab_cons_doubleClicked"
QT_MOC_LITERAL(11, 260, 29), // "on_recherche_cons_textChanged"
QT_MOC_LITERAL(12, 290, 4), // "arg1"
QT_MOC_LITERAL(13, 295, 29), // "on_recherche_film_textChanged"
QT_MOC_LITERAL(14, 325, 8), // "sendMail"
QT_MOC_LITERAL(15, 334, 8), // "mailSent"
QT_MOC_LITERAL(16, 343, 6), // "browse"
QT_MOC_LITERAL(17, 350, 21) // "on_pushButton_clicked"

    },
    "MainWindow_film_consommation\0"
    "on_actionadd_film_triggered\0\0"
    "on_actionremove_film_triggered\0"
    "on_actionadd_consomation_triggered\0"
    "on_actionremove_consomation_triggered\0"
    "on_tab_film_clicked\0index\0on_tab_cons_clicked\0"
    "on_tab_film_doubleClicked\0"
    "on_tab_cons_doubleClicked\0"
    "on_recherche_cons_textChanged\0arg1\0"
    "on_recherche_film_textChanged\0sendMail\0"
    "mailSent\0browse\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow_film_consommation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       8,    1,   91,    2, 0x08 /* Private */,
       9,    0,   94,    2, 0x08 /* Private */,
      10,    0,   95,    2, 0x08 /* Private */,
      11,    1,   96,    2, 0x08 /* Private */,
      13,    1,   99,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow_film_consommation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow_film_consommation *_t = static_cast<MainWindow_film_consommation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionadd_film_triggered(); break;
        case 1: _t->on_actionremove_film_triggered(); break;
        case 2: _t->on_actionadd_consomation_triggered(); break;
        case 3: _t->on_actionremove_consomation_triggered(); break;
        case 4: _t->on_tab_film_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_tab_cons_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_tab_film_doubleClicked(); break;
        case 7: _t->on_tab_cons_doubleClicked(); break;
        case 8: _t->on_recherche_cons_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_recherche_film_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->sendMail(); break;
        case 11: _t->mailSent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->browse(); break;
        case 13: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow_film_consommation::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow_film_consommation.data,
      qt_meta_data_MainWindow_film_consommation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow_film_consommation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow_film_consommation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow_film_consommation.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow_film_consommation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
