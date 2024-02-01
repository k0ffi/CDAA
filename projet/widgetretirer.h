/**
 * @file widgetretirer.h
 * @brief Déclaration de la classe WidgetRetirer.
 */
#ifndef WIDGETRETIRER_H
#define WIDGETRETIRER_H

#include <QWidget>
#include "contact.h"

namespace Ui {
class widgetRetirer;
}

/**
 * @brief La classe widgetRetirer gère l'interface pour retirer un contact.
 */
class widgetRetirer : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur de la classe widgetRetirer.
     * @param parent Pointeur vers le widget parent (par défaut, nullptr).
     */
    explicit widgetRetirer(QWidget *parent = nullptr);

    /**
     * @brief Destructeur de la classe widgetRetirer.
     */
    ~widgetRetirer();

private:
    Ui::widgetRetirer *ui;

private slots:
    /**
     * @brief Slot appelé lorsqu'on clique sur le bouton de validation.
     *
     * Crée un nouvel objet Contact avec les informations du contact à retirer et émet un signal pour retirer le contact.
     * Efface ensuite les champs de saisie et émet un signal pour actualiser la liste.
     */
    void removeContact();

    /**
     * @brief Slot appelé lorsqu'on clique sur le bouton d'annulation.
     *
     * Ferme la fenêtre de saisie et efface les champs de saisie.
     */
    void on_bAnnuler_clicked();

    /**
     * @brief Slot appelé lorsqu'un champ de saisie de texte est modifié.
     *
     * Active ou désactive le bouton de validation en fonction de la présence de texte dans les champs de nom et prénom.
     */
    void activerBoutonValider();

signals:
    /**
     * @brief Signal émis pour retirer un contact.
     * @param Contact à retirer.
     */
    void sigRemoveContact(Contact &);

    /**
     * @brief Signal émis pour demander la mise à jour de la liste des contacts.
     */
    void sigActualiserListe();
};

#endif // WIDGETRETIRER_H
