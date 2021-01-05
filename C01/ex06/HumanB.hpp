/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:31:24 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 21:41:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string c_name);

		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
	private:
		std::string	name;
		Weapon *weapon;
};

#endif