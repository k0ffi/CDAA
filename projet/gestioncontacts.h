/**
 * @file gestioncontacts.h
 * @brief Déclaration de la classe GestionContacts.
 */

#ifndef GESTIONCONTACTS_H
#define GESTIONCONTACTS_H

#include "contact.h"

/**
 * @brief La classe GestionContacts gère une liste de contacts.
 */
class GestionContacts
{
private:
    std::list<Contact> listeContacts; /**< La liste de contacts. */

public:
    /**
     * @brief Constructeur par défaut de la classe GestionContacts.
     */
    GestionContacts();

    /**
     * @brief Destructeur de la classe GestionContacts.
     */
    ~GestionContacts();

    /**
     * @brief Constructeur de copie de la classe GestionContacts.
     * @param c GestionContacts à copier.
     */
    GestionContacts(const GestionContacts &c);

    /**
     * @brief Obtient la liste de contacts.
     * @return La liste de contacts.
     */
    std::list<Contact> getListe() const;

    /**
     * @brief Modifie la liste de contacts.
     * @param lc Nouvelle liste de contacts.
     */
    void setListe(const std::list<Contact> &lc);

    /**
     * @brief Surcharge de l'opérateur + pour ajouter un contact à la liste.
     * @param c Contact à ajouter.
     * @return La GestionContacts mise à jour.
     */
    GestionContacts operator+(const Contact &c);

    /**
     * @brief Surcharge de l'opérateur = pour copier une liste de contacts.
     * @param gc GestionContacts à copier.
     */
    void operator=(const GestionContacts &gc);

    /**
     * @brief Surcharge de l'opérateur - pour retirer un contact de la liste.
     * @param c Contact à retirer.
     * @return La GestionContacts mise à jour.
     */
    GestionContacts operator-(const Contact &c);

    /**
     * @brief Surcharge de l'opérateur << pour afficher la liste de contacts.
     * @param o Flux de sortie.
     * @param gc GestionContacts à afficher.
     * @return Le flux de sortie mis à jour.
     */
    friend std::ostream &operator<<(std::ostream &o, const GestionContacts &gc);

    /**
    * @brief Convertit la classe GestionsContacts en un objet JSON.
    * @return Objet JSON représentant la classe GestionContacts.
    */
    QJsonArray toJsonArray() const ;
};

#endif // GESTIONCONTACTS_H
