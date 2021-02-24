/*
clang++ *.cpp -Werror -Wall -Wextra -std=c++98 -fsanitize=address && ./a.out && rm ./a.out
*/

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main()
{
	srand(time(NULL));
	std::cout << "-- Creating objects --  " << std::endl;
	FragTrap Goliath("Goliath");
	FragTrap David("David");
	ScavTrap Messenger("Messenger");
	NinjaTrap Ninja("Hattori Hanzo");
	NinjaTrap Ninja2("Ishikawa Goemon");
	std::cout << std::endl << "-- Creating Superman --  " << std::endl;
	SuperTrap Superman("Superman");

	std::cout << std::endl << "-- SuperTrap stats--  " << std::endl;
	Superman.show();

	std::cout << std::endl << "-- ScavTrap challenge (random)--  " << std::endl;
	Messenger.challengeNewcomer("David");

	std::cout << std::endl << "-- FragTrap tests --  " << std::endl;
	Goliath.rangedAttack("David");
	David.takeDamage(20);
	David.beRepaired(100);

	std::cout << std::endl << "-- ScavTrap challenge (random)--  " << std::endl;
	Messenger.challengeNewcomer("Goliath");

	std::cout << std::endl << "-- FragTrap tests --  " << std::endl;
	Goliath.meleeAttack("David");
	David.takeDamage(30);
	David.rangedAttack("Goliath");
	Goliath.takeDamage(20);
	David.takeDamage(200);

	std::cout << std::endl << "-- NinjaTrap attacks (different msg according to the ClapTrap type) --  " << std::endl;
	Ninja.ninjaShoebox(David);
	Ninja.ninjaShoebox(Messenger);
	Ninja.ninjaShoebox(Ninja2);
	
	std::cout << std::endl << "-- FragTrap random attacks --  " << std::endl;
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");
	Goliath.vaulthunter_dot_exe("David");

	std::cout << std::endl << "-- SuperTrap tests --  " << std::endl;
	Superman.beRepaired(20);
	Superman.takeDamage(200);
	Superman.beRepaired(200);
	Superman.rangedAttack("Goliath");
	Superman.meleeAttack("David");
	Superman.ninjaShoebox(David);
	Superman.ninjaShoebox(Messenger);
	Superman.ninjaShoebox(Ninja2);
	Superman.vaulthunter_dot_exe("David");
	Superman.vaulthunter_dot_exe("David");
	Superman.vaulthunter_dot_exe("David");

	std::cout << std::endl;

	std::cout << "-- END OF PROGRAM --  " << std::endl;
	return (0);
}
