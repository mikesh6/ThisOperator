/********************************************
* Titre: Travail pratique #2 - Panier.cpp
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timothée CHAUVIN
*******************************************/


#include "Panier.h"

Panier::Panier() 
	{

	totalAPayer_ = 0;
}

Panier::~Panier()
{
}

// methodes d'accès

vector<Produit*> Panier::obtenirContenuPanier() const
{
	return vector<Produit*>();
}

int Panier::obtenirNombreContenu() const
{
	return contenuPanier_.size();
}

double Panier::obtenirTotalApayer() 
{

	for (int i = 0; i < this->obtenirNombreContenu(); i++) {

		totalAPayer_ += this->contenuPanier_[i]->obtenirPrix();
	}


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
	cout << "Livere panier" << endl;

}





Produit * Panier::trouverProduitPlusCher()
{
	// TODO: Implementez la methode

	
	Produit *cher = new Produit();
	double max = 0; 

	for (int i = 0; i < this->obtenirNombreContenu(); i++) {

		if (this->contenuPanier_[i]->obtenirPrix() > max) {

			max = contenuPanier_[i]->obtenirPrix();
			cher = contenuPanier_[i];

		 }
	}

	
	return cher;
	
	
}

ostream & operator<<(ostream & os,  Panier& panier)
{
	// TODO: insert return statement here
	

	os << "----> total a payer : " << panier.obtenirTotalApayer() << "$"<< endl;

	for (int i = 0; i < panier.contenuPanier_.size(); i++) {
		os << "----> ";
		os << *(panier.contenuPanier_[i]) << endl;


	}




	return os;


}
