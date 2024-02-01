/**
 * @file todo.cpp
 * @brief Implémentation de la classe Todo.
 */

#include "todo.h"
#include <ctime>

/**
 * @brief Constructeur par défaut de la classe Todo.
 * Initialise la date par défaut et le contenu.
 */
Todo::Todo()
{
}

/**
 * @brief Constructeur paramétré de la classe Todo.
 * @param c Contenu du todo.
 * @param d Date du todo.
 */
Todo::Todo(const std::string &c, const struct sdate &d)
{
    this->setContenu(c);
    this->setDate(d);
}

/**
 * @brief Destructeur de la classe Todo.
 */
Todo::~Todo()
{

}

/**
 * @brief Obtient la date du todo.
 * @return La date du todo.
 */
struct sdate Todo::getDate() const
{
    return date;
}

/**
 * @brief Obtient le contenu du todo.
 * @return Le contenu du todo.
 */
std::string Todo::getContenu() const
{
    return contenu;
}

/**
 * @brief Modifie la date du todo.
 * @param d Nouvelle date du todo.
 */
void Todo::setDate(const struct sdate &d)
{
    date = d;
}

/**
 * @brief Modifie le contenu du todo.
 * @param c Nouveau contenu du todo.
 */
void Todo::setContenu(const std::string &c)
{
    contenu = c;
}

/**
 * @brief Surcharge de l'opérateur de sortie pour l'affichage d'un todo.
 * @param os Flux de sortie.
 * @param i Todo à afficher.
 * @return Le flux de sortie mis à jour.
 */
std::ostream &operator<<(std::ostream &os, const Todo &i)
{
    struct sdate d = i.getDate();
    os << i.getContenu() << " " << d.jour << "-" << d.mois << "-" << d.annee;
    return os;
}
/**
* @brief Convertit la classe Todo en un objet JSON.
* @return Objet JSON représentant la classe Todo.
*/
QJsonObject Todo::toJsonObject() const {
    QJsonObject todoObject;

    QJsonObject dateObject;
    dateObject["jour"] = static_cast<int>(getDate().jour);
    dateObject["mois"] = static_cast<int>(getDate().mois);
    dateObject["annee"] = static_cast<int>(getDate().annee);
    todoObject["date"] = dateObject;

    todoObject["contenu"] = QString::fromStdString(getContenu());

    return todoObject;
}
