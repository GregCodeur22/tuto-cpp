#include "phoneBook.h"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook() : index(0), contactCount(0) {}

void PhoneBook::addContact()
{

	std::string first, last, nick, phone, secret;

	std::cout << "Firstname: ";
	getline(std::cin, first);
	while (first.empty())
	{
		std::cout << "Le champ ne peut pas être vide. Firstname: ";
		getline(std::cin, first);
	}

	std::cout << "Lastname: ";
	getline(std::cin, last);
	while (last.empty())
	{
		std::cout << "Le champ ne peut pas être vide. Lastname: ";
		getline(std::cin, last);
	}

	std::cout << "Nickname: ";
	getline(std::cin, nick);
	while (nick.empty())
	{
		std::cout << "Le champ ne peut pas être vide. Nickname: ";
		getline(std::cin, nick);
	}

	std::cout << "Phone: ";
	getline(std::cin, phone);
	while (phone.empty())
	{
		std::cout << "Le champ ne peut pas être vide. Phone: ";
		getline(std::cin, phone);
	}

	std::cout << "Secret: ";
	getline(std::cin, secret);
	while (secret.empty())
	{
		std::cout << "Le champ ne peut pas être vide. Secret: ";
		getline(std::cin, secret);
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
		std::cout << "Aucun contact dans le repertoire " << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|"
						<< std::setw(10) << "First Name" << "|"
						<< std::setw(10) << "Last Name" << "|"
						<< std::setw(10) << "Nick name" << "|"
						<< std::setw(10) << "phone" << "|"
						<< std::setw(10) << "secret" << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;

	for (int i = 0; i < contactCount; i++)
	{
		std::cout << std::setw(10) << i << "|"
							<< std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
							<< std::setw(10) << truncate(contacts[i].getLastName()) << "|"
							<< std::setw(10) << truncate(contacts[i].getNickName()) << "|"
							<< std::setw(10) << truncate(contacts[i].getphoneNumber()) << "|"
							<< std::setw(10) << truncate(contacts[i].getdarkSecret()) << std::endl;
	}

	std::cout << "Entrer l'index du contact a afficher " << std::endl;
	std::string input;

	getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "please enter a number" << std::endl;
		return;
	}
	for (size_t i = 0; i < input.size(); i++)
	{
		if (!isdigit(static_cast<unsigned char>(input[i])))
		{
			std::cout << "please enter a number" << std::endl;
			return;
		}
	}
	int index = atoi(input.c_str());

	if (index < 0 || index >= contactCount)
	{
		std::cout << "Index hors limite !" << std::endl;
		return;
	}
	contacts[index].displayContact();
}

std::string PhoneBook::truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}