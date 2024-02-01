/**
 * @file mainwindow.h
 * @brief Déclaration de la classe MainWindow.
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "widgetcontact.h"
#include "qsqldata.h"
#include "widgetretirer.h"
#include "widgetupdate.h"
#include "widgetinteraction.h"
#include "widgetvoirinteraction.h"
#include <QJsonDocument>
#include <QFile>


namespace Ui {
class MainWindow;
}

/**
 * @brief La classe MainWindow représente la fenêtre principale de l'application.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur de la classe MainWindow.
     * @param parent Pointeur vers le widget parent.
     */
    explicit MainWindow(QWidget *parent = nullptr);

    /**
     * @brief Destructeur de la classe MainWindow.
     */
    ~MainWindow();

    /**
     * @brief Remplit la liste des contacts dans l'interface.
     * @param lc GestionContacts contenant la liste des contacts à afficher.
     */
    void remplirListe(GestionContacts &);

    /**
    * @brief Convertit la classe MainWindow en un objet JSON.
    * @return Objet JSON représentant la classe MainWindow.
    */
    QJsonObject toJsonObject() const ;

    /**
    * @brief Convertit la classe MainWindow en un objet JSON.
    * @return Objet JSON représentant la classe MainWindow.
    */
    bool exportToJson(const QString & );


private slots:

    /**
    * @brief Slot appelé lorsqu'on clique sur le bouton de la barre "Ajouter un contact".
    */
    void on_addContact_triggered();
    /**
    * @brief Slot appelé lorsqu'on clique sur le bouton de la barre "Retirer un contact".
    */
    void on_removeContact_triggered();
    /**
    * @brief Slot appelé lorsqu'on clique sur le bouton de la barre "Mettre à jour un contact".
    */
    void on_updateContact_triggered();
    /**
    * @brief Slot appelé lorsqu'on clique sur le bouton de la barre "Ajouter une interaction".
    */
    void on_addInteraction_triggered();
    /**
    * @brief Slot appelé lorsqu'on clique sur le bouton de la barre "Voir les interactions".
    */
    void on_interactionByContact_triggered();
    /**
    * @brief Slot appelé lorsqu'on clique sur le bouton "Valider'.
    */
    void on_bValider_clicked();
    /**
    * @brief Remplit les informations du contact sélectionné dans l'interface.
    */
    void remplirInfos();
    /**
    * @brief Slot appelé lorsqu'on clique sur le bouton "Voir le nombre de contacts".
    */
    void on_bVoirNbContacts_clicked();
    /**
    * @brief Slot appelé pour actualiser la liste des contacts.
    */
    void actualiserListe();
    /**
    * @brief Slot appelé lorsqu'on clique sur le bouton "Voir les interactions".
    */
    void on_bVoirInteractions_clicked();
    /**
    * @brief Slot appelé lorsqu'on clique sur le bouton "Voir les todos".
    */
    void on_bVoirTodos_clicked();
    /**
    * @brief Slot appelé lorsqu'on clique sur le bouton "Quitter".
    */
    void on_bQuitter_clicked();

signals:

    void afficheContacts(GestionContacts &);
    void affiche(GestionInteraction &, Contact &);
    void sigRemplirInfosContact();
    void sigInfosContact(Contact &);
    void sigNbContacts(int &);
    void sigInteractionEntre2Dates(std::string &, std::string &, GestionInteraction &);
    void sigAfficheTodos(Contact &, std::list<Todo> &);

private:
    Ui::MainWindow *ui;
    WidgetContact wc;
    widgetRetirer wr;
    WidgetUpdate wu;
    WidgetInteraction wi;
    WidgetVoirInteraction wvi;
    QSQLData sql;

    GestionContacts lc;
    GestionInteraction li;
    std::list<Todo> lt;
    std::list<AssociationInteractionTodo> lassociation;
};

#endif // MAINWINDOW_H
