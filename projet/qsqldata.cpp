/**
 * @file qsqldata.cpp
 * @brief Implémentation des méthodes de la classe QSQLData.cpp.
 */
#include "qsqldata.h"
#include <QSqlError>
#include <QDate>

/**
 * @brief Constructeur de la classe QSQLData.
 * @param parent Objet parent.
 */
QSQLData::QSQLData(QObject *parent):QObject(parent)
{
    dbOuverte = false;
    connectDB();
}
/**
 * @brief Destructeur de la classe QSQLData.
 */
QSQLData::~QSQLData()
{
closeDB();
}

//SLOTS
/**
 * @brief Ajoute un contact à la base de données.
 * @param c Contact à ajouter.
 */
void QSQLData::bddCreate(Contact & c)
{
    createContact(c);
}
/**
 * @brief Supprime un contact de la base de données.
 * @param c Contact à supprimer.
 */
void QSQLData::bddDelete(Contact & c)
{
    deleteContact(c);
}
/**
 * @brief Met à jour un contact dans la base de données.
 * @param c Ancien contact.
 * @param q Nouveau contact.
 */
void QSQLData::bddUpdate(Contact & c, Contact & q)
{
    updateContact(c, q);
}
/**
 * @brief Récupère la liste de tous les contacts depuis la base de données.
 * @param lc GestionContacts pour stocker la liste des contacts.
 */
void QSQLData::bddGetContacts(GestionContacts & lc)
{
    getAllContacts(lc);
}
/**
 * @brief Récupère la liste de toutes les interactions d'un contact depuis la base de données.
 * @param li GestionInteraction pour stocker la liste des interactions.
 * @param c Contact pour lequel récupérer les interactions.
 */
void QSQLData::bddGetInteractions(GestionInteraction & li,Contact & c)
{
    getAllInteractions(li,c);
}
/**
 * @brief Récupère l'ID d'un contact depuis la base de données.
 * @param c Contact pour lequel récupérer l'ID.
 */
void QSQLData::bddGetIdContact(Contact & c)
{
    getIdContact(c);
}
/**
 * @brief Crée une interaction associée à un contact dans la base de données.
 * @param i Interaction à ajouter.
 * @param c Contact associé à l'interaction.
 */
void QSQLData::bddCreateInteractionToContact(Interaction & i,Contact & c)
{
    createInteractionToContact(i,c);
}
/**
 * @brief Crée une tâche (Todo) dans la base de données.
 * @param t Todo à ajouter.
 */
void QSQLData::bddCreateTodo(Todo & t)
{
    createTodo(t);
}
/**
 * @brief Crée une association entre une interaction et une tâche dans la base de données.
 * @param ait AssociationInteractionTodo à ajouter.
 */
void QSQLData::bddCreateAIT(AssociationInteractionTodo & ait)
{
    createAIT(ait);
}
/**
 * @brief Récupère le nombre total de contacts dans la base de données.
 * @param nombreContacts Variable pour stocker le nombre de contacts.
 */
void QSQLData::bddNombreContacts(int & nombreContacts)
{
    getNombreContacts(nombreContacts);
}
/**
 * @brief Vérifie si la base de données est ouverte.
 * @param b Variable pour stocker le résultat (true si ouverte, false sinon).
 */
void QSQLData::isOpen(bool & b)
{
    isDBopen(b);
}
/**
 * @brief Récupère les informations d'un contact depuis la base de données.
 * @param c Contact à récupérer.
 */
void QSQLData::bddInfosContact(Contact & c)
{
    getContact(c);
}
/**
 * @brief Récupère les interactions entre deux dates depuis la base de données.
 * @param dateDeb Date de début.
 * @param dateFin Date de fin.
 * @param li GestionInteraction pour stocker la liste des interactions.
 */
void QSQLData::bddInteractionsEntre2Dates(std::string & dateDeb,std::string & dateFin,GestionInteraction & li)
{
    getInteractionsEntre2Dates(dateDeb,dateFin,li);
}
/**
 * @brief Récupère la liste des tâches (Todo) associées à un contact depuis la base de données.
 * @param c Contact pour lequel récupérer les tâches.
 * @param lt Liste de Todo pour stocker les tâches.
 */
