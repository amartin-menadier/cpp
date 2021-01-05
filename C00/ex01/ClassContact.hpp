/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 13:16:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 08:00:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class	Contact{
	
public:

	Contact();
	~Contact();
	
	void	print_entry_id(int index) const;

	std::string const &getFirst_name(void) const;
	std::string const &getLast_name(void) const;
	std::string const &getNickname(void) const;
	std::string const &getPostal_address(void) const;
	std::string const &getEmail_address(void) const;
	std::string const &getPhone_number(void) const;
	std::string const &getLogin(void) const;
	std::string const &getBirthdate(void) const;
	std::string const &getFavorite_meal(void) const;
	std::string const &getUnderwear_color(void) const;
	std::string const &getDarkest_secret(void) const;

	void set_first_name(std::string first_name);
	void set_last_name(std::string last_name);
	void set_nickname(std::string nickname);
	void set_postal_address(std::string postal_address);
	void set_email_address(std::string email_address);
	void set_phone_number(std::string phone_number);
	void set_login(std::string login);
	void set_birthdate(std::string birthdate);
	void set_favorite_meal(std::string favorite_meal);
	void set_underwear_color(std::string underwear_color);
	void set_darkest_secret(std::string _darkest_secret);

private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	login;
	std::string	birthdate;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
};

#endif
