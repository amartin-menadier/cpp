/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 13:16:08 by user42            #+#    #+#             */
/*   Updated: 2021/01/02 22:14:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class	Contact{
	
public:

	Contact();
	~Contact();
	
	void	add();
	void	print_entry_id(int index) const;
	void	print_entry_contact_info() const;
	
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	
private:
	
	std::string	_login;
	std::string	_birthdate;
	std::string	_favorite_meal;
	std::string	_underwear_color;
	std::string	_darkest_secret;
};

#endif
