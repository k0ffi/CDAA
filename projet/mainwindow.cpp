/**
 * @file mainwindow.cpp
 * @brief Implémentation des méthodes de la classe MainWindow.
 */
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
/**
 * @brief Constructeur de la classe MainWindow.
 * @param parent Pointeur vers le widget parent.
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menubar->setNativeMenuBar(false);ui->menubar->setNativeMenuBar(false);

    QObject::connect(&wc,SIGNAL(addContact(Contact &)),&sql,SLOT(bddCreate(Contact &)));

    QObject::connect(&wr,SIGNAL(sigRemoveContact(Contact &)),&sql,SLOT(bddDelete(Contact &)));

    QObject::connect(&wu,SIGNAL(sigUpdateContact(Contact &,Contact &)),&sql,SLOT(bddUpdate(Contact &,Contact &)));

    QObject::connect(this,SIGNAL(afficheContacts(GestionContacts &)),&sql,SLOT(bddGetContacts(GestionContacts &)));

    QObject::connect(&wvi,SIGNAL(afficheInteractions(GestionInteraction &,Contact &)),&sql,SLOT(bddGetInteractions(GestionInteraction &, Contact &)));

    QObject::connect(&wi,SIGNAL(addInteractionToContact(Interaction &,Contact &)),&sql,SLOT(bddCreateInteractionToContact(Interaction &,Contact &)));
    QObject::connect(&wi,SIGNAL(addTodo(Todo &)),&sql,SLOT(bddCreateTodo(Todo &)));
    QObject::connect(&wi,SIGNAL(addAIT(AssociationInteractionTodo &)),&sql,SLOT(bddCreateAIT(AssociationInteractionTodo &)));

    QObject::connect(this,SIGNAL(sigInfosContact(Contact &)),&sql,SLOT(bddInfosContact(Contact &)));

    QObject::connect(this,SIGNAL(sigNbContacts(int &)),&sql,SLOT(bddNombreContacts(int &)));

    QObject::connect(&wc,SIGNAL(sigActualiserListe()),this,SLOT(actualiserListe()));
    QObject::connect(&wr,SIGNAL(sigActualiserListe()),this,SLOT(actualiserListe()));
    QObject::connect(&wu,SIGNAL(sigActualiserListe()),this,SLOT(actualiserListe()));


    QObject::connect(this,SIGNAL(sigInteractionEntre2Dates(std::string &,std::string &,GestionInteraction &)),&sql,SLOT(bddInteractionsEntre2Dates(std::string &,std::string &,GestionInteraction &)));


    QObject::connect(this,SIGNAL(sigAfficheTodos(Contact & ,std::list<Todo> &)),&sql,SLOT(bddGetTodos(Contact & ,std::list<Todo> &)));


    ui->textContact->setReadOnly(true);
    ui->textInteraction->setReadOnly(true);
    ui->textTodo->setReadOnly(true);


    GestionContacts lc;
    emit afficheContacts(lc);
    remplirListe(lc);

    exportToJson("../json/fichier.json");
}

/**
 * @brief Destructeur de la classe MainWindow.
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton de la barre "Ajouter un contact".
 */