void QSQLData::bddGetTodos(Contact &  c,std::list<Todo> & lt)
{
    getTodos(c,lt);
}
/**
 * @brief Connexion à la base de données SQLite.
 * @return True si la connexion réussie, false sinon.
 */
bool QSQLData::connectDB()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString localeUrl="../base/base.sqlite";
    db.setDatabaseName( localeUrl );
    if(!db.open())
    {
        qDebug() << "Pas de connexion à la BDD !";
        dbOuverte=false;
    }
    else
    {
        qDebug() << "Connexion réussie à la BDD !";
        dbOuverte=true;
    }

    return dbOuverte;
}
/**
 * @brief Ferme la connexion à la base de données SQLite.
 */
void QSQLData::closeDB()
{
    if (dbOuverte==true)
        db.close();
}
/**
 * @brief Vérifie si la base de données est ouverte.
 * @param b Variable pour stocker le résultat (true si ouverte, false sinon).
 */
void QSQLData::isDBopen(bool & b)
{
    b=dbOuverte;
}




/**
 * @brief Récupère la liste de tous les contacts depuis la base de données.
 * @param lc GestionContacts pour stocker la liste des contacts.
 */
void QSQLData::getAllContacts(GestionContacts &lc) const
{
    lc.getListe().clear();
    if (dbOuverte==true)
    {
        QSqlQuery query("SELECT nom,prenom,entreprise,email,photo,dateDeCreation from Contact ORDER BY nom,prenom ");
        if(!query.exec())
        {
            qDebug() << "Impossible d’exécuter la requête !";
        }
        else
        {

            Contact c;

            while(query.next())
            {
                QString r = query.value(0).toString();
                c.setNom(r.toStdString());

                r = query.value(1).toString();
                c.setPrenom(r.toStdString());

                r = query.value(2).toString();
                c.setEntreprise(r.toStdString());

                r = query.value(3).toString();
                c.setMail(r.toStdString());

                r = query.value(4).toString();
                c.setUrlPhoto(r.toStdString());

                r = query.value(5).toString();
                sdate datec = convertirChaineEnDate(r.toStdString());
                c.setCreation(datec);

                lc+c;


            }
        }
    }
}

/**
 * @brief Crée un contact dans la base de données.
 * @param c Contact à ajouter.
 */
bool QSQLData::createContact(const Contact & c) const
{
    if (dbOuverte==true)
    {
        QSqlQuery query;
        query.prepare("INSERT INTO Contact (nom, prenom,entreprise, email, photo, dateDeCreation) VALUES (:n, :pr,:e, :m, :p, :d)");
        query.bindValue(":n", QString::fromStdString(c.getNom()));
        query.bindValue(":pr", QString::fromStdString(c.getPrenom()));
        query.bindValue(":e", QString::fromStdString(c.getEntreprise()));
        query.bindValue(":m", QString::fromStdString(c.getMail()));
        query.bindValue(":p", QString::fromStdString(c.getUrlPhoto()));
        std::string s = convertirDateEnChaine(c.getCreation());
        query.bindValue(":d", QString::fromStdString(s));

        if (!query.exec())
        {
            qDebug() << "Erreur à la creation";
            return false;
        }
    }
    return true;
}

/**
 * @brief Supprime une contact dans la base de données.
 * @param c Contact à supprimer.
 */
bool QSQLData::deleteContact(const Contact & c) const
{
    if (dbOuverte==true)
    {
        QSqlQuery query;
        //avec une préparation de la requête et des champs pré−conçus
        query.prepare("DELETE FROM Contact WHERE nom = :n and prenom= :pr ;");
        query.bindValue(":n", QString::fromStdString(c.getNom()));
        query.bindValue(":pr", QString::fromStdString(c.getPrenom()));
        if (!query.exec())
        {
            qDebug() << "Erreur à la suppression";
            return false;
        }
    }
    return true;
}

/**
 * @brief Met à jour un contact dans la base de données.
 * @param c Ancien contact.
 * @param q Nouveau contact.
 */
