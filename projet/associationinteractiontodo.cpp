/**
 * @file associationinteractiontodo.cpp
 * @brief Implémentation des méthodes de la classe AssociationInteractionTodo.
 */

#include "associationinteractiontodo.h"

/**
 * @brief Constructeur par défaut de AssociationInteractionTodo.
 * @details Initialise les pointeurs t et i à nullptr.
 */
AssociationInteractionTodo::AssociationInteractionTodo() {
    this->t = nullptr;
    this->i = nullptr;
}

/**
 * @brief Constructeur paramétré de AssociationInteractionTodo.
 * @param t Pointeur vers un objet Todo.
 * @param i Pointeur vers un objet Interaction.
 */
AssociationInteractionTodo::AssociationInteractionTodo(Todo* &t, Interaction* &i) {
    this->t = t;
    this->i = i;
}

/**
 * @brief Destructeur de AssociationInteractionTodo.
 */
AssociationInteractionTodo::~AssociationInteractionTodo()
{

}

/**
 * @brief Accesseur pour obtenir l'objet Todo associé.
 * @return Référence vers l'objet Todo.
 */
Todo AssociationInteractionTodo::getTodo() {
    return *t;
}

/**
 * @brief Setter pour définir l'objet Todo associé.
 * @param t1 Nouvel objet Todo.
 */
void AssociationInteractionTodo::setTodo(Todo &t1) {
    this->t = &t1;
}

/**
 * @brief Accesseur pour obtenir l'objet Interaction associé.
 * @return Référence vers l'objet Interaction.
 */
Interaction AssociationInteractionTodo::getInteraction() {
    return *i;
}

/**
 * @brief Setter pour définir l'objet Interaction associé.
 * @param i1 Nouvel objet Interaction.
 */
void AssociationInteractionTodo::setInteraction(Interaction &i1) {
    this->i = &i1;
}

/**
* @brief Convertit la classe AssociationInteractionTodo en un objet JSON.
* @return Objet JSON représentant la classe AssociationInteractionTodo.
*/
QJsonObject AssociationInteractionTodo::toJsonObject() const {
    QJsonObject associationObject;

    QJsonObject todoObject = t->toJsonObject();
    associationObject["todo"] = todoObject;

    QJsonObject interactionObject = i->toJsonObject();
    associationObject["interaction"] = interactionObject;

    return associationObject;
}