void MainWindow::on_addContact_triggered()
{
    wc.show();
    GestionContacts lc;
    emit afficheContacts(lc);
    remplirListe(lc);
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton de la barre "Retirer un contact".
 */
void MainWindow::on_removeContact_triggered()
{
    wr.show();
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton de la barre "Mettre à jour un contact".
 */
void MainWindow::on_updateContact_triggered()
{
    wu.show();
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton de la barre "Ajouter une interaction".
 */
void MainWindow::on_addInteraction_triggered()
{
    wi.show();
    GestionContacts lc;
    emit afficheContacts(lc);
    wi.RemplirComboBox(lc);
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton de la barre "Voir les interactions".
*/
void MainWindow::on_interactionByContact_triggered()
{
    wvi.show();
    GestionContacts lc;
    emit afficheContacts(lc);
    wvi.RemplirComboBox(lc);
}

/**
* @brief Remplit la liste des contacts dans l'interface.
* @param lc GestionContacts contenant la liste des contacts à afficher.
*/
void MainWindow::remplirListe(GestionContacts & lc)
{
    ui->listContacts->clear();
    ui->listContacts_2->clear();
    for(Contact &c : lc.getListe())
    {
        ui->listContacts->addItem(QString::fromStdString(c.getNom())+" "+QString::fromStdString(c.getPrenom()));
        ui->listContacts_2->addItem(QString::fromStdString(c.getNom())+" "+QString::fromStdString(c.getPrenom()));
    }

}
/**
 * @brief Slot appelé lorsqu'on clique sur le bouton "Valider'.
 */
void MainWindow::on_bValider_clicked()
{
    remplirInfos();
}

/**
 * @brief Remplit les informations du contact sélectionné dans l'interface.
 */
void MainWindow::remplirInfos()
{
    Contact c;

    QStringList NomEtPrenom =  ui->listContacts->currentText().split(' ');

    QString nom = NomEtPrenom.at(0);
    QString prenom = NomEtPrenom.at(1);

    std::string n = nom.toStdString();
    std::string p = prenom.toStdString();

    c.setNom(n);
    c.setPrenom(p);

    emit sigInfosContact(c);

    QString texte;
    texte += "Entreprise : " +QString::fromStdString(c.getEntreprise())+ "\n";
    texte += "Mail : "+QString::fromStdString(c.getMail())+ "\n";
    std::string tempdate = convertirDateEnChaine(c.getCreation());
    texte += "Date de création : "+QString::fromStdString(tempdate) + "\n";



    ui->textContact->setPlainText(texte);

    QPixmap pixmap(QString::fromStdString(c.getUrlPhoto()));
    ui->Photo->setPixmap(pixmap);
    ui->Photo->setFixedSize(pixmap.size());


}
/**
 * @brief Slot appelé lorsqu'on clique sur le bouton "Voir le nombre de contacts".
 */
void MainWindow::on_bVoirNbContacts_clicked()
{
    int nbContacts = 0;
    emit sigNbContacts(nbContacts);

    ui->nbContacts->setText(QString::number(nbContacts)+" Contacts sont existants.");
}

/**
 * @brief Slot appelé pour actualiser la liste des contacts.
 */
void MainWindow::actualiserListe()
{
    GestionContacts lc;
    emit afficheContacts(lc);
    remplirListe(lc);
}
/**
 * @brief Slot appelé lorsqu'on clique sur le bouton "Voir les interactions".
 */
void MainWindow::on_bVoirInteractions_clicked()
{
    QString date1 = ui->dateDebInteraction->date().toString("dd/MM/yyyy");
    QString date2 = ui->dateFinInteraction->date().toString("dd/MM/yyyy");
    std::string dateDeb = date1.toStdString();
    std::string dateFin = date2.toStdString();

    GestionInteraction li;
    emit sigInteractionEntre2Dates(dateDeb,dateFin,li);

    QString texte;
    for(Interaction &i : li.getListe())
    {
        texte += "-Contenu de l'interaction : " +QString::fromStdString(i.getContenu());
        std::string tempdate = " \n-Date de l'interaction : " +convertirDateEnChaine(i.getDate());
        texte += QString::fromStdString(tempdate) + "\n\n";

    }
    ui->textInteraction->setPlainText(texte);
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton "Voir les todos".
 */
void MainWindow::on_bVoirTodos_clicked()
{
    std::list<Todo> lt;
    Contact c;

    QStringList NomEtPrenom =  ui->listContacts_2->currentText().split(' ');

    QString nom = NomEtPrenom.at(0);
    QString prenom = NomEtPrenom.at(1);

    std::string n = nom.toStdString();
    std::string p = prenom.toStdString();

    c.setNom(n);
    c.setPrenom(p);

    emit sigAfficheTodos(c,lt);
    QString texte;
    for(Todo &t : lt)
    {
        texte += "-Contenu du todo : " +QString::fromStdString(t.getContenu());
        std::string tempdate = " \n-Date du todo : " +convertirDateEnChaine(t.getDate());
        texte += QString::fromStdString(tempdate) + "\n\n";

    }
    ui->textTodo->setPlainText(texte);
}

/**
 * @brief Slot appelé lorsqu'on clique sur le bouton "Quitter".
 */
void MainWindow::on_bQuitter_clicked()
{
    this->close();
}

/**
 * @brief Convertit la classe MainWindow en un objet JSON.
 * @return Objet JSON représentant la classe MainWindow.
 */
QJsonObject MainWindow::toJsonObject() const {
    QJsonObject mainObject;

    QJsonArray contactsArray;
    for (const Contact &contact : lc.getListe()) {
        contactsArray.append(contact.toJsonObject());
    }
    mainObject["contacts"] = contactsArray;

    QJsonArray interactionsArray;
    for (const Interaction &interaction : li.getListe()) {
        interactionsArray.append(interaction.toJsonObject());
    }
    mainObject["interactions"] = interactionsArray;

    QJsonArray todosArray;
    for (const Todo &todo : lt) {
        todosArray.append(todo.toJsonObject());
    }
    mainObject["todos"] = todosArray;

    QJsonArray associationsArray;
    for (const AssociationInteractionTodo &association : lassociation) {
        associationsArray.append(association.toJsonObject());
    }
    mainObject["associations"] = associationsArray;

    return mainObject;
}

/**
 * @brief Convertit la classe MainWindow en un objet JSON.
 * @return Objet JSON représentant la classe MainWindow.
 */
bool MainWindow::exportToJson(const QString & fileName) {
    QJsonObject mainObject = toJsonObject();
    QJsonDocument jsonDocument(mainObject);

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
        qDebug() << "Erreur lors de l'ouverture du fichier pour l'exportation JSON.";
        return false;
    }

    QJsonArray contactsArray;
    GestionContacts lc;
    emit afficheContacts(lc);
    for (const Contact &contact : lc.getListe()) {
        QJsonObject contactObject;
        contactObject["Nom"] = QString::fromStdString(contact.getNom());
        contactObject["Prenom"] = QString::fromStdString(contact.getPrenom());
        contactsArray.append(contactObject);
    }

    file.write(jsonDocument.toJson());
    file.close();

    qDebug() << "Exportation JSON réussie.";
        return true;
}
