/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 14:27:45 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 16:39:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Brain const	&Human::getBrain() const
{
	return (this->brain);
}

std::string	Human::identify() const
{
	return (this->brain.identify());
}
