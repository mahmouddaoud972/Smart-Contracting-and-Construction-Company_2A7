/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[402];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "myfunction"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 21), // "on_pb_ajouter_clicked"
QT_MOC_LITERAL(4, 45, 22), // "on_pb_afficher_clicked"
QT_MOC_LITERAL(5, 68, 22), // "on_tv_afficher_clicked"
QT_MOC_LITERAL(6, 91, 5), // "index"
QT_MOC_LITERAL(7, 97, 23), // "on_pb_supprimer_clicked"
QT_MOC_LITERAL(8, 121, 22), // "on_pb_modifier_clicked"
QT_MOC_LITERAL(9, 144, 24), // "on_tv_afficher_activated"
QT_MOC_LITERAL(10, 169, 34), // "on_trecherchec_currentIndexCh..."
QT_MOC_LITERAL(11, 204, 27), // "on_trecherchelt_textChanged"
QT_MOC_LITERAL(12, 232, 4), // "arg1"
QT_MOC_LITERAL(13, 237, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(14, 259, 24), // "on_recherche_textChanged"
QT_MOC_LITERAL(15, 284, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(16, 306, 18), // "on_chatbox_clicked"
QT_MOC_LITERAL(17, 325, 14), // "on_pdf_clicked"
QT_MOC_LITERAL(18, 340, 31), // "on_le_salaire_e_editingFinished"
QT_MOC_LITERAL(19, 372, 24), // "on_label_7_linkActivated"
QT_MOC_LITERAL(20, 397, 4) // "link"

    },
    "MainWindow\0myfunction\0\0on_pb_ajouter_clicked\0"
    "on_pb_afficher_clicked\0on_tv_afficher_clicked\0"
    "index\0on_pb_supprimer_clicked\0"
    "on_pb_modifier_clicked\0on_tv_afficher_activated\0"
    "on_trecherchec_currentIndexChanged\0"
    "on_trecherchelt_textChanged\0arg1\0"
    "on_toolButton_clicked\0on_recherche_textChanged\0"
    "on_pushButton_clicked\0on_chatbox_clicked\0"
    "on_pdf_clicked\0on_le_salaire_e_editingFinished\0"
    "on_label_7_linkActivated\0link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    1,   97,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    1,  102,    2, 0x08 /* Private */,
      10,    1,  105,    2, 0x08 /* Private */,
      11,    1,  108,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    1,  112,    2, 0x08 /* Private */,
      15,    0,  115,    2, 0x08 /* Private */,
      16,    0,  116,    2, 0x08 /* Private */,
      17,    0,  117,    2, 0x08 /* Private */,
      18,    0,  118,    2, 0x08 /* Private */,
      19,    1,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->myfunction(); break;
        case 1: _t->on_pb_ajouter_clicked(); break;
        case 2: _t->on_pb_afficher_clicked(); break;
        case 3: _t->on_tv_afficher_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_pb_supprimer_clicked(); break;
        case 5: _t->on_pb_modifier_clicked(); break;
        case 6: _t->on_tv_afficher_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_trecherchec_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_trecherchelt_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_toolButton_clicked(); break;
        case 10: _t->on_recherche_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        //case 11: _t->on_pushButton_clicked(); break;
        case 12: _t->on_chatbox_clicked(); break;
        case 13: _t->on_pdf_clicked(); break;
       // case 14: _t->on_le_salaire_e_editingFinished(); break;
        //case 15: _t->on_label_7_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
