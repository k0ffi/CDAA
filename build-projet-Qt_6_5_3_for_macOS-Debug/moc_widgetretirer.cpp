/****************************************************************************
** Meta object code from reading C++ file 'widgetretirer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projet/widgetretirer.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetretirer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSwidgetRetirerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSwidgetRetirerENDCLASS = QtMocHelpers::stringData(
    "widgetRetirer",
    "sigRemoveContact",
    "",
    "Contact&",
    "sigActualiserListe",
    "removeContact",
    "on_bAnnuler_clicked",
    "activerBoutonValider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSwidgetRetirerENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[14];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[19];
    char stringdata5[14];
    char stringdata6[20];
    char stringdata7[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSwidgetRetirerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSwidgetRetirerENDCLASS_t qt_meta_stringdata_CLASSwidgetRetirerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "widgetRetirer"
        QT_MOC_LITERAL(14, 16),  // "sigRemoveContact"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 8),  // "Contact&"
        QT_MOC_LITERAL(41, 18),  // "sigActualiserListe"
        QT_MOC_LITERAL(60, 13),  // "removeContact"
        QT_MOC_LITERAL(74, 19),  // "on_bAnnuler_clicked"
        QT_MOC_LITERAL(94, 20)   // "activerBoutonValider"
    },
    "widgetRetirer",
    "sigRemoveContact",
    "",
    "Contact&",
    "sigActualiserListe",
    "removeContact",
    "on_bAnnuler_clicked",
    "activerBoutonValider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSwidgetRetirerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    0,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   48,    2, 0x08,    4 /* Private */,
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject widgetRetirer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSwidgetRetirerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSwidgetRetirerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSwidgetRetirerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<widgetRetirer, std::true_type>,
        // method 'sigRemoveContact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Contact &, std::false_type>,
        // method 'sigActualiserListe'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeContact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bAnnuler_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activerBoutonValider'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void widgetRetirer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<widgetRetirer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigRemoveContact((*reinterpret_cast< std::add_pointer_t<Contact&>>(_a[1]))); break;
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
            if (_t _q_method = &widgetRetirer::sigRemoveContact; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (widgetRetirer::*)();
            if (_t _q_method = &widgetRetirer::sigActualiserListe; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *widgetRetirer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *widgetRetirer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSwidgetRetirerENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
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
