/**
 * @file widgetinteraction.cpp
 * @brief Implémentation des méthodes de la classe WidgetInteraction.
 */
#include "widgetinteraction.h"
#include "ui_widgetinteraction.h"
#include <QDebug>

/**
 * @brief Constructeur de la classe WidgetInteraction.
 * @param parent Pointeur vers le widget parent (par défaut, nullptr).
 */
WidgetInteraction::WidgetInteraction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetInteraction)
{
    ui->setupUi(this);

    // Connexion des signaux et des slots
    QObject::connect(this, SIGNAL(sigTodo(std::string &, std::string &)), this, SLOT(insertInteraction(std::string &, std::string &)));
    ui->bValider->setDisabled(true);
    QObject::connect(ui->Contenu, SIGNAL(textChanged(QString)), this, SLOT(activerBoutonValider()));
}

/**
 * @brief Destructeur de la classe WidgetInteraction.
 */
WidgetInteraction::~WidgetInteraction()
{
    delete ui;
}

/**
 * @brief Remplit la liste déroulante des contacts avec les contacts fournis.
 * @param lc Liste des contacts à afficher dans la liste déroulante.
 */
void WidgetInteraction::RemplirComboBox(GestionContacts &lc)
{
    ui->listContacts->clear();
    for (Contact &c : lc.getListe())
    {
        ui->listContacts->addItem(QString::fromStdString(c.getNom()) + " " + QString::fromStdString(c.getPrenom()));
    }
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton de validation.
 *
 * Crée un nouvel objet Contact avec les informations du contact sélectionné, un nouvel objet Interaction avec le contenu saisi et la date actuelle, puis émet des signaux pour ajouter l'interaction et, éventuellement, un ToDo associé.
 */
void WidgetInteraction::on_bValider_clicked()
{
    entreeTexte();
    ui->Contenu->clear();
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton d'annulation.
 *
 * Efface le champ de contenu et ferme la fenêtre de saisie.
 */
void WidgetInteraction::on_bAnnuler_clicked()
{
    ui->Contenu->clear();
    this->close();
}

/**
 * @brief Slot appelé lorsqu'un champ de saisie de texte est modifié.
 *
 * Active ou désactive le bouton de validation en fonction de la présence de texte dans le champ de contenu.
 */
void WidgetInteraction::activerBoutonValider()
{
    ui->bValider->setEnabled(!ui->Contenu->text().isEmpty());
}

/**
 * @brief Fonction privée pour extraire le contenu ToDo et la date du champ de saisie.
 *
 * Cette fonction analyse le contenu du champ de saisie à la recherche de balises todo et date, extrait le contenu ToDo et la date (le cas échéant), et émet un signal sigTodo avec ces informations.
 */
void WidgetInteraction::entreeTexte()
{
    QLineEdit *qle = ui->Contenu;
    QString text = qle->text().trimmed();
    QString contenu;
    QString date;

    QRegularExpression qreg("@todo(.*?)(?:@date(.*))?$");

    QRegularExpressionMatch match = qreg.match(text);

    if (match.hasMatch())
    {
        QString todoPart = match.captured(1);
        QString datePart = match.captured(2);

        if (!datePart.isEmpty())
        {
            contenu.append(todoPart.trimmed());
            date.append(datePart.trimmed());
        }
        else
        {
            contenu.append(todoPart.trimmed());
            sdate dateActuelle = obtenirDateCourante();
            std::string dateA = convertirDateEnChaine(dateActuelle);
            date.append(QString::fromStdString(dateA));
        }
    }

    std::string strcontenu = contenu.toStdString();
    std::string strdate = date.toStdString();
    emit sigTodo(strcontenu, strdate);
}

/**
 * @brief Slot appelé lorsqu'on émet le signal sigTodo.
 *
 * Crée un nouvel objet Contact avec les informations du contact sélectionné, un nouvel objet Interaction avec le contenu saisi et la date actuelle, puis émet des signaux pour ajouter l'interaction et, éventuellement, un ToDo associé.
 */
void WidgetInteraction::insertInteraction(std::string &contenuTodo, std::string &dateTodo)
{
    Contact c;
    QStringList NomEtPrenom = ui->listContacts->currentText().split(' ');

    QString nom = NomEtPrenom.at(0);
    QString prenom = NomEtPrenom.at(1);

    std::string n = nom.toStdString();
    std::string p = prenom.toStdString();

    c.setNom(n);
    c.setPrenom(p);

    Interaction i;
    i.setContenu((ui->Contenu->text()).toStdString());
    sdate dateActuelle = obtenirDateCourante();
    i.setDate(dateActuelle);

    emit addInteractionToContact(i, c);

    if (!contenuTodo.empty())
    {
        Todo t;
        t.setContenu(contenuTodo);
        sdate dateT = convertirChaineEnDate(dateTodo);
        t.setDate(dateT);
        emit addTodo(t);

        AssociationInteractionTodo ait;
        ait.setTodo(t);
        ait.setInteraction(i);
        emit addAIT(ait);
    }
}
