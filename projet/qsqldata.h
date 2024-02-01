/**
 * @file qsqldata.h
 * @brief Déclaration de la classe QSQLData.
 */
#ifndef QSQLDATA_H
#define QSQLDATA_H

#include <QObject>
#include <QVariant>
#include <QSqlDatabase>
#include "gestioncontacts.h"
#include "gestioninteraction.h"
#include "todo.h"
#include "associationinteractiontodo.h"
#include <QDebug>
#include <QSqlQuery>

/**
 * @brief La classe QSQLData gère l'accès à la base de données SQLite.
 */
class QSQLData : public QObject
{
    Q_OBJECT

private:
    QSqlDatabase db;    /**< Objet de la base de données SQLite. */
    bool dbOuverte;     /**< Indicateur de l'état de la connexion à la base de données. */

    /**
     * @brief Connecte à la base de données SQLite.
     * @return True si la connexion réussit, sinon false.
     */
    bool connectDB();

    /**
     * @brief Ferme la connexion à la base de données.
     */
    void closeDB();

    /**
     * @brief Vérifie si la base de données est ouverte.
     * @param[out] b Valeur booléenne indiquant si la base de données est ouverte.
     */
    void isDBopen(bool&);

    /**
     * @brief Obtient l'ID d'un contact dans la base de données.
     * @param c L'objet Contact.
     * @return L'ID du contact.
     */
    int getIdContact(const Contact &)const;

    /**
     * @brief Obtient l'ID d'une interaction dans la base de données.
     * @param i L'objet Interaction.
     * @return L'ID de l'interaction.
     */
    int getIdInteraction(const Interaction & ) const;

    /**
     * @brief Obtient l'ID d'une tâche (Todo) dans la base de données.
     * @param t L'objet Todo.
     * @return L'ID de la tâche.
     */
    int getIdTodo(const Todo & ) const;

    /**
     * @brief Récupère tous les contacts de la base de données.
     * @param[out] gc GestionContacts pour stocker les contacts.
     */
    void getAllContacts(GestionContacts &) const;

    /**
     * @brief Récupère toutes les interactions d'un contact dans la base de données.
     * @param[out] gi GestionInteraction pour stocker les interactions.
     * @param c L'objet Contact.
     */
    void getAllInteractions(GestionInteraction&, const Contact &) const;

    /**
     * @brief Crée un nouveau contact dans la base de données.
     * @param c L'objet Contact à créer.
     * @return True si la création réussit, sinon false.
     */
    bool createContact(const Contact &) const;

    /**
     * @brief Supprime un contact de la base de données.
     * @param c L'objet Contact à supprimer.
     * @return True si la suppression réussit, sinon false.
     */
    bool deleteContact(const Contact &) const;

    /**
     * @brief Met à jour les informations d'un contact dans la base de données.
     * @param oldC Ancien objet Contact.
     * @param newC Nouvel objet Contact.
     * @return True si la mise à jour réussit, sinon false.
     */
    bool updateContact(const Contact &, const Contact&) const;

    /**
     * @brief Crée une interaction associée à un contact dans la base de données.
     * @param i L'objet Interaction à créer.
     * @param c L'objet Contact associé.
     * @return True si la création réussit, sinon false.
     */
    bool createInteractionToContact(const Interaction &, const Contact &) const;

    /**
     * @brief Crée une nouvelle tâche (Todo) dans la base de données.
     * @param t L'objet Todo à créer.
     * @return True si la création réussit, sinon false.
     */
    bool createTodo(const Todo &) const;

    /**
     * @brief Crée une association entre une interaction et une tâche dans la base de données.
     * @param ait L'objet AssociationInteractionTodo à créer.
     * @return True si la création réussit, sinon false.
     */
    bool createAIT(AssociationInteractionTodo &) const;

    /**
     * @brief Récupère les informations d'un contact de la base de données.
     * @param c L'objet Contact à remplir avec les informations.
     */
    void getContact(Contact &) const;

    /**
     * @brief Récupère le nombre total de contacts dans la base de données.
     * @param[out] nombreContacts Le nombre total de contacts.
     * @return True si la récupération réussit, sinon false.
     */
    bool getNombreContacts(int &) const;

