/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *addContact;
    QAction *removeContact;
    QAction *updateContact;
    QAction *addInteraction;
    QAction *interactionByContact;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *listContacts;
    QPushButton *bValider;
    QPlainTextEdit *textContact;
    QLabel *Photo;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bVoirNbContacts;
    QLabel *nbContacts;
    QHBoxLayout *horizontalLayout_3;
    QDateEdit *dateDebInteraction;
    QDateEdit *dateFinInteraction;
    QPushButton *bVoirInteractions;
    QPlainTextEdit *textInteraction;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *listContacts_2;
    QPushButton *bVoirTodos;
    QPlainTextEdit *textTodo;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *bQuitter;
    QMenuBar *menubar;
    QMenu *menuContact;
    QMenu *menuInteraction;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1500, 1200);
        MainWindow->setMinimumSize(QSize(500, 100));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        addContact = new QAction(MainWindow);
        addContact->setObjectName("addContact");
        removeContact = new QAction(MainWindow);
        removeContact->setObjectName("removeContact");
        updateContact = new QAction(MainWindow);
        updateContact->setObjectName("updateContact");
        addInteraction = new QAction(MainWindow);
        addInteraction->setObjectName("addInteraction");
        interactionByContact = new QAction(MainWindow);
        interactionByContact->setObjectName("interactionByContact");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-2, 3, 1501, 851));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        listContacts = new QComboBox(verticalLayoutWidget);
        listContacts->setObjectName("listContacts");

        horizontalLayout->addWidget(listContacts);

        bValider = new QPushButton(verticalLayoutWidget);
        bValider->setObjectName("bValider");

        horizontalLayout->addWidget(bValider);

        textContact = new QPlainTextEdit(verticalLayoutWidget);
        textContact->setObjectName("textContact");
        textContact->setMinimumSize(QSize(250, 0));

        horizontalLayout->addWidget(textContact);

        Photo = new QLabel(verticalLayoutWidget);
        Photo->setObjectName("Photo");
        Photo->setMinimumSize(QSize(400, 0));

        horizontalLayout->addWidget(Photo);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        bVoirNbContacts = new QPushButton(verticalLayoutWidget);
        bVoirNbContacts->setObjectName("bVoirNbContacts");

        horizontalLayout_4->addWidget(bVoirNbContacts);

        nbContacts = new QLabel(verticalLayoutWidget);
        nbContacts->setObjectName("nbContacts");

        horizontalLayout_4->addWidget(nbContacts);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        dateDebInteraction = new QDateEdit(verticalLayoutWidget);
        dateDebInteraction->setObjectName("dateDebInteraction");

        horizontalLayout_3->addWidget(dateDebInteraction);

        dateFinInteraction = new QDateEdit(verticalLayoutWidget);
        dateFinInteraction->setObjectName("dateFinInteraction");

        horizontalLayout_3->addWidget(dateFinInteraction);

        bVoirInteractions = new QPushButton(verticalLayoutWidget);
        bVoirInteractions->setObjectName("bVoirInteractions");

        horizontalLayout_3->addWidget(bVoirInteractions);

        textInteraction = new QPlainTextEdit(verticalLayoutWidget);
        textInteraction->setObjectName("textInteraction");
        textInteraction->setMinimumSize(QSize(300, 0));

        horizontalLayout_3->addWidget(textInteraction);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        listContacts_2 = new QComboBox(verticalLayoutWidget);
        listContacts_2->setObjectName("listContacts_2");

        horizontalLayout_5->addWidget(listContacts_2);

        bVoirTodos = new QPushButton(verticalLayoutWidget);
        bVoirTodos->setObjectName("bVoirTodos");

        horizontalLayout_5->addWidget(bVoirTodos);

        textTodo = new QPlainTextEdit(verticalLayoutWidget);
        textTodo->setObjectName("textTodo");
        textTodo->setMinimumSize(QSize(300, 0));

        horizontalLayout_5->addWidget(textTodo);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(-1, 989, 1501, 181));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        bQuitter = new QPushButton(verticalLayoutWidget_2);
        bQuitter->setObjectName("bQuitter");

        verticalLayout_2->addWidget(bQuitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1500, 36));
        menuContact = new QMenu(menubar);
        menuContact->setObjectName("menuContact");
        menuInteraction = new QMenu(menubar);
        menuInteraction->setObjectName("menuInteraction");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuContact->menuAction());
        menubar->addAction(menuInteraction->menuAction());
        menuContact->addAction(addContact);
        menuContact->addAction(removeContact);
        menuContact->addAction(updateContact);
        menuInteraction->addAction(addInteraction);
        menuInteraction->addAction(interactionByContact);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addContact->setText(QCoreApplication::translate("MainWindow", "Ajouter un Contact", nullptr));
        removeContact->setText(QCoreApplication::translate("MainWindow", "Supprimer un Contact", nullptr));
        updateContact->setText(QCoreApplication::translate("MainWindow", "Mettre \303\240 jour un Contact", nullptr));
        addInteraction->setText(QCoreApplication::translate("MainWindow", "Ajouter une Interaction", nullptr));
        interactionByContact->setText(QCoreApplication::translate("MainWindow", "Voir les Interactions d'un Contact", nullptr));
        bValider->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        Photo->setText(QString());
        bVoirNbContacts->setText(QCoreApplication::translate("MainWindow", "Voir le nombre de Contacts", nullptr));
        nbContacts->setText(QString());
        bVoirInteractions->setText(QCoreApplication::translate("MainWindow", "Voir les Interactions", nullptr));
        bVoirTodos->setText(QCoreApplication::translate("MainWindow", "Voir les Todos", nullptr));
        bQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter l'application", nullptr));
        menuContact->setTitle(QCoreApplication::translate("MainWindow", "Contact", nullptr));
        menuInteraction->setTitle(QCoreApplication::translate("MainWindow", "Interaction", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
