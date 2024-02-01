/**
 * @file gestioncontacts.cpp
 * @brief Implémentation de la classe GestionContacts.
 */

#include "gestioncontacts.h"

/**
 * @brief Constructeur par défaut de la classe GestionContacts.
 */
GestionContacts::GestionContacts()
{
    // Aucune initialisation nécessaire dans le constructeur par défaut.
}

/**
 * @brief Destructeur de la classe GestionContacts.
 * Efface la liste de contacts pour libérer la mémoire.
 */
GestionContacts::~GestionContacts()
{
    listeContacts.clear();
}

/**
 * @brief Constructeur de copie de la classe GestionContacts.
 * @param c GestionContacts à copier.
 */
GestionContacts::GestionContacts(const GestionContacts &c)
{
    setListe(c.getListe());
}

/**
 * @brief Obtient la liste de contacts.
 * @return La liste de contacts.
 */
std::list<Contact> GestionContacts::getListe() const
{
    return listeContacts;
}

/**
 * @brief Modifie la liste de contacts.
 * @param lc Nouvelle liste de contacts.
 */
void GestionContacts::setListe(const std::list<Contact> &lc)
{
    listeContacts = lc;
}

/**
 * @brief Surcharge de l'opérateur + pour ajouter un contact à la liste.
 * @param c Contact à ajouter.
 * @return La GestionContacts mise à jour.
 */
GestionContacts GestionContacts::operator+(const Contact &c)
{
    listeContacts.push_back(c);
    return *this;
}

/**
 * @brief Surcharge de l'opérateur = pour copier une liste de contacts.
 * @param gc GestionContacts à copier.
 */
void GestionContacts::operator=(const GestionContacts &gc)
{
    listeContacts.clear();
    listeContacts = gc.listeContacts;
}

/**
 * @brief Surcharge de l'opérateur - pour retirer un contact de la liste.
 * @param c Contact à retirer.
 * @return La GestionContacts mise à jour.
 */
GestionContacts GestionContacts::operator-(const Contact &c)
{
    auto it = listeContacts.begin();
    bool found = false;
    while (it != listeContacts.end() && (found == false))
    {
        if (*it == c)
        {
            found = true;
            it = listeContacts.erase(it);
        }
        else
            ++it;
    }
    return *this;
}

/**
 * @brief Surcharge de l'opérateur << pour afficher la liste de contacts.
 * @param o Flux de sortie.
 * @param gc GestionContacts à afficher.
 * @return Le flux de sortie mis à jour.
 */
std::ostream &operator<<(std::ostream &o, const GestionContacts &gc)
{
    std::list<Contact> g = gc.getListe();
    auto it = g.begin();
    while (it != g.end())
    {
        o << *it << "\n";
        ++it;
    }
    return o;
}
/**
* @brief Convertit la classe GestionContacts en un objet JSON.
* @return Objet JSON représentant la classe GestionContacts.
*/
QJsonArray GestionContacts::toJsonArray() const {
    QJsonArray contactsArray;

    for (const Contact &contact : listeContacts) {
        contactsArray.append(contact.toJsonObject());
    }

    return contactsArray;
}
