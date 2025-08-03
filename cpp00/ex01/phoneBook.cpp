#include "phoneBook.h"
#include <iomanip>

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact()
{
	if (contactCount >= 8)
		cout << "repertoire plein !" << endl;
	else
	{
		string first, last, nick, phone, secret;

		cout << "Firstname: ";
		getline(cin, first);
		cout << "Lastname: ";
		getline(cin, last);
		cout << "Nickname: ";
		getline(cin, nick);
		cout << "Phone: ";
		getline(cin, phone);
		cout << "secret: ";
		getline(cin, secret);

		contacts[contactCount].setContact(first, last, nick, phone, secret);
		contactCount++;
	}
}

void PhoneBook::searchContact()
{
	if (contactCount == 0)
	{
		cout << "Aucun contact dans le repertoire " << endl;
		return ;
	}

	cout << setw(10) << "Index" << "|"
			 << setw(10) << "First Name" << "|"
			 << setw(10) << "Last Name" << "|"
			 << setw(10) << "Nick name" << "|"
			 << setw(10) << "phone" << "|"
			 << setw(10) << "secret" << endl;
	cout << "----------------------------------------------------------------" << endl;

	for (int i = 0; i < contactCount; i++)
	{
		cout << setw(10) << i << "|"
				 << setw(10) << truncate(contacts[i].getFirstName()) << "|"
				 << setw(10) << truncate(contacts[i].getLastName()) << "|"
				 << setw(10) << truncate(contacts[i].getNickName()) << "|"
				 << setw(10) << truncate(contacts[i].getphoneNumber()) << "|"
				 << setw(10) << truncate(contacts[i].getdarkSecret()) << endl;
	}

	cout << "Entrer l'index du contact a afficher " << endl;
	string input;
	getline(cin, input);

	int index = -1;

	try
	{
		index = stoi(input);
	}
	catch(...)
	{
		cout << "Entrer invalide !" << endl;
	}
	if (index < 0 || index >= contactCount)
	{
		cout << "index hors limite ! " << endl;
		return ;
	}
	contacts[index].displayContact();
}

string PhoneBook::truncate(string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}