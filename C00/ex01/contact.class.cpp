/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 13:47:40 by user42            #+#    #+#             */
/*   Updated: 2021/01/02 23:01:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::add()
{
	std::string buf;
	std::cout<<"First name:";
	std::getline(std::cin, this->first_name);
	std::cout<<"Last name:";
	std::getline(std::cin, this->last_name);
	std::cout<<"Nickname:";
	std::getline(std::cin, this->nickname);
	std::cout<<"Login:";
	std::getline(std::cin, this->_login);
	std::cout<<"Postal address:";
	std::getline(std::cin, this->postal_address);
	std::cout<<"Email address:";
	std::getline(std::cin, this->email_address);
	std::cout<<"Phone number:";
	std::getline(std::cin, this->phone_number);
	std::cout<<"Birthdate:";
	std::getline(std::cin, this->_birthdate);
	std::cout<<"Favorite meal:";
	std::getline(std::cin, this->_favorite_meal);
	std::cout<<"Underwear color:";
	std::getline(std::cin, this->_underwear_color);
	std::cout<<"Darkest secret:";
	std::getline(std::cin, this->_darkest_secret);
	std::cout<<std::endl<<"Contact added successfully!"<<std::endl<<">";
}

void	Contact::print_entry_contact_info(void) const
{
	std::cout<<this->first_name<<' '<<this->last_name<<std::endl;
	std::cout<<this->postal_address<<std::endl;
	std::cout<<this->email_address<<std::endl;
	std::cout<<this->phone_number<<std::endl;
}

void	Contact::print_entry_id(int index) const
{
	char	toprint[9];

	std::cout<<"|         " << index << '|';
	if (this->first_name.size() > 10)
	{
		this->first_name.copy(toprint, 9, 0);
		std::cout << toprint << ".|";
	}
	else
		std::cout << std::setw(10) << this->first_name << "|";
	if (this->last_name.size() > 10)
	{
		this->last_name.copy(toprint, 9, 0);
		std::cout << toprint << ".|";
	}
	else
		std::cout << std::setw(10) << this->last_name << "|";
	if (this->nickname.size() > 10)
	{
		this->nickname.copy(toprint, 9, 0);
		std::cout << toprint << ".|"<<std::endl;
	}
	else
		std::cout << std::setw(10) << this->nickname << "|"<<std::endl;
}

Contact::Contact (void)
{
	return ;
}

Contact::~Contact (void)
{
	return ;
}