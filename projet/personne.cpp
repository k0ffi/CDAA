/**
 * @file personne.cpp
 * @brief Implémentation de la classe Personne.
 */

#include "personne.h"

/**
 * @brief Constructeur par défaut de la classe Personne.
 */
Personne::Personne()
{
    // Aucune initialisation nécessaire dans le constructeur par défaut.
}

/**
 * @brief Obtient l'âge de la personne.
 * @return L'âge de la personne.
 */
unsigned int Personne::getAge() const
{
    return age;
}

/**
 * @brief Obtient le nom de la personne.
 * @return Le nom de la personne.
 */
std::string Personne::getNom() const
{
    return nom;
}

/**
 * @brief Obtient le prénom de la personne.
 * @return Le prénom de la personne.
 */
std::string Personne::getPrenom() const
{
    return prenom;
}

/**
 * @brief Modifie l'âge de la personne.
 * @param a Nouvel âge de la personne.
 */
void Personne::setAge(const unsigned int a)
{
    age = a;
}

/**
 * @brief Modifie le nom de la personne.
 * @param s Nouveau nom de la personne.
 */
void Personne::setNom(const std::string &s)
{
    nom = s;
}

/**
 * @brief Modifie le prénom de la personne.
 * @param s Nouveau prénom de la personne.
 */
void Personne::setPrenom(const std::string &s)
{
    prenom = s;
}

/**
 * @brief Surcharge de l'opérateur << pour afficher une personne.
 * @param os Flux de sortie.
 * @param p Personne à afficher.
 * @return Le flux de sortie mis à jour.
 */
std::ostream& operator<<(std::ostream& os, const Personne& p)
{
    os << p.getPrenom() << ", " << p.getNom() << ", " << p.getAge();
    return os;
}

/**
 * @brief Surcharge de l'opérateur == pour comparer deux personnes.
 * @param p Personne à comparer.
 * @return True si les personnes sont égales, sinon False.
 */
bool Personne::operator==(const Personne &p) const
{
    return (getAge() == p.getAge() && getNom() == p.getNom() && getPrenom() == p.getPrenom());
}

/**
 * @brief Constructeur paramétré de la classe Personne.
 * @param p Prénom de la personne.
 * @param n Nom de la personne.
 * @param a Âge de la personne.
 */
Personne::Personne(const std::string &p, const std::string &n, const unsigned int a)
{
    this->setAge(a);
    this->setNom(n);
    this->setPrenom(p);
}
