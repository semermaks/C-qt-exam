/****************************************************************************
** Meta object code from reading C++ file 'addtovar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../QT projects/Hag_Exam_Supermarket/addtovar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addtovar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addTovar_t {
    const uint offsetsAndSize[16];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_addTovar_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_addTovar_t qt_meta_stringdata_addTovar = {
    {
QT_MOC_LITERAL(0, 8), // "addTovar"
QT_MOC_LITERAL(9, 10), // "sendString"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 30), // "on_radioButton_Product_clicked"
QT_MOC_LITERAL(52, 28), // "on_radioButton_Drink_clicked"
QT_MOC_LITERAL(81, 28), // "on_radioButton_Diary_clicked"
QT_MOC_LITERAL(110, 27), // "on_radioButton_Meat_clicked"
QT_MOC_LITERAL(138, 21) // "on_pushButton_clicked"

    },
    "addTovar\0sendString\0\0"
    "on_radioButton_Product_clicked\0"
    "on_radioButton_Drink_clicked\0"
    "on_radioButton_Diary_clicked\0"
    "on_radioButton_Meat_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addTovar[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   53,    2, 0x08,    2 /* Private */,
       4,    0,   54,    2, 0x08,    3 /* Private */,
       5,    0,   55,    2, 0x08,    4 /* Private */,
       6,    0,   56,    2, 0x08,    5 /* Private */,
       7,    0,   57,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void addTovar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<addTovar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_radioButton_Product_clicked(); break;
        case 2: _t->on_radioButton_Drink_clicked(); break;
        case 3: _t->on_radioButton_Diary_clicked(); break;
        case 4: _t->on_radioButton_Meat_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (addTovar::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&addTovar::sendString)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject addTovar::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_addTovar.offsetsAndSize,
    qt_meta_data_addTovar,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_addTovar_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *addTovar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addTovar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addTovar.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int addTovar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void addTovar::sendString(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
