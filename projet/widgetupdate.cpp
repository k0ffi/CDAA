/**
 * @file widgetupdate.cpp
 * @brief Implémentation des méthodes de la classe WidgetUpdate.
 */

#include "widgetupdate.h"
#include "ui_widgetupdate.h"
#include <QDebug>

/**
 * @brief Constructeur de la classe WidgetUpdate.
 * @param parent Pointeur vers le widget parent (par défaut, nullptr).
 */
WidgetUpdate::WidgetUpdate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetUpdate)
{
    ui->setupUi(this);
    QObject::connect(ui->bValider,SIGNAL(clicked()),this,SLOT(updateContact()));
    ui->bValider->setDisabled(true);
    connect(ui->oNom,SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
    connect(ui->oPrenom,SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
    connect(ui->nNom,SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
    connect(ui->nPrenom,SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
    connect(ui->nEntreprise,SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
    connect(ui->nPhoto,SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
    connect(ui->nEmail,SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
}

/**
 * @brief Destructeur de la classe WidgetUpdate.
 */
WidgetUpdate::~WidgetUpdate()
{
    delete ui;
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton de validation.
 *
 * Crée un objet Contact avec les informations du contact à mettre à jour et un nouvel objet Contact avec les nouvelles informations.
 * Émet un signal pour mettre à jour le contact, puis efface les champs de saisie et émet un signal pour actualiser la liste.
 */
void WidgetUpdate::updateContact()
{
    Contact c;
    QString nom = ui->oNom->text();
    c.setNom(nom.toStdString());
    QString prenom = ui->oPrenom->text();
    c.setPrenom(prenom.toStdString());

    Contact newc;
    nom = ui->nNom->text();
    newc.setNom(nom.toStdString());
    prenom = ui->nPrenom->text();
    newc.setPrenom(prenom.toStdString());
    QString entreprise = ui->nEntreprise->text();
    newc.setEntreprise(entreprise.toStdString());
    QString photo = ui->nPhoto->text();
    newc.setUrlPhoto(photo.toStdString());
    QString email = ui->nEmail->text();
    newc.setMail(email.toStdString());
    sdate dateActuelle = obtenirDateCourante();
    newc.setCreation(dateActuelle);

    emit sigUpdateContact(c, newc);

    ui->oNom->clear();
    ui->oPrenom->clear();

    ui->nNom->clear();
    ui->nPrenom->clear();
    ui->nEntreprise->clear();
    ui->nPhoto->clear();
    ui->nEmail->clear();

    emit sigActualiserListe();
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton d'annulation.
 *
 * Ferme la fenêtre de saisie et efface les champs de saisie.
 */
void WidgetUpdate::on_bAnnuler_clicked()
{
    this->close();

    ui->oNom->clear();
    ui->oPrenom->clear();

    ui->nNom->clear();
    ui->nPrenom->clear();
    ui->nEntreprise->clear();
    ui->nPhoto->clear();
    ui->nEmail->clear();
}

/**
 * @brief Slot appelé lorsqu'un champ de saisie de texte est modifié.
 *
 * Active ou désactive le bouton de validation en fonction de la présence de texte dans les champs.
 */
void WidgetUpdate::activerBoutonValider()
{
    ui->bValider->setEnabled(!ui->oNom->text().isEmpty() && !ui->oPrenom->text().isEmpty() && !ui->nNom->text().isEmpty() && !ui->nPrenom->text().isEmpty() && !ui->nEntreprise->text().isEmpty()
                             && !ui->nPhoto->text().isEmpty() && !ui->nEmail->text().isEmpty());
}