bool QSQLData::updateContact(const Contact & oldC, const Contact& newC) const
{
    if (dbOuverte==true)
    {
        QSqlQuery query;
        query.prepare("UPDATE contact SET nom=:newn, prenom=:newpr ,entreprise=:newe, email=:newm, photo=:newp, dateDeCreation=:newd  "
                      "WHERE nom=:n and prenom = :pr;");

        query.bindValue(":n", QString::fromStdString(oldC.getNom()));
        query.bindValue(":newn", QString::fromStdString(newC.getNom()));

        query.bindValue(":pr", QString::fromStdString(oldC.getPrenom()));
        query.bindValue(":newpr", QString::fromStdString(newC.getPrenom()));

        query.bindValue(":newe", QString::fromStdString(newC.getEntreprise()));

        query.bindValue(":newm", QString::fromStdString(newC.getMail()));

        query.bindValue(":newp", QString::fromStdString(newC.getUrlPhoto()));

        std::string s1 = convertirDateEnChaine(newC.getCreation());
        query.bindValue(":newd", QString::fromStdString(s1));

        if (!query.exec())
        {
            qDebug() << "Erreur à la mise à jour";
            return false;
        }
    }
    return true;
}
/**
 * @brief Récupère les informations d'un contact depuis la base de données.
 * @param c Contact à récupérer.
 */
void QSQLData::getContact(Contact & c) const
{
    if (dbOuverte == true)
    {
        QSqlQuery query;
        query.prepare("SELECT nom, prenom, entreprise, email, photo, dateDeCreation FROM Contact WHERE nom=:n AND prenom=:p;");
        query.bindValue(":n", QString::fromStdString(c.getNom()));
        query.bindValue(":p", QString::fromStdString(c.getPrenom()));

        if (!query.exec())
        {
            qDebug() << "Impossible d'exécuter la requête ! Erreur : " << query.lastError().text();
        }
        else
        {
            if (query.next())
            {
                c.setNom(query.value("nom").toString().toStdString());
                c.setPrenom(query.value("prenom").toString().toStdString());
                c.setEntreprise(query.value("entreprise").toString().toStdString());
                c.setMail(query.value("email").toString().toStdString());
                c.setUrlPhoto(query.value("photo").toString().toStdString());

                QString dateStr = query.value("dateDeCreation").toString();
                sdate datec = convertirChaineEnDate(dateStr.toStdString());
                c.setCreation(datec);
            }
        }
    }
}



/**
 * @brief Récupère l'ID d'un contact depuis la base de données.
 * @param c Contact pour lequel récupérer l'ID.
 */
int QSQLData::getIdContact(const Contact & c) const
{
    int idContact = 0;
    if (dbOuverte==true)
    {
        QSqlQuery query;
        query.prepare("SELECT id from Contact WHERE nom=:n and prenom =:p  ");
        query.bindValue(":n", QString::fromStdString(c.getNom()));
        query.bindValue(":p", QString::fromStdString(c.getPrenom()));
        if(!query.exec())
        {
            qDebug() << "Impossible d’exécuter la requête !";
        }
        else
        {
            if(query.next())
            {
                idContact = query.value("id").toInt();
            }
        }

    }
    return idContact;
}

/**
 * @brief Récupère la liste de toutes les interactions d'un contact depuis la base de données.
 * @param li GestionInteraction pour stocker la liste des interactions.
 * @param c Contact pour lequel récupérer les interactions.
 */
void QSQLData::getAllInteractions(GestionInteraction&li,const Contact & c) const
{
    li.getListe().clear();
    int idContact = getIdContact(c);
    if (dbOuverte==true)
    {
        QSqlQuery query;
        query.clear();
        query.prepare("SELECT date, contenu FROM Interaction WHERE idContact = :idC ");

        query.bindValue(":idC", idContact);

        if(!query.exec())
        {
            qDebug() << "Impossible d’exécuter la requête !";

        }
        else
        {

            Interaction i;

            while(query.next())
            {

                QString r = query.value(0).toString();
                sdate datec = convertirChaineEnDate(r.toStdString());
                i.setDate(datec);

                r = query.value(1).toString();
                i.setContenu(r.toStdString());

                li+i;


            }
        }
    }
}
/**
 * @brief Crée une nouvelle interaction et l'associe à un contact existant dans la base de données.
 *
 * Crée une nouvelle interaction et l'associe à un contact existant dans la base de données.
 * @param i Objet Interaction à ajouter à la base de données.
 * @param c Objet Contact auquel l'interaction sera associée.
 * @return True si la création est réussie, sinon False.
 */
