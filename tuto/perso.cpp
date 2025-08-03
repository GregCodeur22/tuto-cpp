#include "perso.h"

Personne::Personne(string n, string p, int a)
{
	nom = n;
	prenoms = p;
	age = a;
}

void Personne::display()
{
	cout << "Nom = " << nom << "Prenoms = " << prenoms << "Age = " << age << endl;
}

Personne::~Personne()
{
	cout << "Nous sommes navres de la disparition de " << nom << endl;
}