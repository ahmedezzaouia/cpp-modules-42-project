/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 00:36:29 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/26 00:43:19 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string     str = "ahmed";
    std::string     *stringPTR = &str;
    std::string&    stringRFC = str;

    std::cout<<"str adress : "<<&str<< std::endl;
    std::cout<<"stringPTR adress : "<<stringPTR << std::endl;
    std::cout<<"stringRFC adress : "<<&stringRFC << std::endl;
    
    std::cout<<"***************************************"<<std::endl;
    
    std::cout<<"str value : "<<str<< std::endl;
    std::cout<<"stringPTR value : "<<*stringPTR << std::endl;
    std::cout<<"stringRFC value : "<<stringRFC << std::endl;
    
    return (0);
}