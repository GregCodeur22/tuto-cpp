#include <string>
#include <iostream>
using namespace std;

class Personne
{
	private:
		string nom;
		string prenoms;
		int age;

	public:
		Personne(string n, string p, int a);
		virtual void display();
		~Personne();
};