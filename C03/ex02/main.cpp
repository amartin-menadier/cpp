/*
clang++ *.cpp -Werror -Wall -Wextra -std=c++98 -fsanitize=address && ./a.out && rm ./a.out
*/

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	srand(time(NULL));
	FragTrap Goliath("Goliath");
	FragTrap David("David");
	ScavTrap Messenger("Messenger");

	Goliath.rangedAttack("David");
	Messenger.challengeNewcomer("David");
	David.takeDamage(20);
	David.beRepaired(100);

	Messenger.challengeNewcomer("Goliath");
	Goliath.meleeAttack("David");
	David.takeDamage(30);
	David.rangedAttack("Goliath");
	Goliath.takeDamage(20);
	
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");

	David.takeDamage(200);
	return (0);
}
