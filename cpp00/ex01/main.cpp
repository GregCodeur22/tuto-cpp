#include <iostream>
#include <string>
#include <string>
using namespace std;
#include "contact.h"
#include "phoneBook.h"

int main()
{
	string command;
	PhoneBook pb;
	Contact c;

	while(true)
	{
		cout << "Entrer une commande (ADD, SEARCH, EXIT): ";
		getline(cin, command);

		if (command == "ADD")
		{
			cout << "vous avez choisi ADD" << endl;
			pb.addContact();
		}
		else if (command == "SEARCH")
		{
			cout << "vous avez choisi SEARCH" << endl;
			pb.searchContact();
		}
		else if (command == "EXIT")
		{
			cout << "vous avez choisi EXIT aurevoir" << endl;
			break;
		}
		else
		{
			cout << "command invalide reesayer " << endl;
		}
	}

	return (0);
}