/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:44:42 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/25 18:59:35 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	Contact::getFirstName(void)
{
    return (firstName);
}
std::string	Contact::getLastName(void)
{
    return (lastName);
    
}
std::string	Contact::setPhoneNumber(void)
{
    return (phoneNumber);
}
std::string	Contact::getSecret(void)
{
    return (secret);
}
std::string	Contact::getNickName(void)
{
    return (nickName);
}

void		Contact::setFirstName(std::string str)
{
    firstName = str;
}
void		Contact::setLastName(std::string str)
{
    lastName = str;
}
void		Contact::setNickName(std::string str)
{
    nickName = str;
}
void		Contact::setPhoneNumber(std::string str)
{
    phoneNumber = str;
}
void		Contact::setSecret(std::string str)
{
    secret = str;
}
