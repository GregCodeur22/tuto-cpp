#include "client.h"

Client::Client(string n, string p, int a, string adr) : Personne(n, p, a)
{
	adresse = adr;
}

void Client::display()
{
	Personne::display();
	cout << "Mon addresse est " << adresse << endl;
}