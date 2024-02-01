/****************************************************************************
** Meta object code from reading C++ file 'widgetupdate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../projet/widgetupdate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetupdate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetUpdate_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetUpdate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetUpdate_t qt_meta_stringdata_WidgetUpdate = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WidgetUpdate"
QT_MOC_LITERAL(1, 13, 16), // "sigUpdateContact"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "Contact&"
QT_MOC_LITERAL(4, 40, 18), // "sigActualiserListe"
QT_MOC_LITERAL(5, 59, 13), // "updateContact"
QT_MOC_LITERAL(6, 73, 19), // "on_bAnnuler_clicked"
QT_MOC_LITERAL(7, 93, 20) // "activerBoutonValider"

    },
    "WidgetUpdate\0sigUpdateContact\0\0Contact&\0"
    "sigActualiserListe\0updateContact\0"
    "on_bAnnuler_clicked\0activerBoutonValider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetUpdate[] = {

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
       1,    2,   39,    2, 0x06 /* Public */,
       4,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   45,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WidgetUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetUpdate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigUpdateContact((*reinterpret_cast< Contact(*)>(_a[1])),(*reinterpret_cast< Contact(*)>(_a[2]))); break;
        case 1: _t->sigActualiserListe(); break;
        case 2: _t->updateContact(); break;
        case 3: _t->on_bAnnuler_clicked(); break;
        case 4: _t->activerBoutonValider(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WidgetUpdate::*)(Contact & , Contact & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetUpdate::sigUpdateContact)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WidgetUpdate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetUpdate::sigActualiserListe)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WidgetUpdate::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WidgetUpdate.data,
    qt_meta_data_WidgetUpdate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetUpdate.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WidgetUpdate::sigUpdateContact(Contact & _t1, Contact & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WidgetUpdate::sigActualiserListe()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
