/**
 * @file widgetvoirinteraction.cpp
 * @brief Implémentation des méthodes de la classe WidgeVoirInteraction.
 */

#include "widgetvoirinteraction.h"
#include "ui_widgetvoirinteraction.h"
#include <QDebug>

/**
 * @brief Constructeur de la classe WidgetVoirInteraction.
 * @param parent Pointeur vers le widget parent.
 */
WidgetVoirInteraction::WidgetVoirInteraction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetVoirInteraction)
{
    ui->setupUi(this);
    ui->plainTextEdit->setReadOnly(true);
}

/**
 * @brief Destructeur de la classe WidgetVoirInteraction.
 * Libère les ressources utilisées par le widget.
 */
WidgetVoirInteraction::~WidgetVoirInteraction()
{
    delete ui;
}

/**
 * @brief Remplit la liste déroulante avec les contacts fournis.
 * @param lc GestionContacts contenant la liste de contacts.
 */
void WidgetVoirInteraction::RemplirComboBox(GestionContacts &lc)
{
    ui->listContacts->clear();
    for (Contact &c : lc.getListe())
    {
        ui->listContacts->addItem(QString::fromStdString(c.getNom()) + " " + QString::fromStdString(c.getPrenom()));
    }
}

/**
 * @brief Affiche les interactions du contact sélectionné dans le champ de texte brut.
 */
void WidgetVoirInteraction::afficherInteractions()
{
    Contact c;

    // Extrait le nom et le prénom du contact sélectionné dans la liste déroulante.
    QStringList NomEtPrenom = ui->listContacts->currentText().split(' ');
    QString nom = NomEtPrenom.at(0);
    QString prenom = NomEtPrenom.at(1);

    // Convertit QString en std::string pour l'objet Contact.
    std::string n = nom.toStdString();
    std::string p = prenom.toStdString();

    c.setNom(n);
    c.setPrenom(p);

    GestionInteraction li;
    emit afficheInteractions(li, c);

    QString texte;
    for (auto &i : li.getListe())
    {
        std::string tempdate = convertirDateEnChaine(i.getDate());
        texte += "-Date : " + QString::fromStdString(tempdate) + " ";
        texte += "\n-Contenu de l'interaction : " + QString::fromStdString(i.getContenu()) + "\n\n";
    }
    ui->plainTextEdit->setPlainText(texte);
}

/**
 * @brief Slot appelé lorsque le bouton "Valider" est cliqué.
 * Appelle la fonction afficherInteractions().
 */
void WidgetVoirInteraction::on_bValider_clicked()
{
    afficherInteractions();
}

/**
 * @brief Slot appelé lorsque le bouton "Annuler" est cliqué.
 * Ferme la fenêtre actuelle.
 */
void WidgetVoirInteraction::on_bAnnuler_clicked()
{
    ui->plainTextEdit->setPlainText("");
    this->close();
}
