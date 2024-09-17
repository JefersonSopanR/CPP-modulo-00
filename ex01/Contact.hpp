#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact 
{
	private:
		int 		index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string phoneNumber;
		std::string darkestSecret;

		std::string	getUserInput(std::string message);
		std::string	getPhoneNumber(std::string message);
		std::string	printMax10chars(std::string str);
	
	public:
		Contact();
		~Contact();
		void	setIndex(int index);
		int		getIndex();

		void		savedContact();
		void		displayContact();
		void		showAllContacts();
};


#endif
