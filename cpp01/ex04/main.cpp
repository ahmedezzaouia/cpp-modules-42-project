/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 00:24:55 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/27 01:57:24 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


void    ft_replace(std::string s2,std::string s1, std::string *line, int startIndex)
{
    (*line).erase(startIndex, s1.length());
    (*line).insert(startIndex, s2);
}

int main (int ac, char **av)
{
    std::string line;
    std::string s1;
    std::string s2;
    std::string filename;
    std::string newfile;
    std::fstream readfile;
    std::fstream writefile;


    if (ac != 4)
    {
        std::cerr<< "arguments not valide" <<std::endl;
        exit(1);    
    }
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    newfile = filename + ".replace";
    readfile.open(filename,std::ios::in);
    writefile.open(newfile,std::ios::out);
    
    if (!readfile.is_open() || !writefile.is_open() )
    {
        std::cerr<< "can't open file" <<std::endl;
        exit(1);
    }

    while (getline(readfile, line))
    {
        size_t index = line.find(s1);
        if (index != std::string::npos) {
           line.erase(startIndex, s1.length());
            line.insert(startIndex, s2);
        } 
        writefile << line + '\n';        
    }
    readfile.close();
    writefile.close();
}