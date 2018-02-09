/********************************************
* Titre: Travail pratique #2 - Client.h
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timothée CHAUVIN
*******************************************/

#pragma once

#include <string>
#include "Panier.h"



class Client
{

public:
	Client(const string&  nom, const string& prenom, int identifiant, const string& codePostal, long date);
	Client(const Client& client);
	~Client();

	// TODO: Ajouter un constructeur par copie si necessaire

	string obtenirNom() const;
	string obtenirPrenom() const;
	int obtenirIdentifiant() const;
	string obtenirCodePostal() const;
	long obtenirDateNaissance() const;
	Panier* obtenirPanier() const;

	void modifierNom(const string& nom);
	void modifierPrenom(const string& prenom);
	void modifierIdentifiant(int identifiant);
	void modifierCodePostal(const string& codePostal);
	void modifierDateNaissance(long date);

	// Adapter l'implementation de la methode acheter si besion
	void acheter(Produit * prod);
	
	// TODO: Surcharger l'operateur d'affectation =

	Client operator= ( Client& client) ;


	// TODO: Surcharger l'operateur == (client == identifiant)

	bool operator== (const int id) ;
	// TODO: Surcharger l'operateur == (identifiant == client)

	friend bool operator== (int id, Client& client);

	// TODO: Cette methode doit être remplacée par la surcharge de l'opérateur <<
	
	friend ostream& operator<< (ostream& os, const  Client& client);
	

private:
	string nom_;
	string prenom_;
	int identifiant_;
	string codePostal_;
	long dateNaissance_;
	Panier *  monPanier_;


	

};
