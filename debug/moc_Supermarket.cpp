/****************************************************************************
** Meta object code from reading C++ file 'Supermarket.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../QT projects/Hag_Exam_Supermarket/Supermarket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Supermarket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Supermarket_t {
    const uint offsetsAndSize[30];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Supermarket_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Supermarket_t qt_meta_stringdata_Supermarket = {
    {
QT_MOC_LITERAL(0, 11), // "Supermarket"
QT_MOC_LITERAL(12, 32), // "on_checkBox_Product_stateChanged"
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 4), // "arg1"
QT_MOC_LITERAL(51, 30), // "on_checkBox_Drink_stateChanged"
QT_MOC_LITERAL(82, 30), // "on_checkBox_Dairy_stateChanged"
QT_MOC_LITERAL(113, 29), // "on_checkBox_Meat_stateChanged"
QT_MOC_LITERAL(143, 38), // "on_tableWidget_sklad_itemDoub..."
QT_MOC_LITERAL(182, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(200, 4), // "item"
QT_MOC_LITERAL(205, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(227, 40), // "on_tableWidget_sklad_2_itemDo..."
QT_MOC_LITERAL(268, 30), // "on_pushButton_addTovar_clicked"
QT_MOC_LITERAL(299, 11), // "catchObject"
QT_MOC_LITERAL(311, 1) // "a"

    },
    "Supermarket\0on_checkBox_Product_stateChanged\0"
    "\0arg1\0on_checkBox_Drink_stateChanged\0"
    "on_checkBox_Dairy_stateChanged\0"
    "on_checkBox_Meat_stateChanged\0"
    "on_tableWidget_sklad_itemDoubleClicked\0"
    "QTableWidgetItem*\0item\0on_pushButton_clicked\0"
    "on_tableWidget_sklad_2_itemDoubleClicked\0"
    "on_pushButton_addTovar_clicked\0"
    "catchObject\0a"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Supermarket[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x08,    0 /* Private */,
       4,    1,   71,    2, 0x08,    2 /* Private */,
       5,    1,   74,    2, 0x08,    4 /* Private */,
       6,    1,   77,    2, 0x08,    6 /* Private */,
       7,    1,   80,    2, 0x08,    8 /* Private */,
      10,    0,   83,    2, 0x08,   10 /* Private */,
      11,    1,   84,    2, 0x08,   11 /* Private */,
      12,    0,   87,    2, 0x08,   13 /* Private */,
      13,    1,   88,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void Supermarket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Supermarket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_checkBox_Product_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_checkBox_Drink_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_checkBox_Dairy_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_checkBox_Meat_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_tableWidget_sklad_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_tableWidget_sklad_2_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_addTovar_clicked(); break;
        case 8: _t->catchObject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Supermarket::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Supermarket.offsetsAndSize,
    qt_meta_data_Supermarket,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Supermarket_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *Supermarket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Supermarket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Supermarket.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Supermarket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
