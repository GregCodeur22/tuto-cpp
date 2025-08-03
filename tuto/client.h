#include <string>
#include <iostream>
using namespace std;
#include "perso.h"

class Client : public Personne
{
	private:
		string adresse;

	public:
		Client(string n, string p, int a, string adr);
		void display() override;
};