/**
 * @file interaction.h
 * @brief Déclaration de la classe Interaction.
 */

#ifndef INTERACTION_H
#define INTERACTION_H

#include <QJsonObject>
#include <QJsonArray>
#include <ostream>
#include <ctime>
#include <string>
#include "date.h"

/**
 * @brief La classe Interaction représente une interaction avec une date et un contenu associés.
 */
class Interaction {

private:
    struct sdate date;   /**< La date de l'interaction. */
    std::string contenu; /**< Le contenu de l'interaction. */

public:
    /**
     * @brief Constructeur par défaut de la classe Interaction.
     * Initialise la date à la date courante et le contenu à une chaîne vide.
     */
    Interaction();

    /**
     * @brief Constructeur paramétré de la classe Interaction.
     * @param d Date de l'interaction.
     * @param c Contenu de l'interaction.
     */
    Interaction(const struct sdate &, const std::string &);

    /**
     * @brief Destructeur de la classe Interaction.
     */
    ~Interaction();

    // Accesseurs

    /**
     * @brief Obtient la date de l'interaction.
     * @return La date de l'interaction.
     */
    struct sdate getDate() const;

    /**
     * @brief Obtient le contenu de l'interaction.
     * @return Le contenu de l'interaction.
     */
    std::string getContenu() const;

    // Mutateurs

    /**
     * @brief Modifie la date de l'interaction.
     * @param d Nouvelle date de l'interaction.
     */
    void setDate(const struct sdate &);

    /**
     * @brief Modifie le contenu de l'interaction.
     * @param c Nouveau contenu de l'interaction.
     */
    void setContenu(const std::string &);

    /**
     * @brief Surcharge de l'opérateur << pour afficher une interaction.
     * @param os Flux de sortie.
     * @param i Interaction à afficher.
     * @return Le flux de sortie mis à jour.
     */
    friend std::ostream& operator<<(std::ostream &, const Interaction &);

    /**
     * @brief Surcharge de l'opérateur == pour comparer deux interactions.
     * @param i Interaction à comparer.
     * @return True si les interactions sont égales, sinon False.
     */
    bool operator==(const Interaction &) const;

    /**
    * @brief Convertit la classe Interaction en un objet JSON.
    * @return Objet JSON représentant la classe Interaction.
    */
    QJsonObject toJsonObject() const;
};

#endif // INTERACTION_H
