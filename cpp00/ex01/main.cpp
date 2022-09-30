/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:41:31 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/30 02:41:47 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	fixW(std::string str)
{
	if (str.length() > 9)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void		displayContact(PhoneBook *book, int i)
{
	std::cout << "First name      : " << book->book[i].getFirstName() << std::endl;
	std::cout << "Last name       : " << book->book[i].getLastName() << std::endl;
	std::cout << "Nickname        : " << book->book[i].getNickName() << std::endl;
	std::cout << "Secret          : " << book->book[i].getPhoneNumber() << std::endl;
	std::cout << "Secret          : " << book->book[i].getSecret() << std::endl;

}


void    search(PhoneBook *book, int length)
{
   	int		i;
	std::string	selectedIndex;

	i = 0;
	if (length == 0)
	{
		std::cout << "No Contacts to show" << std::endl;
		return ;
	}
	while (i < length)
	{
		std::cout << "****************************************************" << std::endl;
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << fixW(book->book[i].getFirstName());
		std::cout << "|" << std::setw(10) << fixW(book->book[i].getLastName());
		std::cout << "|" << std::setw(10) << fixW(book->book[i].getNickName());
		std::cout << "|" << std::setw(10) << fixW(book->book[i].getSecret());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Select a Contact by it's Index" << std::endl;
	getline(std::cin, selectedIndex);
	if ((selectedIndex[0] >= '0' && selectedIndex[0] <= '9' && selectedIndex[1] == '\0') && stoi(selectedIndex) > length - 1)
	{
		std::cout << "Contact not Found" <<std::endl;
	}
	else
	{
		if (selectedIndex[0] >= '0' && selectedIndex[0] <= '9' && selectedIndex[1] == '\0')
		{
			displayContact(book, stoi(selectedIndex));
		}
	}
		std::cout <<std::endl <<std::endl;

}

bool is_digit(std::string phoneNumber)
{
	size_t i = 0;
	while (i < phoneNumber.length())
	{
		if (!(phoneNumber[i] >= '0' && phoneNumber[i] <= '9'))
			return (false);
		i++;
	}
	return (true);
}

void	add(PhoneBook *book, int i)
{
	std::string str;
	
	std::cout << "enter contact's first name." << std::endl;
	getline(std::cin, str);
	while (str[0] == '\0')
	{
		std::cout << "enter contact's first name." << std::endl;
		getline(std::cin, str);
	}
	book->book[i].setFirstName(str);
	
	std::cout << "enter contact's last name." << std::endl;
	getline(std::cin, str);
	while (str[0] == '\0')
	{
		std::cout << "enter contact's last name." << std::endl;
		getline(std::cin, str);
	}
	book->book[i].setLastName(str);
	
	std::cout << "enter contact's nickname." << std::endl;
	getline(std::cin, str);
	while (str[0] == '\0')
	{
		std::cout << "enter contact's nickname." << std::endl;
		getline(std::cin, str);
	}
	book->book[i].setNickName(str);
	
	std::cout << "enter contact's phone number." << std::endl;
	getline(std::cin, str);
	while (str[0] == '\0')
	{
		std::cout << "enter contact's phone number." << std::endl;
		getline(std::cin, str);
	}
	if (!is_digit(str))
	{
		std::cout << "can't get phone number" << std::endl;
		exit(1);
	}
	book->book[i].setPhoneNumber(str);
	
	std::cout << "enter contact's secret." << std::endl;
	getline(std::cin, str);
	while (str[0] == '\0')
	{
		std::cout << "enter contact's secret." << std::endl;
		getline(std::cin, str);
	}
	book->book[i].setSecret(str);
	
}

int main ()
{
	int		i;
	std::string	sdin;
    PhoneBook book;

	i = 0;
	while (1)
	{
        std::cout<< "choose one action (ADD, SEARCH, EXIT):"<< std::endl;
		getline(std::cin, sdin);
		if (sdin[0] == '\0')
			break;
		if (sdin == "SEARCH")
        {
			search(&book, i);
        }
		else if (sdin == "ADD")
		{
			if (i == 8)
				i = 0;
			add(&book, i++);
		}
		else if (sdin == "EXIT")
			break;
		else
			std::cout << "Invalid command." << std::endl;
	}
    return (0);
}