/****************************************************************************
** Meta object code from reading C++ file 'widgetvoirinteraction.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projet/widgetvoirinteraction.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetvoirinteraction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWidgetVoirInteractionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWidgetVoirInteractionENDCLASS = QtMocHelpers::stringData(
    "WidgetVoirInteraction",
    "afficheInteractions",
    "",
    "GestionInteraction&",
    "li",
    "Contact&",
    "c",
    "afficherInteractions",
    "on_bValider_clicked",
    "on_bAnnuler_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWidgetVoirInteractionENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[22];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[3];
    char stringdata5[9];
    char stringdata6[2];
    char stringdata7[21];
    char stringdata8[20];
    char stringdata9[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWidgetVoirInteractionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWidgetVoirInteractionENDCLASS_t qt_meta_stringdata_CLASSWidgetVoirInteractionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "WidgetVoirInteraction"
        QT_MOC_LITERAL(22, 19),  // "afficheInteractions"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 19),  // "GestionInteraction&"
        QT_MOC_LITERAL(63, 2),  // "li"
        QT_MOC_LITERAL(66, 8),  // "Contact&"
        QT_MOC_LITERAL(75, 1),  // "c"
        QT_MOC_LITERAL(77, 20),  // "afficherInteractions"
        QT_MOC_LITERAL(98, 19),  // "on_bValider_clicked"
        QT_MOC_LITERAL(118, 19)   // "on_bAnnuler_clicked"
    },
    "WidgetVoirInteraction",
    "afficheInteractions",
    "",
    "GestionInteraction&",
    "li",
    "Contact&",
    "c",
    "afficherInteractions",
    "on_bValider_clicked",
    "on_bAnnuler_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWidgetVoirInteractionENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   43,    2, 0x08,    4 /* Private */,
       8,    0,   44,    2, 0x08,    5 /* Private */,
       9,    0,   45,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject WidgetVoirInteraction::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWidgetVoirInteractionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWidgetVoirInteractionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWidgetVoirInteractionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WidgetVoirInteraction, std::true_type>,
        // method 'afficheInteractions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GestionInteraction &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Contact &, std::false_type>,
        // method 'afficherInteractions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bValider_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bAnnuler_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void WidgetVoirInteraction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetVoirInteraction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->afficheInteractions((*reinterpret_cast< std::add_pointer_t<GestionInteraction&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Contact&>>(_a[2]))); break;
        case 1: _t->afficherInteractions(); break;
        case 2: _t->on_bValider_clicked(); break;
        case 3: _t->on_bAnnuler_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WidgetVoirInteraction::*)(GestionInteraction & , Contact & );
            if (_t _q_method = &WidgetVoirInteraction::afficheInteractions; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *WidgetVoirInteraction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetVoirInteraction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWidgetVoirInteractionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetVoirInteraction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WidgetVoirInteraction::afficheInteractions(GestionInteraction & _t1, Contact & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