    /**
     * @brief Récupère les interactions entre deux dates de la base de données.
     * @param dateDeb Date de début sous forme de chaîne.
     * @param dateFin Date de fin sous forme de chaîne.
     * @param[out] li GestionInteraction pour stocker les interactions.
     * @return True si la récupération réussit, sinon false.
     */
    bool getInteractionsEntre2Dates(const std::string &dateDeb, const std::string &dateFin, GestionInteraction &) const;

    /**
     * @brief Récupère toutes les tâches (Todo) associées à un contact dans la base de données.
     * @param c L'objet Contact associé.
     * @param[out] lt Liste de Todo pour stocker les tâches.
     * @return True si la récupération réussit, sinon false.
     */
    bool getTodos(Contact &, std::list<Todo>&) const;

public:
    /**
     * @brief Constructeur de la classe QSQLData.
     * @param parent Le QObject parent.
     */
    explicit QSQLData(QObject *parent = nullptr);

    /**
     * @brief Destructeur de la classe QSQLData.
     */
    ~QSQLData();

public slots:
    /**
     * @brief Crée un nouveau contact dans la base de données.
     * @param c L'objet Contact à créer.
     */
    void bddCreate(Contact&);

    /**
     * @brief Supprime un contact de la base de données.
     * @param c L'objet Contact à supprimer.
     */
    void bddDelete(Contact&);

    /**
     * @brief Met à jour les informations d'un contact dans la base de données.
     * @param c Ancien objet Contact.
     * @param q Nouvel objet Contact.
     */
    void bddUpdate(Contact&, Contact&);

    /**
     * @brief Récupère tous les contacts de la base de données.
     * @param[out] lc GestionContacts pour stocker les contacts.
     */
    void bddGetContacts(GestionContacts &);

    /**
     * @brief Récupère l'ID d'un contact de la base de données.
     * @param c L'objet Contact pour lequel récupérer l'ID.
     */
    void bddGetIdContact(Contact &);

    /**
     * @brief Crée une interaction associée à un contact dans la base de données.
     * @param i L'objet Interaction à créer.
     * @param c L'objet Contact associé.
     */
    void bddCreateInteractionToContact(Interaction & ,Contact & );

    /**
     * @brief Récupère les interactions entre deux dates de la base de données.
     * @param dateDeb Date de début sous forme de chaîne.
     * @param dateFin Date de fin sous forme de chaîne.
     * @param[out] li GestionInteraction pour stocker les interactions.
     */
    void bddInteractionsEntre2Dates(std::string & , std::string & , GestionInteraction & );

    /**
     * @brief Récupère toutes les interactions d'un contact de la base de données.
     * @param[out] li GestionInteraction pour stocker les interactions.
     * @param c L'objet Contact associé.
     */
    void bddGetInteractions(GestionInteraction &, Contact &);

    /**
     * @brief Crée une nouvelle tâche (Todo) dans la base de données.
     * @param t L'objet Todo à créer.
     */
    void bddCreateTodo(Todo &);

    /**
     * @brief Crée une association entre une interaction et une tâche dans la base de données.
     * @param ait L'objet AssociationInteractionTodo à créer.
     */
    void bddCreateAIT(AssociationInteractionTodo &);

    /**
     * @brief Récupère les informations d'un contact de la base de données.
     * @param c L'objet Contact à remplir avec les informations.
     */
    void bddInfosContact(Contact &);

    /**
     * @brief Vérifie si la base de données est ouverte.
     * @param[out] b Valeur booléenne indiquant si la base de données est ouverte.
     */
    void isOpen(bool &);

    /**
     * @brief Récupère le nombre total de contacts dans la base de données.
     * @param[out] nombreContacts Le nombre total de contacts.
     */
    void bddNombreContacts(int &);

    /**
     * @brief Récupère toutes les tâches (Todo) associées à un contact de la base de données.
     * @param c L'objet Contact associé.
     * @param[out] lt Liste de Todo pour stocker les tâches.
     */
    void bddGetTodos(Contact & , std::list<Todo> & );
};

#endif // QSQLDATA_H
