#include "perso.h"
#include <string>
using namespace std;

class Salarie : public Personne
{
	private:
		int niveau;

	public:
		Salarie(string n, string p, int a, int niveau);
		void display() override;
};