#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::setIndex(int index)
{
	this->index = index;
}

int	Contact::getIndex()
{
	return (this->index);
}

std::string	Contact::printMax10chars(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";  
    return str;
}

std::string Contact::getUserInput(std::string message)
{
    std::string userInput;

    std::cout << message << std::flush;

    while (true)
    {
        if (!std::getline(std::cin, userInput))
        {
            std::cout << "\nEOF detected. Exiting..." << std::endl;
            break ;
        }
        if (userInput.empty() || std::isspace(userInput[0]))
            std::cout << "Please enter a valid input: " << std::flush;
        else
            break;
    }
    return userInput;
}

std::string Contact::getPhoneNumber(std::string message)
{
	std::string userInput;

    std::cout << message << std::flush;

    while (std::getline(std::cin, userInput))
    {
        bool isValid = true;

        for (size_t i = 0; i < userInput.length(); i++)
		{
			if (!std::isdigit(userInput[i]))
			{
				isValid = false;
				break;
			}
		}
        if (userInput.empty() || !isValid)
        {
            std::cout << "Please enter a valid phone number: " << std::flush;
        }
        else
        {
            break;
        }
    }
    return userInput;
}

void	Contact::savedContact()
{
	this->firstName = getUserInput("Enter First Name: ");
	this->lastName = getUserInput("Enter Last Name: ");
	this->nickName = getUserInput("Enter Nick Name: ");
	this->phoneNumber = getPhoneNumber("Enter Phone Number: ");
	this->darkestSecret = getUserInput("Enter Darkest Secret: ");
	std::cout << "Contact saved!" << std::endl;
}

void	Contact::displayContact()
{
	int index;

	index = getIndex();
	if (this->firstName.empty() || this->lastName.empty() || this->nickName.empty())
	{
		std::cout << "Contact at the index don't exits!" << std::endl;
		return ;
	}
	std::cout << "Information for contact at index " << index << ":" << std::endl;
	std::cout << "First Name:\t" << this->firstName << std::endl;
	std::cout << "Last Name:\t" << this->lastName << std::endl;
	std::cout << "Nick Name:\t" << this->nickName << std::endl;
	std::cout << "Phone Number:\t" << this->phoneNumber << std::endl;
	std::cout << "Darkest Secret:\t" << this->darkestSecret << std::endl;
}

void	Contact::showAllContacts()
{
	int	index;
	index = getIndex();
	std::cout << "|" << std::setw(10) << index << "|";
	std::cout << std::setw(10) << printMax10chars(firstName) << "|";
	std::cout << std::setw(10) << printMax10chars(lastName) << "|";
	std::cout << std::setw(10) << printMax10chars(nickName) << "|" << std::endl;
}
