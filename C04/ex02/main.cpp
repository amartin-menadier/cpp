// clang++ *.cpp -Werror -Wall -Wextra -std=c++98 -fsanitize=address && ./a.out && rm ./a.out

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

int		main()
{

//MY TESTS
	
	std::cout << std::endl << "--------------" << std::endl;
	std::cout << "42 main test" << std::endl;
	ISpaceMarine *Micheline = new TacticalMarine;
	ISpaceMarine *Germaine = new AssaultTerminator;

	ISquad	*Squadptr = new Squad;
	Squadptr->push(Micheline);
	Squadptr->push(Germaine);
	for (int i = 0; i < Squadptr->getCount(); i++)
	{
		ISpaceMarine	*cur = Squadptr->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete Squadptr;
	std::cout << std::endl;

	std::cout << std::endl << "-------------------------" << std::endl;
	std::cout << "Greater nombers" << std::endl;

	Squad			*marines = new Squad;
	for (int i = 0; i < 5; i++)
		marines->push(new TacticalMarine);
	std::cout << std::endl;

	std::cout << "Assignation" << std::endl;
	Squad	*cpy;
	cpy = marines;

	std::cout << "Show" << std::endl;
	ISpaceMarine	*curr;
	for (int i = 0; i < cpy->getCount(); i++)
	{
		curr = cpy->getUnit(i);
		curr->battleCry();
		curr->rangedAttack();
		curr->meleeAttack();
	}
	std::cout << std::endl;
	std::cout << "Deleting Marines" << std::endl;
	delete marines;

	std::cout << std::endl << "---------------------" << std::endl;
	std::cout << "Test de cas d'erreurs" << std::endl;
	Squad			test1;
	ISpaceMarine	*joseph = new AssaultTerminator;

	test1.push(joseph);
	test1.push(joseph);
	test1.push(NULL);
	std::cout << "Taille de test1 = " << test1.getCount() << std::endl;
	std::cout << std::endl << "---------------------------------" << std::endl;

//EOF = destructors called
	std::cout << std::endl << std::endl << "EOF" << std::endl << "---------------" << std::endl;
	return (0);
}