bool QSQLData::createInteractionToContact(const Interaction & i,const Contact & c) const
{
    int idContact = getIdContact(c);
    if (dbOuverte==true)
    {
        QSqlQuery query;
        query.prepare("INSERT INTO Interaction (idContact, date,contenu) VALUES (:idC, :d, :c)");
        query.bindValue(":idC", idContact);
        query.bindValue(":c", QString::fromStdString(i.getContenu()));
        std::string s = convertirDateEnChaine(i.getDate());
        query.bindValue(":d", QString::fromStdString(s));

        if (!query.exec())
        {
            qDebug() << "Erreur à la creation";
            return false;
        }
    }
    return true;
}
/**
 * @brief Crée une nouvelle tâche (Todo) dans la base de données.
 *
 * Crée une nouvelle tâche (Todo) dans la base de données.
 * @param t Objet Todo à ajouter à la base de données.
 * @return True si la création est réussie, sinon False.
 */
bool QSQLData::createTodo(const Todo & t) const
{
    if (dbOuverte==true)
    {
        QSqlQuery query;
        query.prepare("INSERT INTO Todo (dateTodo,contenuTodo) VALUES (:d, :c)");
        query.bindValue(":c", QString::fromStdString(t.getContenu()));
        std::string s = convertirDateEnChaine(t.getDate());
        query.bindValue(":d", QString::fromStdString(s));

        if (!query.exec())
        {
            qDebug() << "Erreur à la creation";
            return false;
        }
    }
    return true;
}

/**
 * @brief Récupère l'identifiant d'une interaction depuis la base de données.
 *
 * Récupère l'identifiant d'une interaction depuis la base de données en fonction de l'objet Interaction fourni.
 * @param i Objet Interaction utilisé pour trouver l'identifiant.
 * @return L'identifiant de l'interaction dans la base de données.
 */
int QSQLData::getIdInteraction(const Interaction & i) const
{
    int idInteraction = 0;
    if (dbOuverte==true)
    {
        QSqlQuery query;
        query.clear();
        query.prepare("SELECT idInteraction from Interaction WHERE contenu=:c and date =:d  ");
        query.bindValue(":c", QString::fromStdString(i.getContenu()));
        query.bindValue(":d", QString::fromStdString(convertirDateEnChaine(i.getDate())));
        if(!query.exec())
        {
            qDebug() << "Impossible d’exécuter la requête !";
        }
        else
        {

            if(query.next())
            {
                idInteraction = query.value("idInteraction").toInt();

            }
        }
    }

    return idInteraction;
}
/**
 * @brief Récupère l'identifiant d'une tâche (Todo) depuis la base de données.
 *
 * Récupère l'identifiant d'une tâche (Todo) depuis la base de données en fonction de l'objet Todo fourni.
 * @param t Objet Todo utilisé pour trouver l'identifiant.
 * @return L'identifiant de la tâche dans la base de données.
 */
int QSQLData::getIdTodo(const Todo & t) const
{
    int idTodo = 0;
    if (dbOuverte==true)
    {
        QSqlQuery query;
        query.prepare("SELECT idTodo from Todo WHERE contenuTodo=:c and dateTodo =:d  ");
        query.bindValue(":c", QString::fromStdString(t.getContenu()));
        query.bindValue(":d", QString::fromStdString(convertirDateEnChaine(t.getDate())));
        if(!query.exec())
        {
            qDebug() << "Impossible d’exécuter la requête !";
        }
        else
        {
            if(query.next())
            {
                idTodo = query.value("idTodo").toInt();
            }
        }

    }
    return idTodo;
}

/**
 * @brief Crée une association entre une interaction et une tâche (Todo) dans la base de données.
 *
 * Crée une association entre une interaction et une tâche (Todo) dans la base de données.
 * @param ait Objet AssociationInteractionTodo à ajouter à la base de données.
 * @return True si la création est réussie, sinon False.
 */
