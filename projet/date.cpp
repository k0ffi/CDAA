/**
 * @file date.cpp
 * @brief Implémentation des fonctions liées à la manipulation des dates.
 */

#include "date.h"
#include <sstream>
#include <ctime>
#include <QString>
#include <QDate>

/**
 * @brief Convertit une chaîne de date au format "jj/mm/aaaa" en structure sdate.
 * @param chaineDate Chaîne de date à convertir.
 * @return Structure sdate représentant la date convertie.
 */
sdate convertirChaineEnDate(const std::string& chaineDate)
{
    sdate resultat;

    // Utiliser stringstream pour extraire les composants de la chaîne
    std::istringstream iss(chaineDate);
    char delimiter;

    // Extraire le jour, le mois et l'année
    iss >> resultat.jour >> delimiter >> resultat.mois >> delimiter >> resultat.annee;

    return resultat;
}

/**
 * @brief Convertit une structure sdate en chaîne de date au format "jj/mm/aaaa".
 * @param date Structure sdate à convertir.
 * @return Chaîne de date convertie.
 */
std::string convertirDateEnChaine(const sdate& date)
{
    // Utiliser std::ostringstream pour construire la chaîne
    std::ostringstream ss;
    ss << date.jour << '/' << date.mois << '/' << date.annee << "\0";
    // Vous pouvez ajuster le format selon vos besoins

    // Récupérer la chaîne résultante
    return ss.str();
}

/**
 * @brief Obtient la date courante sous la forme d'une structure sdate.
 * @return Structure sdate représentant la date courante.
 */
struct sdate obtenirDateCourante()
{
    struct sdate dateCourante;

    // Obtenir le temps actuel
    time_t tempsActuel;
    time(&tempsActuel);

    // Utiliser la structure tm pour extraire le jour, le mois et l'année
    struct tm* tempsStruct = localtime(&tempsActuel);

    // Initialiser la structure sdate
    dateCourante.jour = tempsStruct->tm_mday;
    dateCourante.mois = tempsStruct->tm_mon + 1;  // tm_mon est de 0 à 11, donc ajouter 1 pour obtenir le mois réel
    dateCourante.annee = tempsStruct->tm_year + 1900;  // tm_year est le nombre d'années depuis 1900

    return dateCourante;
}
