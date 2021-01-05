/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 09:40:01 by user42            #+#    #+#             */
/*   Updated: 2021/01/04 10:13:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string given_name) : name(given_name)
{
	std::cout<<"A pony named " << this->name << " is born \\o/"<<std::endl;
}

Pony::~Pony()
{
	std::cout<<"A pony named " << this->name << " is dead :'("<<std::endl;
}
