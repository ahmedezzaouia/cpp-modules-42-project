/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:55:25 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/30 02:39:38 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include<iostream>
#include <iomanip>
class Contact
{
    public:
        void		setFirstName(std::string str);
        void		setLastName(std::string str);
        void		setNickName(std::string str);
        void		setPhoneNumber(std::string str);
        void		setSecret(std::string str);
        
        std::string	getFirstName(void);
        std::string	getLastName(void);
        std::string	getPhoneNumber(void);
        std::string	getSecret(void);
        std::string	getNickName(void);

    private:
        std::string	firstName;
        std::string	lastName;
        std::string	nickName;
        std::string	phoneNumber;
        std::string	secret;
};



class PhoneBook
{
    public:
        Contact book[8];
        void    add(PhoneBook *book, int i);
        void    search(PhoneBook *book, int length);
};

#endif