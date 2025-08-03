#include "perso.h"
#include <string>
using namespace std;

class Fournisseur : Personne
{
	private:
		string telephone;

	public:
		Fournisseur(string n, string p, int a, string tel);
		void display() override;
};