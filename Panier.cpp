/********************************************
* Titre: Travail pratique #2 - Panier.cpp
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timothée CHAUVIN
*******************************************/


#include "Panier.h"

Panier::Panier() 
	
{


}

Panier::~Panier()
{
}

// methodes d'accès
/*
Produit **  Panier::obtenirContenuPanier()const
{
	return ->contenuPanier_;
}
\*/


vector<Produit*> Panier::obtenirContenuPanier() const
{
	return vector<Produit*>();
}

int Panier::obtenirNombreContenu() const
{
	return contenuPanier_.size();
}

double Panier::obtenirTotalApayer() const
{
	return totalAPayer_;
}

void Panier::modifierTotalAPayer(double totalAPayer)
{
	totalAPayer_ = totalAPayer;
}

// méthodes de modification

// autres méthodes
Panier Panier::ajouter(Produit * prod)
{
	this->contenuPanier_.push_back(new Produit(*prod));
	return Panier();
	
}



void Panier::livrer()
{	
	this->contenuPanier_.clear();

}





Produit * Panier::trouverProduitPlusCher()
{
	// TODO: Implementez la methode

	return 0;
}

ostream & operator<<(ostream & os,  Panier& panier)
{
	// TODO: insert return statement here
	

	os << "----> total a payer : " << panier.totalAPayer_ << endl;

	for (int i = 0; i < panier.contenuPanier_.size(); i++) {
		os << "----> ";
		os << *(panier.contenuPanier_[i]) << endl;


	}




	return os;


}
