/********************************************
* Titre: Travail pratique #2 - Produit.cpp
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timothee CHAUVIN
*******************************************/

#include "Produit.h"

Produit::Produit(const string& nom, int reference, double prix) :
	nom_{ nom },
	reference_{ reference },
	prix_{ prix }
{ }

// Methodes d'acces
string Produit::obtenirNom() const
{
	return nom_;
}

int Produit::obtenirReference() const
{
	return reference_;
}

double Produit::obtenirPrix() const
{
	return prix_;
}


// Methodes de modification
void Produit::modifierNom(const string& nom)
{
	nom_ = nom;
}

void Produit::modifierReference(int reference)
{
	reference_ = reference;
}

void Produit::modifierPrix(double prix)
{
	prix_ = prix;
}





bool Produit::operator>(const Produit & produit)
{
	if (prix_ > produit.prix_) {

		return true;

	}

	else {

		return false;
	}
}

bool Produit::operator<(const Produit & produit)
{
	if (prix_ < produit.prix_) {

		return true;

	}

	else {

		return false;
	}
}

bool Produit::operator==(const Produit & produit)
{

	if (nom_ == produit.nom_  && prix_ == produit.prix_ && reference_ == produit.reference_) {

		return true;
	}

	else {

		return false;
	}
	
}





istream & operator>>(istream & is, Produit & produit)
{
	// TODO: insert return statement here
	
	is >> produit.nom_;
	is >> produit.prix_;
	is >> produit.reference_;

	return is;
}

ostream & operator<<(ostream & os, const Produit & produit)
{
	// TODO: insert return statement here
	os << "nom : " << produit.nom_
		<< "\t ref : " << produit.reference_
		<< "\t prix : " << produit.prix_;

	
	return os;

}

