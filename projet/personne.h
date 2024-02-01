/**
 * @file personne.h
 * @brief Déclaration de la classe Personne.
 */

#ifndef PERSONNE_H
#define PERSONNE_H

#include <iostream>

/**
 * @brief La classe Personne représente une entité avec un nom, un prénom et un âge.
 */
class Personne
{
protected:
    std::string nom;      /**< Le nom de la personne. */
    std::string prenom;   /**< Le prénom de la personne. */
    unsigned int age;     /**< L'âge de la personne. */

public:
    /**
     * @brief Constructeur par défaut de la classe Personne.
     */
    Personne();

    /**
     * @brief Constructeur paramétré de la classe Personne.
     * @param p Prénom de la personne.
     * @param n Nom de la personne.
     * @param a Âge de la personne.
     */
    Personne(const std::string &, const std::string &, const unsigned int);

    // Accesseurs

    /**
     * @brief Obtient l'âge de la personne.
     * @return L'âge de la personne.
     */
    unsigned int getAge() const;

    /**
     * @brief Obtient le nom de la personne.
     * @return Le nom de la personne.
     */
    std::string getNom() const;

    /**
     * @brief Obtient le prénom de la personne.
     * @return Le prénom de la personne.
     */
    std::string getPrenom() const;

    // Mutateurs

    /**
     * @brief Modifie l'âge de la personne.
     * @param a Nouvel âge de la personne.
     */
    void setAge(const unsigned int);

    /**
     * @brief Modifie le nom de la personne.
     * @param s Nouveau nom de la personne.
     */
    void setNom(const std::string &);

    /**
     * @brief Modifie le prénom de la personne.
     * @param s Nouveau prénom de la personne.
     */
    void setPrenom(const std::string &);

    /**
     * @brief Surcharge de l'opérateur << pour afficher une personne.
     * @param os Flux de sortie.
     * @param p Personne à afficher.
     * @return Le flux de sortie mis à jour.
     */
    friend std::ostream& operator<<(std::ostream& os, const Personne&);

    /**
     * @brief Surcharge de l'opérateur == pour comparer deux personnes.
     * @param p Personne à comparer.
     * @return True si les personnes sont égales, sinon False.
     */
    bool operator==(const Personne &) const;
};

#endif // PERSONNE_H
