// clang++ *.cpp -Werror -Wall -Wextra -std=c++98 -fsanitize=address && ./a.out && rm ./a.out
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int		main()
{
//SORCERER TESTS
	std::cout << std::endl << "Sorcerer tests" << std::endl << "---------------" << std::endl;
	Sorcerer	Elias("Elias", "The deceitful");
//	Sorcerer	Merlin();
	std::cout << Elias;

//VICTIM TESTS
	std::cout << std::endl << std::endl << "Victim tests" << std::endl << "---------------" << std::endl;
//	Victim		Yvain();
	Victim		Percival("Percival");
	std::cout << Percival;
	Elias.polymorph(Percival);

//PEON TESTS
	std::cout << std::endl << std::endl << "Peon tests" << std::endl << "---------------" << std::endl;
//	Peon		Govain();
	Peon		Karadoc("Karadoc");
	std::cout << Karadoc;
	Elias.polymorph(Karadoc);

//42 MAIN
	std::cout << std::endl << std::endl << "42 main" << std::endl << "---------------" << std::endl;

	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

//EOF = destructors called
	std::cout << std::endl << std::endl << "EOF" << std::endl << "---------------" << std::endl;
	return (0);
}
