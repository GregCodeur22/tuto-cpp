#include "phoneBook.h"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook() : index(0), contactCount(0) {}

void PhoneBook::addContact()
{

	string first, last, nick, phone, secret;

	cout << "Firstname: ";
	getline(cin, first);
	while (first.empty())
	{
		cout << "Le champ ne peut pas être vide. Firstname: ";
		getline(cin, first);
	}

	cout << "Lastname: ";
	getline(cin, last);
	while (last.empty())
	{
		cout << "Le champ ne peut pas être vide. Lastname: ";
		getline(cin, last);
	}

	cout << "Nickname: ";
	getline(cin, nick);
	while (nick.empty())
	{
		cout << "Le champ ne peut pas être vide. Nickname: ";
		getline(cin, nick);
	}

	cout << "Phone: ";
	getline(cin, phone);
	while (phone.empty())
	{
		cout << "Le champ ne peut pas être vide. Phone: ";
		getline(cin, phone);
	}

	cout << "Secret: ";
	getline(cin, secret);
	while (secret.empty())
	{
		cout << "Le champ ne peut pas être vide. Secret: ";
		getline(cin, secret);
	}

	// Insère à la position nextIndex
	contacts[index].setContact(first, last, nick, phone, secret);

	// Avance l’index
	index = (index + 1) % 8;

	// Incrémente le nombre de contacts si < 8
	if (contactCount < 8)
		contactCount++;
}

void PhoneBook::searchContact()
{
	if (contactCount == 0)
	{
		cout << "Aucun contact dans le repertoire " << endl;
		return;
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
	int index = atoi(input.c_str());
	
	if (index < 0 || index >= contactCount)
	{
		cout << "Index hors limite !" << endl;
		return;
	}
	contacts[index].displayContact();
}

string PhoneBook::truncate(string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}