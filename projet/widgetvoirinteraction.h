/**
 * @file widgetvoirinteraction.h
 * @brief Déclaration de la classe WidgetVoirInteraction.
 */
#ifndef WIDGETVOIRINTERACTION_H
#define WIDGETVOIRINTERACTION_H

#include <QWidget>
#include "gestioncontacts.h"

namespace Ui {
class WidgetVoirInteraction;
}

/**
 * @class WidgetVoirInteraction
 * @brief Représente un widget permettant de visualiser les interactions associées à un contact.
 */
class WidgetVoirInteraction : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur de la classe WidgetVoirInteraction.
     * @param parent Pointeur vers le widget parent.
     */
    explicit WidgetVoirInteraction(QWidget *parent = nullptr);

    /**
     * @brief Destructeur de la classe WidgetVoirInteraction.
     * Libère les ressources utilisées par le widget.
     */
    ~WidgetVoirInteraction();

    /**
     * @brief Remplit la liste déroulante avec les contacts fournis.
     * @param lc GestionContacts contenant la liste de contacts.
     */
    void RemplirComboBox(GestionContacts &lc);

private:
    Ui::WidgetVoirInteraction *ui;

private slots:
    /**
     * @brief Affiche les interactions du contact sélectionné dans le champ de texte brut.
     */
    void afficherInteractions();

    /**
     * @brief Slot appelé lorsque le bouton "Valider" est cliqué.
     * Appelle la fonction afficherInteractions().
     */
    void on_bValider_clicked();

    /**
     * @brief Slot appelé lorsque le bouton "Annuler" est cliqué.
     * Ferme la fenêtre actuelle.
     */
    void on_bAnnuler_clicked();

signals:
    /**
     * @brief Signal émis pour afficher les interactions d'un contact.
     * @param li GestionInteraction contenant la liste des interactions.
     * @param c Contact pour lequel les interactions doivent être affichées.
     */
    void afficheInteractions(GestionInteraction &li, Contact &c);
};

#endif // WIDGETVOIRINTERACTION_H
