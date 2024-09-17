#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contactCount = 0;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::addContact()
{
	if (this->contactCount == 8)
	{
		contacts[7].savedContact();
	}
	else
	{
		contacts[this->contactCount].savedContact();
		contacts[this->contactCount].setIndex(this->contactCount);
		this->contactCount++;
	}
}

void	PhoneBook::searchContact()
{
	int i;
	std::string index;

	if (this->contactCount == 0)
	{
		std::cout << "No contacts saved!" << std::endl;
		return ;
	}
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick Name" << "|" << std::endl;
	for (i = 0; i < this->contactCount; i++)
	{
		contacts[i].showAllContacts();
	}
	std::cout << "Enter the index of the contact you want to display: ";
	std::getline(std::cin, index);
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
	{
		i = index[0] - '0';
		contacts[i].displayContact();
	}
	else
	{
		std::cout << "Invalid index!" << std::endl;
	}
}
