/**
 * @file gestioninteraction.h
 * @brief Déclaration de la classe GestionInteraction.
 */

#ifndef GESTIONINTERACTION_H
#define GESTIONINTERACTION_H

#include <list>
#include <ostream>
#include "interaction.h"

/**
 * @brief La classe GestionInteraction gère une liste d'interactions.
 */
class GestionInteraction {

private:
    std::list<Interaction> listeInteraction; /**< La liste d'interactions. */

public:
    /**
     * @brief Constructeur par défaut de la classe GestionInteraction.
     */
    GestionInteraction();

    /**
     * @brief Destructeur de la classe GestionInteraction.
     */
    ~GestionInteraction();

    /**
     * @brief Constructeur de copie de la classe GestionInteraction.
     * @param c GestionInteraction à copier.
     */
    GestionInteraction(const GestionInteraction &c);

    /**
     * @brief Obtient la liste d'interactions.
     * @return La liste d'interactions.
     */
    std::list<Interaction> getListe() const;

    /**
     * @brief Modifie la liste d'interactions.
     * @param lc Nouvelle liste d'interactions.
     */
    void setListe(const std::list<Interaction> &lc);

    /**
     * @brief Surcharge de l'opérateur + pour ajouter une interaction à la liste.
     * @param c Interaction à ajouter.
     * @return La GestionInteraction mise à jour.
     */
    GestionInteraction operator+(const Interaction &c);

    /**
     * @brief Surcharge de l'opérateur = pour copier une liste d'interactions.
     * @param gc GestionInteraction à copier.
     */
    void operator=(const GestionInteraction &gc);

    /**
     * @brief Surcharge de l'opérateur - pour retirer une interaction de la liste.
     * @param i Interaction à retirer.
     * @return La GestionInteraction mise à jour.
     */
    GestionInteraction operator-(const Interaction &i);

    /**
     * @brief Surcharge de l'opérateur << pour afficher une liste d'interactions.
     * @param o Flux de sortie.
     * @param gi GestionInteraction à afficher.
     * @return Le flux de sortie mis à jour.
     */
    friend std::ostream &operator<<(std::ostream &o, const GestionInteraction &gi);

    /**
    * @brief Convertit la classe GestionsInteraction en un objet JSON.
    * @return Objet JSON représentant la classe GestionInteraction.
    */
    QJsonArray toJsonArray() const;
};

#endif // GESTIONINTERACTION_H
