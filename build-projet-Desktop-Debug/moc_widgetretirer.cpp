/****************************************************************************
** Meta object code from reading C++ file 'widgetretirer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../projet/widgetretirer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetretirer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_widgetRetirer_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_widgetRetirer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_widgetRetirer_t qt_meta_stringdata_widgetRetirer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "widgetRetirer"
QT_MOC_LITERAL(1, 14, 16), // "sigRemoveContact"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "Contact&"
QT_MOC_LITERAL(4, 41, 18), // "sigActualiserListe"
QT_MOC_LITERAL(5, 60, 13), // "removeContact"
QT_MOC_LITERAL(6, 74, 19), // "on_bAnnuler_clicked"
QT_MOC_LITERAL(7, 94, 20) // "activerBoutonValider"

    },
    "widgetRetirer\0sigRemoveContact\0\0"
    "Contact&\0sigActualiserListe\0removeContact\0"
    "on_bAnnuler_clicked\0activerBoutonValider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_widgetRetirer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void widgetRetirer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<widgetRetirer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigRemoveContact((*reinterpret_cast< Contact(*)>(_a[1]))); break;
        case 1: _t->sigActualiserListe(); break;
        case 2: _t->removeContact(); break;
        case 3: _t->on_bAnnuler_clicked(); break;
        case 4: _t->activerBoutonValider(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (widgetRetirer::*)(Contact & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&widgetRetirer::sigRemoveContact)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (widgetRetirer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&widgetRetirer::sigActualiserListe)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject widgetRetirer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_widgetRetirer.data,
    qt_meta_data_widgetRetirer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *widgetRetirer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *widgetRetirer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_widgetRetirer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int widgetRetirer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void widgetRetirer::sigRemoveContact(Contact & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void widgetRetirer::sigActualiserListe()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
