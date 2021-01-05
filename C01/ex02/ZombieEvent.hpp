/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:49:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/04 14:42:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent{
	public:
		ZombieEvent();
		void	setZombieType(std::string given_type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump(void);
	private:
		std::string type;
};

#endif