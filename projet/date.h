/**
 * @file date.h
 * @brief Déclaration de la structure sdate et des fonctions de manipulation des dates.
 */

#ifndef DATE_H
#define DATE_H

#include <ctime>
#include <iostream>
#include <sstream>

/**
 * @brief Structure représentant une date.
 */
struct sdate {
    unsigned int jour; /**< Jour de la date. */
    unsigned int mois; /**< Mois de la date. */
    unsigned int annee; /**< Année de la date. */
};

/**
 * @brief Convertit une chaîne de date au format "jj/mm/aaaa" en structure sdate.
 * @param chaineDate Chaîne de date à convertir.
 * @return Structure sdate représentant la date convertie.
 */
    sdate convertirChaineEnDate(const std::string&);

    /**
 * @brief Convertit une structure sdate en chaîne de date au format "jj/mm/aaaa".
 * @param date Structure sdate à convertir.
 * @return Chaîne de date convertie.
 */
    std::string convertirDateEnChaine(const sdate&);

    /**
 * @brief Obtient la date courante sous la forme d'une structure sdate.
 * @return Structure sdate représentant la date courante.
 */
    sdate obtenirDateCourante();

#endif // DATE_H
