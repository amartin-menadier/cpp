/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 18:09:35 by user42            #+#    #+#             */
/*   Updated: 2021/01/02 11:51:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	make_noise(std::string str)
{
	for (std::string::iterator i = str.begin(); i != str.end(); i++)
		if (*i >= 'a' && *i <= 'z')
			*i -= 32;
	std::cout << str;
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i (1);
		while (i < argc)
			make_noise(argv[i++]);
		std::cout << std::endl;
	}
	return (0);
}
