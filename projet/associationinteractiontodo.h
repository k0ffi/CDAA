/**
 * @file associationinteractiontodo.h
 * @brief Déclaration de la classe AssociationInteractionTodo.
 */

#ifndef ASSOCIATIONINTERACTIONTODO_H
#define ASSOCIATIONINTERACTIONTODO_H

#include "todo.h"
#include "interaction.h"

/**
 * @class AssociationInteractionTodo
 * @brief Classe représentant l'association entre un objet Todo et un objet Interaction.
 */
class AssociationInteractionTodo
{
private:
    Todo* t;          /**< Un pointeur vers un objet de type Todo */
    Interaction* i;   /**< Un pointeur vers un objet de type Interaction */

public:
    /**
     * @brief Constructeur par défaut de la classe.
     */
    AssociationInteractionTodo();

    /**
     * @brief Constructeur avec des paramètres.
     * @param t Un pointeur vers un objet Todo.
     * @param i Un pointeur vers un objet Interaction.
     */
    AssociationInteractionTodo(Todo* &, Interaction* &);

    /**
     * @brief Destructeur de la classe.
     */
    ~AssociationInteractionTodo();

    /**
     * @brief Accesseur pour obtenir l'objet Todo.
     * @return L'objet Todo associé.
     */
    Todo getTodo();

    /**
     * @brief Setter pour définir l'objet Todo.
     * @param t1 L'objet Todo à définir.
     */
    void setTodo(Todo &t1);

    /**
     * @brief Accesseur pour obtenir l'objet Interaction.
     * @return L'objet Interaction associé.
     */
    Interaction getInteraction();

    /**
     * @brief Setter pour définir l'objet Interaction.
     * @param i1 L'objet Interaction à définir.
     */
    void setInteraction(Interaction &i1);

    /**
    * @brief Convertit la classe AssociationInteractionTodo en un objet JSON.
    * @return Objet JSON représentant la classe AssociationInteractionTodo.
    */
    QJsonObject toJsonObject() const;
};

#endif // ASSOCIATIONINTERACTIONTODO_H
