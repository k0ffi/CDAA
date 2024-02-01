/**
 * @file contact.h
 * @brief Définition de la classe Contact et de ses méthodes.
 */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <list>
#include "personne.h"
#include "gestioninteraction.h"

/**
 * @class Contact
 * @brief Représente un contact avec des informations personnelles, professionnelles et des interactions.
 */
class Contact : public Personne {
private:
    std::string entreprise; /**< Le nom de l'entreprise associée au contact. */
    std::string mail; /**< L'adresse e-mail du contact. */
    std::list<unsigned> telephone; /**< Une liste de numéros de téléphone. */
    struct sdate creation; /**< Une structure pour stocker la date de création. */
    GestionInteraction linteraction; /**< Une instance de la classe GestionInteraction. */
    std::string urlPhoto; /**< L'URL de la photo du contact. */

public:
    /**
     * @brief Constructeur par défaut de Contact.
     */
    Contact();

    /**
     * @brief Constructeur avec paramètres de Contact.
     * @param n Nom du contact.
     * @param p Prénom du contact.
     * @param e Nom de l'entreprise du contact.
     */
    Contact(const std::string &, const std::string &, const std::string &);

    /**
     * @brief Destructeur de Contact.
     */
    ~Contact();

    // Accesseurs et modificateurs pour les attributs de Contact
    /**
        * @brief Getter pour le nom de l'entreprise.
        * @return Nom de l'entreprise du contact.
    */
    std::string getNom() const;
    /**
        * @brief Getter pour le nom de l'entreprise.
        * @return Nom de l'entreprise du contact.
    */
    std::string getPrenom() const;
    /**
     * @brief Getter pour le nom de l'entreprise.
     * @return Nom de l'entreprise du contact.
     */
    std::string getEntreprise() const;

    /**
     * @brief Setter pour le nom de l'entreprise.
     * @param e Nouveau nom de l'entreprise.
     */
    void setEntreprise(const std::string &);

    /**
     * @brief Getter pour l'adresse e-mail.
     * @return Adresse e-mail du contact.
     */
    std::string getMail() const;

    /**
     * @brief Setter pour l'adresse e-mail.
     * @param m Nouvelle adresse e-mail.
     */
    void setMail(const std::string &);

    /**
     * @brief Getter pour la liste de numéros de téléphone.
     * @return Liste des numéros de téléphone du contact.
     */
    std::list<unsigned> getTelephone() const;

    /**
     * @brief Setter pour la liste de numéros de téléphone.
     * @param t Nouvelle liste de numéros de téléphone.
     */
    void setTelephone(const std::list<unsigned> &);

    /**
     * @brief Getter pour la date de création.
     * @return Date de création du contact.
     */
    struct sdate getCreation() const;

    /**
     * @brief Setter pour la date de création.
     * @param c Nouvelle date de création.
     */
    void setCreation(const struct sdate &);

    /**
     * @brief Getter pour la liste d'interactions.
     * @return Gestion des interactions du contact.
     */
    GestionInteraction getInteraction() const;

    /**
     * @brief Setter pour la liste d'interactions.
     * @param li Nouvelle gestion des interactions.
     */
    void setInteraction(const GestionInteraction &);

    /**
     * @brief Getter pour l'URL de la photo.
     * @return URL de la photo du contact.
     */
    std::string getUrlPhoto() const;

    /**
     * @brief Setter pour l'URL de la photo.
     * @param urlP Nouvelle URL de la photo.
     */
    void setUrlPhoto(const std::string &);

    /**
     * @brief Setter pour la date de création.
     * @param d Nouvelle date de création.
     */
    void setDate(const struct sdate &d);

    /**
     * @brief Surcharge de l'opérateur == pour comparer deux contacts.
     * @param c Contact à comparer.
     * @return true si les contacts sont égaux, false sinon.
     */
    bool operator==(const Contact &) const;

    /**
     * @brief Surcharge de l'opérateur << pour afficher un contact.
     * @param o Flux de sortie.
     * @param c Contact à afficher.
     * @return Flux de sortie mis à jour.
     */
    friend std::ostream &operator<<(std::ostream &, const Contact &);

    /**
    * @brief Convertit la classe Contact en un objet JSON.
    * @return Objet JSON représentant la classe Contact.
    */
    QJsonObject toJsonObject() const;
};

#endif // CONTACT_H
