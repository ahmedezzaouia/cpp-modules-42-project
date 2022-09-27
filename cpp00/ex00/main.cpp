/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:18:42 by ahmez-za          #+#    #+#             */
/*   Updated: 2022/09/27 21:52:01 by ahmez-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int		i, j;
    
    i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			char c = toupper(av[i][j++]);
			std::cout << c;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}