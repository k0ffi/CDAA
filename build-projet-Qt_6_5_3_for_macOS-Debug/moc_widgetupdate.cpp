/****************************************************************************
** Meta object code from reading C++ file 'widgetupdate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projet/widgetupdate.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetupdate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSWidgetUpdateENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWidgetUpdateENDCLASS = QtMocHelpers::stringData(
    "WidgetUpdate",
    "sigUpdateContact",
    "",
    "Contact&",
    "oldContact",
    "newContact",
    "sigActualiserListe",
    "updateContact",
    "on_bAnnuler_clicked",
    "activerBoutonValider"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWidgetUpdateENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[13];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[11];
    char stringdata5[11];
    char stringdata6[19];
    char stringdata7[14];
    char stringdata8[20];
    char stringdata9[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWidgetUpdateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWidgetUpdateENDCLASS_t qt_meta_stringdata_CLASSWidgetUpdateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "WidgetUpdate"
        QT_MOC_LITERAL(13, 16),  // "sigUpdateContact"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 8),  // "Contact&"
        QT_MOC_LITERAL(40, 10),  // "oldContact"
        QT_MOC_LITERAL(51, 10),  // "newContact"
        QT_MOC_LITERAL(62, 18),  // "sigActualiserListe"
        QT_MOC_LITERAL(81, 13),  // "updateContact"
        QT_MOC_LITERAL(95, 19),  // "on_bAnnuler_clicked"
        QT_MOC_LITERAL(115, 20)   // "activerBoutonValider"
    },
    "WidgetUpdate",
    "sigUpdateContact",
    "",
    "Contact&",
    "oldContact",
    "newContact",
    "sigActualiserListe",
    "updateContact",
    "on_bAnnuler_clicked",
    "activerBoutonValider"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWidgetUpdateENDCLASS[] = {

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
       1,    2,   44,    2, 0x06,    1 /* Public */,
       6,    0,   49,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   50,    2, 0x08,    5 /* Private */,
       8,    0,   51,    2, 0x08,    6 /* Private */,
       9,    0,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject WidgetUpdate::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWidgetUpdateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWidgetUpdateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWidgetUpdateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WidgetUpdate, std::true_type>,
        // method 'sigUpdateContact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Contact &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Contact &, std::false_type>,
        // method 'sigActualiserListe'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateContact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bAnnuler_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activerBoutonValider'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void WidgetUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetUpdate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigUpdateContact((*reinterpret_cast< std::add_pointer_t<Contact&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Contact&>>(_a[2]))); break;
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
            if (_t _q_method = &WidgetUpdate::sigUpdateContact; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WidgetUpdate::*)();
            if (_t _q_method = &WidgetUpdate::sigActualiserListe; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *WidgetUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWidgetUpdateENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
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
