/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../projet/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "afficheContacts",
    "",
    "GestionContacts&",
    "affiche",
    "GestionInteraction&",
    "Contact&",
    "sigRemplirInfosContact",
    "sigInfosContact",
    "sigNbContacts",
    "int&",
    "sigInteractionEntre2Dates",
    "std::string&",
    "sigAfficheTodos",
    "std::list<Todo>&",
    "on_addContact_triggered",
    "on_removeContact_triggered",
    "on_updateContact_triggered",
    "on_addInteraction_triggered",
    "on_interactionByContact_triggered",
    "on_bValider_clicked",
    "remplirInfos",
    "on_bVoirNbContacts_clicked",
    "actualiserListe",
    "on_bVoirInteractions_clicked",
    "on_bVoirTodos_clicked",
    "on_bQuitter_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[54];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[8];
    char stringdata5[20];
    char stringdata6[9];
    char stringdata7[23];
    char stringdata8[16];
    char stringdata9[14];
    char stringdata10[5];
    char stringdata11[26];
    char stringdata12[13];
    char stringdata13[16];
    char stringdata14[17];
    char stringdata15[24];
    char stringdata16[27];
    char stringdata17[27];
    char stringdata18[28];
    char stringdata19[34];
    char stringdata20[20];
    char stringdata21[13];
    char stringdata22[27];
    char stringdata23[16];
    char stringdata24[29];
    char stringdata25[22];
    char stringdata26[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "afficheContacts"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 16),  // "GestionContacts&"
        QT_MOC_LITERAL(45, 7),  // "affiche"
        QT_MOC_LITERAL(53, 19),  // "GestionInteraction&"
        QT_MOC_LITERAL(73, 8),  // "Contact&"
        QT_MOC_LITERAL(82, 22),  // "sigRemplirInfosContact"
        QT_MOC_LITERAL(105, 15),  // "sigInfosContact"
        QT_MOC_LITERAL(121, 13),  // "sigNbContacts"
        QT_MOC_LITERAL(135, 4),  // "int&"
        QT_MOC_LITERAL(140, 25),  // "sigInteractionEntre2Dates"
        QT_MOC_LITERAL(166, 12),  // "std::string&"
        QT_MOC_LITERAL(179, 15),  // "sigAfficheTodos"
        QT_MOC_LITERAL(195, 16),  // "std::list<Todo>&"
        QT_MOC_LITERAL(212, 23),  // "on_addContact_triggered"
        QT_MOC_LITERAL(236, 26),  // "on_removeContact_triggered"
        QT_MOC_LITERAL(263, 26),  // "on_updateContact_triggered"
        QT_MOC_LITERAL(290, 27),  // "on_addInteraction_triggered"
        QT_MOC_LITERAL(318, 33),  // "on_interactionByContact_trigg..."
        QT_MOC_LITERAL(352, 19),  // "on_bValider_clicked"
        QT_MOC_LITERAL(372, 12),  // "remplirInfos"
        QT_MOC_LITERAL(385, 26),  // "on_bVoirNbContacts_clicked"
        QT_MOC_LITERAL(412, 15),  // "actualiserListe"
        QT_MOC_LITERAL(428, 28),  // "on_bVoirInteractions_clicked"
        QT_MOC_LITERAL(457, 21),  // "on_bVoirTodos_clicked"
        QT_MOC_LITERAL(479, 19)   // "on_bQuitter_clicked"
    },
    "MainWindow",
    "afficheContacts",
    "",
    "GestionContacts&",
    "affiche",
    "GestionInteraction&",
    "Contact&",
    "sigRemplirInfosContact",
    "sigInfosContact",
    "sigNbContacts",
    "int&",
    "sigInteractionEntre2Dates",
    "std::string&",
    "sigAfficheTodos",
    "std::list<Todo>&",
    "on_addContact_triggered",
    "on_removeContact_triggered",
    "on_updateContact_triggered",
    "on_addInteraction_triggered",
    "on_interactionByContact_triggered",
    "on_bValider_clicked",
    "remplirInfos",
    "on_bVoirNbContacts_clicked",
    "actualiserListe",
    "on_bVoirInteractions_clicked",
    "on_bVoirTodos_clicked",
    "on_bQuitter_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x06,    1 /* Public */,
       4,    2,  131,    2, 0x06,    3 /* Public */,
       7,    0,  136,    2, 0x06,    6 /* Public */,
       8,    1,  137,    2, 0x06,    7 /* Public */,
       9,    1,  140,    2, 0x06,    9 /* Public */,
      11,    3,  143,    2, 0x06,   11 /* Public */,
      13,    2,  150,    2, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  155,    2, 0x08,   18 /* Private */,
      16,    0,  156,    2, 0x08,   19 /* Private */,
      17,    0,  157,    2, 0x08,   20 /* Private */,
      18,    0,  158,    2, 0x08,   21 /* Private */,
      19,    0,  159,    2, 0x08,   22 /* Private */,
      20,    0,  160,    2, 0x08,   23 /* Private */,
      21,    0,  161,    2, 0x08,   24 /* Private */,
      22,    0,  162,    2, 0x08,   25 /* Private */,
      23,    0,  163,    2, 0x08,   26 /* Private */,
      24,    0,  164,    2, 0x08,   27 /* Private */,
      25,    0,  165,    2, 0x08,   28 /* Private */,
      26,    0,  166,    2, 0x08,   29 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 5,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 14,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'afficheContacts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GestionContacts &, std::false_type>,
        // method 'affiche'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GestionInteraction &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Contact &, std::false_type>,
        // method 'sigRemplirInfosContact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sigInfosContact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Contact &, std::false_type>,
        // method 'sigNbContacts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        // method 'sigInteractionEntre2Dates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<GestionInteraction &, std::false_type>,
        // method 'sigAfficheTodos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Contact &, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::list<Todo> &, std::false_type>,
        // method 'on_addContact_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeContact_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateContact_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addInteraction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_interactionByContact_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bValider_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'remplirInfos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bVoirNbContacts_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actualiserListe'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bVoirInteractions_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bVoirTodos_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bQuitter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->afficheContacts((*reinterpret_cast< std::add_pointer_t<GestionContacts&>>(_a[1]))); break;
        case 1: _t->affiche((*reinterpret_cast< std::add_pointer_t<GestionInteraction&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Contact&>>(_a[2]))); break;
        case 2: _t->sigRemplirInfosContact(); break;
        case 3: _t->sigInfosContact((*reinterpret_cast< std::add_pointer_t<Contact&>>(_a[1]))); break;
        case 4: _t->sigNbContacts((*reinterpret_cast< std::add_pointer_t<int&>>(_a[1]))); break;
        case 5: _t->sigInteractionEntre2Dates((*reinterpret_cast< std::add_pointer_t<std::string&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<GestionInteraction&>>(_a[3]))); break;
        case 6: _t->sigAfficheTodos((*reinterpret_cast< std::add_pointer_t<Contact&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::list<Todo>&>>(_a[2]))); break;
        case 7: _t->on_addContact_triggered(); break;
        case 8: _t->on_removeContact_triggered(); break;
        case 9: _t->on_updateContact_triggered(); break;
        case 10: _t->on_addInteraction_triggered(); break;
        case 11: _t->on_interactionByContact_triggered(); break;
        case 12: _t->on_bValider_clicked(); break;
        case 13: _t->remplirInfos(); break;
        case 14: _t->on_bVoirNbContacts_clicked(); break;
        case 15: _t->actualiserListe(); break;
        case 16: _t->on_bVoirInteractions_clicked(); break;
        case 17: _t->on_bVoirTodos_clicked(); break;
        case 18: _t->on_bQuitter_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(GestionContacts & );
            if (_t _q_method = &MainWindow::afficheContacts; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(GestionInteraction & , Contact & );
            if (_t _q_method = &MainWindow::affiche; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::sigRemplirInfosContact; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(Contact & );
            if (_t _q_method = &MainWindow::sigInfosContact; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int & );
            if (_t _q_method = &MainWindow::sigNbContacts; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(std::string & , std::string & , GestionInteraction & );
            if (_t _q_method = &MainWindow::sigInteractionEntre2Dates; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(Contact & , std::list<Todo> & );
            if (_t _q_method = &MainWindow::sigAfficheTodos; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::afficheContacts(GestionContacts & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::affiche(GestionInteraction & _t1, Contact & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::sigRemplirInfosContact()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::sigInfosContact(Contact & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::sigNbContacts(int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::sigInteractionEntre2Dates(std::string & _t1, std::string & _t2, GestionInteraction & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::sigAfficheTodos(Contact & _t1, std::list<Todo> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
