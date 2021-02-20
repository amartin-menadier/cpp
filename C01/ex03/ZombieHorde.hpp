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