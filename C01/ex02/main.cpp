#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	randomChump()
{
	std::string	names[] = {"Rick Grimes", "Shane Walsh", "Lori Grimes", "Andrea", "Dale Horvath", "Glenn Rhee", "Carl Grimes", "Daryl Dixon", "Carol Peletier", "Maggie Greene", "Michonne"};
	Zombie 		newDeadGuy = Zombie();
	
	srand(time(NULL));

	newDeadGuy.setname(names[10 - rand() % 11]);
	newDeadGuy.settype("weird ramdom generation");
	newDeadGuy.announce();
}

int	main(void)
{
	Zombie stackDeadGuy = Zombie();
	stackDeadGuy.setname("Jean-Mi");
	stackDeadGuy.settype("stack generation");
	stackDeadGuy.announce();

	ZombieEvent first_byte = ZombieEvent();
	first_byte.setZombieType("heap generation");
	Zombie *heap_dead_guy = first_byte.randomChump();

	randomChump();
	
	delete heap_dead_guy;
	return (0);
}
