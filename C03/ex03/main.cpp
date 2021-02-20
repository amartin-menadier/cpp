/*
clang++ *.cpp -Werror -Wall -Wextra -std=c++98 -fsanitize=address && ./a.out && rm ./a.out
*/

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main()
{
	srand(time(NULL));
	FragTrap Goliath("Goliath");
	FragTrap David("David");
	ScavTrap Messenger("Messenger");
	NinjaTrap Ninja("Hattori Hanzo");
	NinjaTrap Ninja2("Ishikawa Goemon");

	std::cout << std::endl;
	Messenger.challengeNewcomer("David");

	std::cout << std::endl;
	Goliath.rangedAttack("David");
	David.takeDamage(20);
	David.beRepaired(100);

	std::cout << std::endl;
	Messenger.challengeNewcomer("Goliath");

	std::cout << std::endl;
	Goliath.meleeAttack("David");
	David.takeDamage(30);
	David.rangedAttack("Goliath");
	Goliath.takeDamage(20);

	std::cout << std::endl;
	Ninja.ninjaShoebox(David);
	Ninja.ninjaShoebox(Messenger);
	Ninja.ninjaShoebox(Ninja2);
	
	std::cout << std::endl;
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");

	std::cout << std::endl;
	David.takeDamage(200);

	std::cout << std::endl;
	return (0);
}
