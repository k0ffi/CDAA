/****************************************************************************
** Meta object code from reading C++ file 'widgetinteraction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../projet/widgetinteraction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetinteraction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetInteraction_t {
    QByteArrayData data[17];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetInteraction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetInteraction_t qt_meta_stringdata_WidgetInteraction = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WidgetInteraction"
QT_MOC_LITERAL(1, 18, 23), // "addInteractionToContact"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "Interaction&"
QT_MOC_LITERAL(4, 56, 8), // "Contact&"
QT_MOC_LITERAL(5, 65, 7), // "addTodo"
QT_MOC_LITERAL(6, 73, 5), // "Todo&"
QT_MOC_LITERAL(7, 79, 1), // "t"
QT_MOC_LITERAL(8, 81, 7), // "sigTodo"
QT_MOC_LITERAL(9, 89, 12), // "std::string&"
QT_MOC_LITERAL(10, 102, 6), // "addAIT"
QT_MOC_LITERAL(11, 109, 27), // "AssociationInteractionTodo&"
QT_MOC_LITERAL(12, 137, 17), // "insertInteraction"
QT_MOC_LITERAL(13, 155, 19), // "on_bAnnuler_clicked"
QT_MOC_LITERAL(14, 175, 19), // "on_bValider_clicked"
QT_MOC_LITERAL(15, 195, 11), // "entreeTexte"
QT_MOC_LITERAL(16, 207, 20) // "activerBoutonValider"

    },
    "WidgetInteraction\0addInteractionToContact\0"
    "\0Interaction&\0Contact&\0addTodo\0Todo&\0"
    "t\0sigTodo\0std::string&\0addAIT\0"
    "AssociationInteractionTodo&\0"
    "insertInteraction\0on_bAnnuler_clicked\0"
    "on_bValider_clicked\0entreeTexte\0"
    "activerBoutonValider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetInteraction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,
       8,    2,   67,    2, 0x06 /* Public */,
      10,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,   75,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,
      15,    0,   82,    2, 0x08 /* Private */,
      16,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,    2,    2,
    QMetaType::Void, 0x80000000 | 11,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WidgetInteraction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetInteraction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addInteractionToContact((*reinterpret_cast< Interaction(*)>(_a[1])),(*reinterpret_cast< Contact(*)>(_a[2]))); break;
        case 1: _t->addTodo((*reinterpret_cast< Todo(*)>(_a[1]))); break;
        case 2: _t->sigTodo((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 3: _t->addAIT((*reinterpret_cast< AssociationInteractionTodo(*)>(_a[1]))); break;
        case 4: _t->insertInteraction((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 5: _t->on_bAnnuler_clicked(); break;
        case 6: _t->on_bValider_clicked(); break;
        case 7: _t->entreeTexte(); break;
        case 8: _t->activerBoutonValider(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WidgetInteraction::*)(Interaction & , Contact & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetInteraction::addInteractionToContact)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WidgetInteraction::*)(Todo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetInteraction::addTodo)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WidgetInteraction::*)(std::string & , std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetInteraction::sigTodo)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WidgetInteraction::*)(AssociationInteractionTodo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetInteraction::addAIT)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WidgetInteraction::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WidgetInteraction.data,
    qt_meta_data_WidgetInteraction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetInteraction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetInteraction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetInteraction.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetInteraction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WidgetInteraction::addInteractionToContact(Interaction & _t1, Contact & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WidgetInteraction::addTodo(Todo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WidgetInteraction::sigTodo(std::string & _t1, std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WidgetInteraction::addAIT(AssociationInteractionTodo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
