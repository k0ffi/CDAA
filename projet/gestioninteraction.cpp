/**
 * @file gestioninteraction.cpp
 * @brief Implémentation de la classe GestionInteraction.
 */

#include "gestioninteraction.h"

/**
 * @brief Constructeur par défaut de la classe GestionInteraction.
 */
GestionInteraction::GestionInteraction()
{
    // Aucune initialisation nécessaire dans le constructeur par défaut.
}

/**
 * @brief Destructeur de la classe GestionInteraction.
 * Efface la liste d'interactions.
 */
GestionInteraction::~GestionInteraction()
{
    listeInteraction.clear();
}

/**
 * @brief Constructeur de copie de la classe GestionInteraction.
 * @param c GestionInteraction à copier.
 */
GestionInteraction::GestionInteraction(const GestionInteraction &c)
{
    setListe(c.getListe());
}

/**
 * @brief Obtient la liste d'interactions.
 * @return La liste d'interactions.
 */
std::list<Interaction> GestionInteraction::getListe() const
{
    return listeInteraction;
}

/**
 * @brief Modifie la liste d'interactions.
 * @param lc Nouvelle liste d'interactions.
 */
void GestionInteraction::setListe(const std::list<Interaction> &lc)
{
    listeInteraction = lc;
}

/**
 * @brief Surcharge de l'opérateur + pour ajouter une interaction à la liste.
 * @param c Interaction à ajouter.
 * @return La GestionInteraction mise à jour.
 */
GestionInteraction GestionInteraction::operator+(const Interaction &c)
{
    listeInteraction.push_back(c);
    return *this;
}

/**
 * @brief Surcharge de l'opérateur = pour copier une liste d'interactions.
 * @param gc GestionInteraction à copier.
 */
void GestionInteraction::operator=(const GestionInteraction &gc)
{
    listeInteraction.clear();
    listeInteraction = gc.listeInteraction;
}

/**
 * @brief Surcharge de l'opérateur - pour retirer une interaction de la liste.
 * @param i Interaction à retirer.
 * @return La GestionInteraction mise à jour.
 */
GestionInteraction GestionInteraction::operator-(const Interaction &i)
{
    auto it = listeInteraction.begin();
    bool found = false;
    while ((it != listeInteraction.end()) && (found == false))
    {
        if (*it == i)
        {
            found = true;
            it = listeInteraction.erase(it);
        }
        else
            ++it;
    }
    return *this;
}

/**
 * @brief Surcharge de l'opérateur << pour afficher une liste d'interactions.
 * @param o Flux de sortie.
 * @param gi GestionInteraction à afficher.
 * @return Le flux de sortie mis à jour.
 */
std::ostream &operator<<(std::ostream &o, const GestionInteraction &gi)
{
    std::list<Interaction> g = gi.getListe();
    auto it = g.begin();
    while (it != g.end())
    {
        o << *it;
        o << " ";
        ++it;
    }
    return o;
}

/**
* @brief Convertit la classe GestionsInteraction en un objet JSON.
* @return Objet JSON représentant la classe GestionInteraction.
*/
QJsonArray GestionInteraction::toJsonArray() const {
    QJsonArray interactionsArray;

    for (const Interaction &interaction : listeInteraction) {
        interactionsArray.append(interaction.toJsonObject());
    }

    return interactionsArray;
}