bool QSQLData::createAIT( AssociationInteractionTodo & ait) const
{
    Todo todo = ait.getTodo();
    int indT = getIdTodo(todo);
    Interaction interac = ait.getInteraction();
    int indI = getIdInteraction(interac);
    if (dbOuverte==true)
    {
        QSqlQuery query;
        query.clear();
        query.prepare("INSERT INTO associationInteractionTodo (idTodo,idInteraction) VALUES (:idT, :idC)");
        query.bindValue(":idT", indT);
        query.bindValue(":idC", indI);

        if (!query.exec())
        {
            qDebug() << "Erreur à la creation";
            return false;
        }
    }
    return true;
}
/**
 * @brief Récupère le nombre total de contacts dans la base de données.
 *
 * Récupère le nombre total de contacts dans la base de données.
 * @param nombreContacts Variable de sortie pour stocker le nombre total de contacts.
 * @return True si la récupération est réussie, sinon False.
 */
bool QSQLData::getNombreContacts(int & nombreContacts) const
{
    nombreContacts = 0;

    if (dbOuverte == true)
    {
        QSqlQuery query("SELECT COUNT(*) FROM Contact;");

        if (!query.exec())
        {
            qDebug() << "Impossible d'exécuter la requête ! Erreur : " << query.lastError().text();
        }
        else
        {
            if (query.next())
            {
                nombreContacts = query.value(0).toInt();
            }
        }
    }
    return true;
}

/**
 * @brief Récupère toutes les interactions dans une plage de dates spécifiée.
 *
 * Récupère toutes les interactions dans une plage de dates spécifiée et remplit l'objet GestionInteraction fourni.
 * @param dateDeb Date de début de la plage.
 * @param dateFin Date de fin de la plage.
 * @param li Objet GestionInteraction à remplir avec les interactions.
 * @return True si la récupération est réussie, sinon False.
 */
bool QSQLData::getInteractionsEntre2Dates(const std::string& dateDeb, const std::string& dateFin, GestionInteraction & li) const
{
    li.getListe().clear();
    if (dbOuverte == true)
    {
        QSqlQuery query;
        query.prepare("SELECT contenu, date FROM Interaction WHERE date >= :start AND date <= :end ");

        // Utiliser les std::string directement
        query.bindValue(":start", QString::fromStdString(dateDeb));
        query.bindValue(":end", QString::fromStdString(dateFin));
        if (!query.exec())
        {
            qDebug() << "Impossible d'exécuter la requête ! Erreur : " << query.lastError().text();
        }
        else
        {
            while (query.next())
            {
                Interaction i;

                i.setContenu(query.value(0).toString().toStdString());
                QString dateStr = query.value(1).toString();
                sdate datec = convertirChaineEnDate(dateStr.toStdString());
                i.setDate(datec);

                li+i;
            }
        }
    }

    return true;
}

/**
 * @brief Récupère toutes les tâches (Todo) associées à un contact depuis la base de données.
 *
 * Récupère toutes les tâches (Todo) associées à un contact depuis la base de données et les stocke dans la liste fournie.
 * @param c Objet Contact pour trouver les tâches associées.
 * @param todos Liste de tâches (Todo) à remplir avec les données de la base de données.
 * @return True si la récupération est réussie, sinon False.
 */
bool QSQLData::getTodos(Contact & c, std::list<Todo>& todos) const
{
    int idContact = getIdContact(c);
    if (dbOuverte == true)
    {
        QSqlQuery query;
        query.prepare("SELECT Todo.ContenuTodo, Todo.DateTodo FROM Contact "
                      "JOIN Interaction ON Contact.id = Interaction.idContact "
                      "JOIN AssociationInteractionTodo ON Interaction.idInteraction = AssociationInteractionTodo.idInteraction "
                      "JOIN Todo ON AssociationInteractionTodo.idTodo = Todo.idTodo "
                      "WHERE Contact.id = :idContact");

        query.bindValue(":idContact", idContact);

        if (!query.exec())
        {
            qDebug() << "Impossible d'exécuter la requête ! Erreur : " << query.lastError().text();

            return false;
        }
        else
        {
            while (query.next())
            {
                Todo t;
                t.setContenu(query.value("ContenuTodo").toString().toStdString());
                QString dateStr = query.value("DateTodo").toString();
                sdate datec = convertirChaineEnDate(dateStr.toStdString());
                t.setDate(datec);

                todos.push_back(t);
            }
        }
    }

    return true;
}
