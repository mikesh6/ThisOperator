/********************************************
* Titre: Travail pratique #2 - Rayon.cpp
* Date: 25 janvier 2018
* Auteur: Timoth�e CHAUVIN
*******************************************/

#include "Rayon.h"
#include <vector>

Rayon::Rayon(const string& cat) :
	categorie_{ cat }
	
	
{
}

Rayon::~Rayon()
{
	
}

// Methodes d'acces
string Rayon::obtenirCategorie() const
{
	return categorie_;
}

/**Produit ** Rayon::obtenirTousProduits() const
{
	for (int i = 0; i < this->obtenirNombreProduits(); i++) {


	}
}
/


/*
Produit ** Rayon::obtenirTousProduits() const
{
	return Produit ;
}
*/

int Rayon::obtenirCapaciteProduits() const
{
	return tousProduits_.capacity();
	
}

int Rayon::obtenirNombreProduits() const
{
	return tousProduits_.size();
}

// Methodes de modification
void Rayon::modifierCategorie(const string& cat)
{
	categorie_ = cat;
}

Rayon Rayon::operator+=(Produit& produit) 
{
	
	this->tousProduits_.push_back(new Produit(produit));
	return Rayon();
	
}

int Rayon::compterDoublons(const Produit & produit)
{
	int duplicate = 0;
	for (int i = 0; i < this->obtenirNombreProduits(); i++) {
		if (tousProduits_[i]->obtenirNom() == produit.obtenirNom())
			duplicate++;
	}
	return duplicate;
}





ostream & operator<<(ostream & os, const Rayon & rayon)
{

	os << "Le rayon " << rayon.categorie_ << ": " << endl;
	os << "Le rayon " << rayon.obtenirNombreProduits() << ": " << endl;
	os << "Le rayon " << rayon.obtenirCapaciteProduits() << ": " << endl;
	
	
	
	for (int i = 0; i < rayon.obtenirNombreProduits(); i++) {
		os << "----> ";
		cout << *(rayon.tousProduits_[i]) << endl;
		
	}

	
	return os;
	// TODO: insert return statement here
}
