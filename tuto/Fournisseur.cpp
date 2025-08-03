#include "Fourniseur.h"

Fournisseur::Fournisseur(string n, string p, int a, string tel) : Personne(n, p, a)
{
	telephone = tel;
}

void Fournisseur::display()
{
	Personne:display();
	cout << "Mon telephone est " << telephone << endl;
}