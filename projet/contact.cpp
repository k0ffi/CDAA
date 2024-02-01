/**
 * @file contact.cpp
 * @brief Implémentation des méthodes de la classe Contact.
 */

#include "contact.h"

/**
 * @brief Constructeur par défaut de Contact.
 * @details Appelle le constructeur par défaut de la classe mère Personne.
 */
Contact::Contact() {
    Personne(); // Appelle le constructeur par défaut de la classe mère Personne
}

/**
 * @brief Constructeur avec paramètres de Contact.
 * @details Appelle le constructeur par défaut de la classe mère Personne.
 * @param n Nom du contact.
 * @param p Prénom du contact.
 * @param e Nom de l'entreprise du contact.
 */
Contact::Contact(const std::string &n, const std::string &p, const std::string &e) {
    Personne(); // Appelle le constructeur par défaut de la classe mère Personne
    setNom(n);
    setPrenom(p);
    entreprise = e;
    struct sdate now;
    now.jour = 11;
    now.mois = 12;
    now.annee = 13;
    setCreation(now); // Initialise la date de création avec des valeurs spécifiques.
}

/**
 * @brief Destructeur de Contact.
 * @details Efface la liste de numéros de téléphone et appelle le destructeur de la classe GestionInteraction.
 */
Contact::~Contact() {
    telephone.clear(); // Efface la liste de numéros de téléphone
    linteraction.~GestionInteraction(); // Appelle le destructeur de la classe GestionInteraction
}

/**
 * @brief Getter pour le nom du contact.
 * @return Nom du contact.
 */
std::string Contact::getNom() const {
    return nom;
}

/**
 * @brief Getter pour le prénom du contact.
 * @return Prénom du contact.
 */
std::string Contact::getPrenom() const {
    return prenom;
}

/**
 * @brief Getter pour le nom de l'entreprise associée au contact.
 * @return Nom de l'entreprise du contact.
 */
std::string Contact::getEntreprise() const {
    return entreprise;
}

/**
 * @brief Setter pour le nom de l'entreprise associée au contact.
 * @param e Nouveau nom de l'entreprise.
 */
void Contact::setEntreprise(const std::string &e) {
    entreprise = e;
}

/**
 * @brief Getter pour l'adresse e-mail du contact.
 * @return Adresse e-mail du contact.
 */
std::string Contact::getMail() const {
    return mail;
}

/**
 * @brief Setter pour l'adresse e-mail du contact.
 * @param m Nouvelle adresse e-mail.
 */
void Contact::setMail(const std::string &m) {
    mail = m;
}

/**
 * @brief Getter pour la liste de numéros de téléphone du contact.
 * @return Liste des numéros de téléphone du contact.
 */
std::list<unsigned> Contact::getTelephone() const {
    return telephone;
}

/**
 * @brief Setter pour la liste de numéros de téléphone du contact.
 * @param t Nouvelle liste de numéros de téléphone.
 */
void Contact::setTelephone(const std::list<unsigned> &t) {
    telephone = t;
}

/**
 * @brief Getter pour la structure de date de création du contact.
 * @return Date de création du contact.
 */
struct sdate Contact::getCreation() const {
    return creation;
}

/**
 * @brief Setter pour la structure de date de création du contact.
 * @param c Nouvelle date de création.
 */
void Contact::setCreation(const struct sdate &c) {
    creation = c;
}

/**
 * @brief Getter pour la liste d'interactions du contact.
 * @return GestionInteraction du contact.
 */
GestionInteraction Contact::getInteraction() const {
    return linteraction;
}

/**
 * @brief Setter pour la liste d'interactions du contact.
 * @param li Nouvelle gestion d'interactions.
 */
void Contact::setInteraction(const GestionInteraction &li) {
    linteraction = li;
}

/**
 * @brief Getter pour l'URL de la photo du contact.
 * @return URL de la photo du contact.
 */
std::string Contact::getUrlPhoto() const {
    return urlPhoto;
}

/**
 * @brief Setter pour l'URL de la photo du contact.
 * @param urlP Nouvelle URL de la photo.
 */
void Contact::setUrlPhoto(const std::string &urlP) {
    urlPhoto = urlP;
}

/**
 * @brief Setter pour la structure de date du contact.
 * @param d Nouvelle structure de date.
 */
void Contact::setDate(const struct sdate &d) {
    creation = d;
}

/**
 * @brief Surcharge de l'opérateur de comparaison == pour comparer deux contacts.
 * @param c Contact à comparer.
 * @return true si les contacts sont égaux, false sinon.
 */
bool Contact::operator==(const Contact &c) const {
    return (getEntreprise() == c.getEntreprise() &&
            getNom() == c.getNom() &&
            getPrenom() == c.getPrenom() &&
            getUrlPhoto() == c.getUrlPhoto());
}

/**
 * @brief Surcharge de l'opérateur << pour afficher un contact.
 * @param o Flux de sortie.
 * @param c Contact à afficher.
 * @return Flux de sortie mis à jour.
 */
std::ostream &operator<<(std::ostream &o, const Contact &c) {
    o << c.getNom() << " ";
    o << c.getPrenom() << " ";
    o << c.getEntreprise() << " ";
    o << c.getMail() << " ";
    o << c.getCreation().jour << " ";
    o << c.getCreation().mois << " ";
    o << c.getCreation().annee << " ";
    o << c.getUrlPhoto() << " ";
    std::list<unsigned> tel = c.getTelephone();
    auto it = tel.begin();
    while (it != tel.end()) {
        o << *it;
        ++it;
    }
    o << " ";
    o << "Ses interactions sont : ";
    o << c.getInteraction();
    return o;
}

/**
* @brief Convertit la classe Contact en un objet JSON.
* @return Objet JSON représentant la classe Contact.
*/
QJsonObject Contact::toJsonObject() const {
    QJsonObject contactObject;

    contactObject["nom"] = QString::fromStdString(getNom());
    contactObject["prenom"] = QString::fromStdString(getPrenom());
    contactObject["entreprise"] = QString::fromStdString(getEntreprise());
    contactObject["mail"] = QString::fromStdString(getMail());
    contactObject["urlPhoto"] = QString::fromStdString(getUrlPhoto());


    QJsonObject creationObject;
    creationObject["jour"] = static_cast<int>(getCreation().jour);
    creationObject["mois"] = static_cast<int>(getCreation().mois);
    creationObject["annee"] = static_cast<int>(getCreation().annee);
    contactObject["creation"] = creationObject;

    return contactObject;
}
