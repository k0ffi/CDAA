/**
 * @file widgetupdate.h
 * @brief Déclaration de la classe WidgetUpdate.
 */
#ifndef WIDGETUPDATE_H
#define WIDGETUPDATE_H

#include <QWidget>
#include "contact.h"

namespace Ui {
class WidgetUpdate;
}

/**
 * @brief Classe représentant un widget de mise à jour de contact.
 */
class WidgetUpdate : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur de la classe WidgetUpdate.
     * @param parent Pointeur vers le widget parent (par défaut, nullptr).
     */
    explicit WidgetUpdate(QWidget *parent = nullptr);

    /**
     * @brief Destructeur de la classe WidgetUpdate.
     */
    ~WidgetUpdate();

private:
    Ui::WidgetUpdate *ui; ///< Interface utilisateur.

signals:
    /**
     * @brief Signal émis pour mettre à jour un contact.
     * @param oldContact Contact à mettre à jour.
     * @param newContact Nouvelles informations du contact.
     */
    void sigUpdateContact(Contact &oldContact, Contact &newContact);

    /**
     * @brief Signal émis pour actualiser la liste de contacts.
     */
    void sigActualiserListe();

private slots:
    /**
     * @brief Slot appelé lorsqu'on clique sur le bouton de validation.
     *
     * Crée un objet Contact avec les informations du contact à mettre à jour et un nouvel objet Contact avec les nouvelles informations.
     * Émet un signal pour mettre à jour le contact, puis efface les champs de saisie et émet un signal pour actualiser la liste.
     */
    void updateContact();

    /**
     * @brief Slot appelé lorsqu'on clique sur le bouton d'annulation.
     *
     * Ferme la fenêtre de saisie et efface les champs de saisie.
     */
    void on_bAnnuler_clicked();

    /**
     * @brief Slot appelé lorsqu'un champ de saisie de texte est modifié.
     *
     * Active ou désactive le bouton de validation en fonction de la présence de texte dans les champs.
     */
    void activerBoutonValider();
};

#endif // WIDGETUPDATE_H
