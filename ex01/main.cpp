#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string userInput;

	while (1)
	{
		std::cout << "Enter a command: ";
		if (!std::getline(std::cin, userInput))
		{
			break ;
		}
		if (userInput == "ADD")
			phoneBook.addContact();
		else if (userInput == "SEARCH")
			phoneBook.searchContact();
		else if (userInput == "EXIT")
			break ;
		else
			std::cout << "Invalid command!" << std::endl;
	}
}