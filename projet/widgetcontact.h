/**
 * @file widgetcontact.h
 * @brief Déclaration de la classe WidgetContact.
 */

#ifndef WIDGETCONTACT_H
#define WIDGETCONTACT_H

#include <QWidget>
#include "contact.h"

namespace Ui {
class WidgetContact;
}

/**
 * @brief La classe WidgetContact représente un widget permettant de saisir les informations d'un contact.
 *
 * Ce widget fournit une interface graphique pour la saisie des informations d'un contact telles que le nom, le prénom, l'entreprise, la photo et l'e-mail.
 */
class WidgetContact : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur de la classe WidgetContact.
     * @param parent Pointeur vers le widget parent (par défaut, nullptr).
     */
    explicit WidgetContact(QWidget *parent = nullptr);

    Contact c;  // Objet Contact associé à ce widget

    /**
     * @brief Destructeur de la classe WidgetContact.
     */
    ~WidgetContact();

private slots:
    /**
     * @brief Slot appelé lorsqu'on clique sur le bouton de validation.
     *
     * Crée un nouvel objet Contact avec les informations saisies, émet un signal pour ajouter le contact, puis efface les champs de saisie.
     */
    void insertContact();

    /**
     * @brief Slot appelé lorsqu'on clique sur le bouton d'annulation.
     *
     * Ferme la fenêtre de saisie et efface les champs de saisie.
     */
    void on_bannuler_clicked();

    /**
     * @brief Slot appelé lorsqu'un champ de saisie de texte est modifié.
     *
     * Active ou désactive le bouton de validation en fonction de la présence de texte dans tous les champs obligatoires.
     */
    void activerBoutonValider();

signals:
    /**
     * @brief Signal émis pour ajouter un contact à la liste.
     * @param contact Référence vers l'objet Contact à ajouter.
     */
    void addContact(Contact &);

    /**
     * @brief Signal émis pour supprimer un contact de la liste.
     * @param contact Référence vers l'objet Contact à supprimer.
     */
    void removeContact(Contact &);

    /**
     * @brief Signal émis pour actualiser la liste des contacts.
     */
    void sigActualiserListe();

private:
    Ui::WidgetContact *ui;  // Interface utilisateur associée à ce widget
};

#endif // WIDGETCONTACT_H
