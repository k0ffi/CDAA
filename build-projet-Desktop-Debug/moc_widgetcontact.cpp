/****************************************************************************
** Meta object code from reading C++ file 'widgetcontact.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../projet/widgetcontact.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetcontact.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetContact_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetContact_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetContact_t qt_meta_stringdata_WidgetContact = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WidgetContact"
QT_MOC_LITERAL(1, 14, 10), // "addContact"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "Contact&"
QT_MOC_LITERAL(4, 35, 13), // "removeContact"
QT_MOC_LITERAL(5, 49, 18), // "sigActualiserListe"
QT_MOC_LITERAL(6, 68, 13), // "insertContact"
QT_MOC_LITERAL(7, 82, 19), // "on_bannuler_clicked"
QT_MOC_LITERAL(8, 102, 20) // "activerBoutonValider"

    },
    "WidgetContact\0addContact\0\0Contact&\0"
    "removeContact\0sigActualiserListe\0"
    "insertContact\0on_bannuler_clicked\0"
    "activerBoutonValider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetContact[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   51,    2, 0x08 /* Private */,
       7,    0,   52,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WidgetContact::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetContact *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addContact((*reinterpret_cast< Contact(*)>(_a[1]))); break;
        case 1: _t->removeContact((*reinterpret_cast< Contact(*)>(_a[1]))); break;
        case 2: _t->sigActualiserListe(); break;
        case 3: _t->insertContact(); break;
        case 4: _t->on_bannuler_clicked(); break;
        case 5: _t->activerBoutonValider(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WidgetContact::*)(Contact & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetContact::addContact)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WidgetContact::*)(Contact & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetContact::removeContact)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WidgetContact::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetContact::sigActualiserListe)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WidgetContact::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WidgetContact.data,
    qt_meta_data_WidgetContact,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetContact::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetContact::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetContact.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetContact::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WidgetContact::addContact(Contact & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WidgetContact::removeContact(Contact & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WidgetContact::sigActualiserListe()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
