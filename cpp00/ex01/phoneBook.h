#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.h"

class PhoneBook
{
	private:
		int index;
		int contactCount;
		Contact contacts[8];

	public:
		PhoneBook();
		void addContact();
		void searchContact();
	
	private:
		string truncate(string str);
};

#endif