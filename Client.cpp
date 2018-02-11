/********************************************
* Titre: Travail pratique #2 - Client.cpp
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timothée CHAUVIN
*******************************************/



#include "Client.h"

Client::Client(const string&  nom, const string& prenom, int identifiant, const string& codePostal, long date) :
	nom_{ nom },
	prenom_{ prenom },
	identifiant_{ identifiant },
	codePostal_{ codePostal },
	dateNaissance_{ date },
	monPanier_(nullptr)
	
{
}

Client::Client(const Client & client) :
	nom_(client.nom_),
	prenom_(client.prenom_),
	identifiant_(client.identifiant_),
	codePostal_(client.codePostal_),
	dateNaissance_(client.dateNaissance_),
	monPanier_(nullptr)
	
	
	
{

	cout << "Copy contrcutor has been called " << endl;

}



Client::~Client()
{
	if (monPanier_ != nullptr)
		delete monPanier_;
	cout << "Destuctor of mon_panier" << endl;
}

// Methodes d'acces
string Client::obtenirNom() const
{
	return nom_;
}

string Client::obtenirPrenom() const
{
	return prenom_;
}

int Client::obtenirIdentifiant() const
{
	return identifiant_;
}

string Client::obtenirCodePostal() const
{
	return codePostal_;
}

long Client::obtenirDateNaissance() const
{
	return dateNaissance_;
}

Panier * Client::obtenirPanier()  const
{
	return monPanier_;
;
}

// Methodes de modification
void  Client::modifierNom(const string& nom)
{
	nom_ = nom;
}

void Client::modifierPrenom(const string& prenom)
{
	prenom_ = prenom;
}

void Client::modifierIdentifiant(int identifiant)
{
	identifiant_ = identifiant;
}

void Client::modifierCodePostal(const string& codePostal)
{
	codePostal_ = codePostal;
}

void Client::modifierDateNaissance(long date)
{
	dateNaissance_ = date;
}

// Autres méthodes
void Client::acheter(Produit * prod)
{
	if (monPanier_ == nullptr) {

		monPanier_ = new Panier();
		this->monPanier_->ajouter(prod);

	}

	else {

		this->monPanier_->ajouter(prod);

	}
}

Client Client::operator=( Client & client)
{
	
	cout << "OVerload";

	if (this == &client) {

		return *this;
	}

	else{

		this->nom_ = client.nom_;
		this->prenom_ = client.prenom_;

		monPanier_ = new Panier();
	


	}




}

bool Client::operator==(const int id)
{
	if (this->identifiant_ == id) {

		return true;
	}

	else {

		return false;
	}
}






bool operator==(int id, Client & client)
{
	if (id == client.identifiant_) {

		return true;
	}

	else {

		return false;
	}
}

ostream & operator<<(ostream & os, const Client & client)
{
	// TODO: insert return statement here

	if ((client.monPanier_) != nullptr) {

		os << *(client.monPanier_);
	}


	else {

		os << "Le panier de " << client.prenom_ << ": " <<  " est vide !" << endl;

	}

	return os;
}
