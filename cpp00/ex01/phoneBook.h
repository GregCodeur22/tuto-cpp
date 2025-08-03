#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.h"

class PhoneBook
{
	private:
		Contact contacts[8];
		int contactCount;

	public:
		PhoneBook();
		void addContact();
		void searchContact();
	
	private:
		string truncate(string str);
};

#endif