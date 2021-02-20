#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"
# include <cstdlib>

class ZombieEvent {
	public:
		ZombieEvent();
		void	setZombieType(std::string given_type);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump(void);
	private:
		std::string type;
};

#endif