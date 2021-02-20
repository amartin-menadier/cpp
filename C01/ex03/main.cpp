#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int		main(void)
{
	std::cout<<"That's the end of the world!"<<std::endl;

	ZombieHorde *first = new ZombieHorde(3, "first generation");
	first->announce();

	ZombieHorde *second = new ZombieHorde(7, "second generation");
	second->announce();

	delete first;
	delete second;
	return (EXIT_SUCCESS);
}