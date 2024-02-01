/**
 * @file widgetcontact.cpp
 * @brief Implémentation des méthodes de la classe WidgetContact.
 */

#include "widgetcontact.h"
#include "ui_widgetcontact.h"
#include "date.h"
#include <QDebug>

/**
 * @brief Constructeur de la classe WidgetContact.
 *
 * Constructeur de la classe WidgetContact, initialisant l'interface utilisateur et établissant les connexions des signaux et slots nécessaires.
 * @param parent Pointeur vers le widget parent.
 */
WidgetContact::WidgetContact(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetContact)
{
    ui->setupUi(this);

    // Connexions des signaux et slots
    QObject::connect(ui->bValider, SIGNAL(clicked()), this, SLOT(insertContact()));
    ui->bValider->setDisabled(true);
    QObject::connect(ui->nom, SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
    QObject::connect(ui->prenom, SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
    QObject::connect(ui->entreprise, SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
    QObject::connect(ui->photo, SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
    QObject::connect(ui->email, SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
}

/**
 * @brief Destructeur de la classe WidgetContact.
 *
 * Destructeur de la classe WidgetContact, responsable de libérer la mémoire allouée pour l'interface utilisateur.
 */
WidgetContact::~WidgetContact()
{
    delete ui;
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton de validation.
 *
 * Crée un nouvel objet Contact avec les informations saisies dans l'interface utilisateur, émet un signal pour ajouter le contact, puis efface les champs de saisie.
 */
void WidgetContact::insertContact()
{
    Contact c;
    QString nom = ui->nom->text();
    c.setNom(nom.toStdString());
    QString prenom = ui->prenom->text();
    c.setPrenom(prenom.toStdString());
    QString entreprise = ui->entreprise->text();
    c.setEntreprise(entreprise.toStdString());
    QString photo = ui->photo->text();
    c.setUrlPhoto(photo.toStdString());
    QString email = ui->email->text();
    c.setMail(email.toStdString());
    sdate dateActuelle = obtenirDateCourante();
    c.setCreation(dateActuelle);

    // Émission du signal pour ajouter le contact
    emit addContact(c);

    // Effacement des champs de saisie
    ui->nom->clear();
    ui->prenom->clear();
    ui->entreprise->clear();
    ui->photo->clear();
    ui->email->clear();

    // Émission du signal pour actualiser la liste des contacts
    emit sigActualiserListe();
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton d'annulation.
 *
 * Ferme la fenêtre et efface les champs de saisie.
 */
void WidgetContact::on_bannuler_clicked()
{
    this->close();
    ui->nom->clear();
    ui->prenom->clear();
    ui->entreprise->clear();
    ui->photo->clear();
    ui->email->clear();
}

/**
 * @brief Slot appelé lorsqu'un champ de saisie de texte est modifié.
 *
 * Active ou désactive le bouton de validation en fonction de la présence de texte dans tous les champs obligatoires.
 */
void WidgetContact::activerBoutonValider()
{
    ui->bValider->setEnabled(!ui->nom->text().isEmpty() && !ui->prenom->text().isEmpty() && !ui->entreprise->text().isEmpty() && !ui->photo->text().isEmpty() && !ui->email->text().isEmpty());
}
