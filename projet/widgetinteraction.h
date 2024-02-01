/**
 * @file widgetinteraction.h
 * @brief Déclaration de la classe WidgetInteraction.
 */
#ifndef WIDGETINTERACTION_H
#define WIDGETINTERACTION_H

#include <QWidget>
#include "gestioncontacts.h"
#include "todo.h"
#include "associationinteractiontodo.h"

namespace Ui {
class WidgetInteraction;
}

/**
 * @brief Classe définissant un widget d'interaction.
 *
 * Ce widget permet de saisir une interaction avec un contact, y compris un éventuel ToDo associé.
 */
class WidgetInteraction : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur de la classe WidgetInteraction.
     * @param parent Pointeur vers le widget parent (par défaut, nullptr).
     */
    explicit WidgetInteraction(QWidget *parent = nullptr);

    /**
     * @brief Destructeur de la classe WidgetInteraction.
     */
    ~WidgetInteraction();

    /**
     * @brief Remplit la liste déroulante des contacts avec les contacts fournis.
     * @param lc Liste des contacts à afficher dans la liste déroulante.
     */
    void RemplirComboBox(GestionContacts &);

private:
    Ui::WidgetInteraction *ui;

private slots:
    /**
     * @brief Slot appelé lorsqu'on clique sur le bouton de validation.
     *
     * Crée un nouvel objet Contact avec les informations du contact sélectionné, un nouvel objet Interaction avec le contenu saisi et la date actuelle, puis émet des signaux pour ajouter l'interaction et, éventuellement, un ToDo associé.
     */
    void insertInteraction(std::string &, std::string &);

    /**
     * @brief Slot appelé lorsqu'on clique sur le bouton d'annulation.
     *
     * Efface le champ de contenu et ferme la fenêtre de saisie.
     */
    void on_bAnnuler_clicked();

    /**
     * @brief Slot appelé lorsqu'on clique sur le bouton de validation.
     *
     * Crée un nouvel objet Contact avec les informations du contact sélectionné, un nouvel objet Interaction avec le contenu saisi et la date actuelle, puis émet des signaux pour ajouter l'interaction et, éventuellement, un ToDo associé.
     */
    void on_bValider_clicked();

    /**
     * @brief Fonction privée pour extraire le contenu ToDo et la date du champ de saisie.
     *
     * Cette fonction analyse le contenu du champ de saisie à la recherche de balises @todo et @date, extrait le contenu ToDo et la date (le cas échéant), et émet un signal sigTodo avec ces informations.
     */
    void entreeTexte();

    /**
     * @brief Slot appelé lorsqu'un champ de saisie de texte est modifié.
     *
     * Active ou désactive le bouton de validation en fonction de la présence de texte dans le champ de contenu.
     */
    void activerBoutonValider();

signals:
    /**
     * @brief Signal émis pour ajouter une interaction à un contact.
     */
    void addInteractionToContact(Interaction &, Contact &);

    /**
     * @brief Signal émis pour ajouter un ToDo.
     */
    void addTodo(Todo &t);

    /**
     * @brief Signal émis avec le contenu et la date du ToDo lors de la saisie.
     */
    void sigTodo(std::string &, std::string &);

    /**
     * @brief Signal émis pour ajouter une AssociationInteractionTodo.
     */
    void addAIT(AssociationInteractionTodo &);
};

#endif // WIDGETINTERACTION_H
