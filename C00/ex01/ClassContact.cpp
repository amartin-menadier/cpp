/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 13:47:40 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 08:03:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact (void)
{
	return ;
}

Contact::~Contact (void)
{
	return ;
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

std::string const &Contact::getFirst_name(void) const
{
	return (this->first_name);
}
std::string const &Contact::getLast_name(void) const
{
	return (this->last_name);
}
std::string const &Contact::getNickname(void) const
{
	return (this->nickname);
}
std::string const &Contact::getLogin(void) const
{
	return (this->login);
}
std::string const &Contact::getPostal_address(void) const
{
	return (this->postal_address);
}
std::string const &Contact::getEmail_address(void) const
{
	return (this->email_address);
}
std::string const &Contact::getPhone_number(void) const
{
	return (this->phone_number);
}
std::string const &Contact::getBirthdate(void) const
{
	return (this->birthdate);
}
std::string const &Contact::getFavorite_meal(void) const
{
	return (this->favorite_meal);
}
std::string const &Contact::getUnderwear_color(void) const
{
	return (this->underwear_color);
}
std::string const &Contact::getDarkest_secret(void) const
{
	return (this->darkest_secret);
}

void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_login(std::string login)
{
	this->login = login;
}

void Contact::set_postal_address(std::string postal_address)
{
	this->postal_address = postal_address;
}

void Contact::set_email_address(std::string email_address)
{
	this->email_address = email_address;
}

void Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

void Contact::set_birthdate(std::string birthdate)
{
	this->birthdate = birthdate;
}

void Contact::set_favorite_meal(std::string favorite_meal)
{
	this->favorite_meal = favorite_meal;
}

void Contact::set_underwear_color(std::string underwear_color)
{
	this->underwear_color = underwear_color;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}
