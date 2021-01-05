/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 08:28:02 by user42            #+#    #+#             */
/*   Updated: 2021/01/05 21:42:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde(int n, std::string type);
		~ZombieHorde();
		void announce() const;
	private:
		std::string	type;
		Zombie		*horde;
};

#endif