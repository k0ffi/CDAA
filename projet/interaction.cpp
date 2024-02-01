/**
 * @file interaction.cpp
 * @brief Implémentation de la classe Interaction.
 */

#include "interaction.h"
#include <ctime>

/**
 * @brief Constructeur par défaut de la classe Interaction.
 * Initialise la date par défaut et le contenu.
 */
Interaction::Interaction()
{

}

/**
 * @brief Constructeur paramétré de la classe Interaction.
 * @param d Date de l'interaction.
 * @param c Contenu de l'interaction.
 */
Interaction::Interaction(const struct sdate &d, const std::string &c)
{
    this->setDate(d);
    this->setContenu(c);
}

/**
 * @brief Destructeur de la classe Interaction.
 */
Interaction::~Interaction()
{
    // Aucune ressource à libérer pour le moment.
}

/**
 * @brief Obtient la date de l'interaction.
 * @return La date de l'interaction.
 */
struct sdate Interaction::getDate() const
{
    return date;
}

/**
 * @brief Obtient le contenu de l'interaction.
 * @return Le contenu de l'interaction.
 */
std::string Interaction::getContenu() const
{
    return contenu;
}

/**
 * @brief Modifie la date de l'interaction.
 * @param d Nouvelle date de l'interaction.
 */
void Interaction::setDate(const struct sdate &d)
{
    date = d;
}

/**
 * @brief Modifie le contenu de l'interaction.
 * @param c Nouveau contenu de l'interaction.
 */
void Interaction::setContenu(const std::string &c)
{
    contenu = c;
}

/**
 * @brief Surcharge de l'opérateur << pour afficher une interaction.
 * @param os Flux de sortie.
 * @param i Interaction à afficher.
 * @return Le flux de sortie mis à jour.
 */
std::ostream &operator<<(std::ostream &os, const Interaction &i)
{
    struct sdate d = i.getDate();
    os << d.jour << "-" << d.mois << "-" << d.annee << " " << i.getContenu();
    return os;
}

/**
 * @brief Surcharge de l'opérateur == pour comparer deux interactions.
 * @param i Interaction à comparer.
 * @return True si les interactions sont égales, sinon False.
 */
bool Interaction::operator==(const Interaction &i) const
{
    return (getContenu() == i.getContenu());
}


/**
* @brief Convertit la classe Interaction en un objet JSON.
* @return Objet JSON représentant la classe Interaction.
*/
QJsonObject Interaction::toJsonObject() const {
    QJsonObject interactionObject;

    QJsonObject dateObject;
    dateObject["jour"] = static_cast<int>(getDate().jour);
    dateObject["mois"] = static_cast<int>(getDate().mois);
    dateObject["annee"] = static_cast<int>(getDate().annee);
    interactionObject["date"] = dateObject;


    interactionObject["contenu"] = QString::fromStdString(getContenu());

    return interactionObject;
}
