/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:41:31 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/25 18:56:20 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    search(PhoneBook *book)
{
    std:: cout << "Search cmd"<< std::endl;
}

void	add(PhoneBook *book, int i)
{
	std::string str;
	
	std::cout << "enter contact's first name." << std::endl;
	getline(std::cin, str);
	book->book[i].setFirstName(str);
	std::cout << "enter contact's last name." << std::endl;
	getline(std::cin, str);
	book->book[i].setLastName(str);
	std::cout << "enter contact's nickname." << std::endl;
	getline(std::cin, str);
	book->book[i].setNickName(str);
	std::cout << "enter contact's secret." << std::endl;
	getline(std::cin, str);
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
		if (sdin == "SEARCH")
        {
			search(&book);
        }
		else if (sdin == "ADD")
		{
			if (i < 8)
				add(&book, i);
			else
				std::cout << "can't add this contact. more than 8 contacts" << std::endl;
		}
		else if (sdin == "EXIT")
			break;
		else
			std::cout << "Invalid command." << std::endl;
	}
    return (0);
}