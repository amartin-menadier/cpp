#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	srand(time(NULL));
}

void ZombieEvent::setZombieType(std::string given_type)
{
	this->type = given_type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *walkingdead = new Zombie();
	walkingdead->setname(name);
	walkingdead->settype(this->type);
	walkingdead->announce();
	return (walkingdead);
}

Zombie *ZombieEvent::randomChump()
{
	std::string names[] = {"Rick Grimes", "Shane Walsh", "Lori Grimes", "Andrea", "Dale Horvath", "Glenn Rhee", "Carl Grimes", "Daryl Dixon", "Carol Peletier", "Maggie Greene", "Michonne"};
	
	if (this->type == "")
		this->type = "NoType";
	return (newZombie(names[rand() % 11]));
}
