/**
 * @file todo.h
 * @brief Déclaration de la classe Todo.
 */

#ifndef TODO_H
#define TODO_H

#include <QJsonObject>
#include <QJsonValue>
#include <iostream>
#include "date.h"

/**
 * @brief La classe Todo représente une tâche à accomplir avec une date associée.
 */
class Todo
{
private:
    std::string contenu; /**< Contenu de la tâche. */
    struct sdate date;   /**< Date associée à la tâche. */

public:
    /**
     * @brief Constructeur par défaut de la classe Todo.
     * Initialise la date par défaut et le contenu.
     */
    Todo();

    /**
     * @brief Constructeur paramétré de la classe Todo.
     * @param c Contenu du todo.
     * @param d Date du todo.
     */
    Todo(const std::string &, const struct sdate &);

    /**
     * @brief Destructeur de la classe Todo.
     */
    ~Todo();

    // Accesseurs

    /**
     * @brief Obtient la date du todo.
     * @return La date du todo.
     */
    struct sdate getDate() const;

    /**
     * @brief Obtient le contenu du todo.
     * @return Le contenu du todo.
     */
    std::string getContenu() const;

    // Mutateurs

    /**
     * @brief Modifie la date du todo.
     * @param d Nouvelle date du todo.
     */
    void setDate(const struct sdate &);

    /**
     * @brief Modifie le contenu du todo.
     * @param c Nouveau contenu du todo.
     */
    void setContenu(const std::string &);

    /**
     * @brief Surcharge de l'opérateur de sortie pour l'affichage d'un todo.
     * @param os Flux de sortie.
     * @param i Todo à afficher.
     * @return Le flux de sortie mis à jour.
     */
    friend std::ostream &operator<<(std::ostream &, const Todo &);

    /**
    * @brief Convertit la classe Todo en un objet JSON.
    * @return Objet JSON représentant la classe Todo.
    */
    QJsonObject toJsonObject() const;
};

#endif // TODO_H
