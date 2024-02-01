/**
 * @file widgetretirer.cpp
 * @brief Implémentation des méthodes de la classe WidgetRetirer.
 */
#include "widgetretirer.h"
#include "ui_widgetretirer.h"

/**
 * @brief Constructeur de la classe widgetRetirer.
 * @param parent Pointeur vers le widget parent (par défaut, nullptr).
 */
widgetRetirer::widgetRetirer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widgetRetirer)
{
    ui->setupUi(this);

    // Connexion des signaux et slots pour la gestion des événements
    QObject::connect(ui->bValider, SIGNAL(clicked()), this, SLOT(removeContact()));
    ui->bValider->setDisabled(true);
    QObject::connect(ui->nom, SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
    QObject::connect(ui->prenom, SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
}

/**
 * @brief Destructeur de la classe widgetRetirer.
 */
widgetRetirer::~widgetRetirer()
{
    delete ui;
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton de validation.
 *
 * Crée un nouvel objet Contact avec les informations du contact à retirer et émet un signal pour retirer le contact.
 * Efface ensuite les champs de saisie et émet un signal pour actualiser la liste.
 */
void widgetRetirer::removeContact()
{
    Contact c;
    QString nom = ui->nom->text();
    c.setNom(nom.toStdString());
    QString prenom = ui->prenom->text();
    c.setPrenom(prenom.toStdString());

    // Émission du signal pour retirer le contact
    emit sigRemoveContact(c);

    // Effacement des champs de saisie
    ui->nom->clear();
    ui->prenom->clear();

    // Émission du signal pour actualiser la liste
    emit sigActualiserListe();
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton d'annulation.
 *
 * Ferme la fenêtre de saisie et efface les champs de saisie.
 */
void widgetRetirer::on_bAnnuler_clicked()
{
    this->close();
    ui->nom->clear();
    ui->prenom->clear();
}

/**
 * @brief Slot appelé lorsqu'un champ de saisie de texte est modifié.
 *
 * Active ou désactive le bouton de validation en fonction de la présence de texte dans les champs de nom et prénom.
 */
void widgetRetirer::activerBoutonValider()
{
    ui->bValider->setEnabled(!ui->nom->text().isEmpty() && !ui->prenom->text().isEmpty());
}
