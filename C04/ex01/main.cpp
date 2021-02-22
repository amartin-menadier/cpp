#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int		main()
{

//MY TESTS
	std::cout << std::endl << std::endl << "My tests" << std::endl << "---------------" << std::endl;
	Character* Jeannine = new Character("Jeannine");
	std::cout << *Jeannine;
	Enemy* scorpion = new RadScorpion();
	AWeapon* ptrr = new PlasmaRifle();
	AWeapon* ptrf = new PowerFist();
	std::cout << std::endl << "-- Jeannine is choosing a weapon... --" << std::endl;
	Jeannine->equip(ptrf);
	std::cout << *Jeannine;
	std::cout << std::endl << "-- Jeannine is starting the assault against the scorpion! --" << std::endl;
	Jeannine->attack(scorpion);
	std::cout << *Jeannine;
	Jeannine->equip(ptrr);
	std::cout << *Jeannine;
	Jeannine->attack(scorpion);
	std::cout << *Jeannine;
	Jeannine->attack(scorpion);
	std::cout << *Jeannine;
	std::cout << "-- Jeannine is now resting... --" << std::endl;
	Jeannine->recoverAP();
	std::cout << *Jeannine;
	std::cout << std::endl << "-- A mutant has appeared! --" << std::endl;
	Enemy* mutant = new SuperMutant();
	Jeannine->attack(mutant);
	std::cout << "-- Jeannine's weapon broke, she grabes another! --" << std::endl;
	Jeannine->equip(ptrf);
	std::cout << *Jeannine;
	Jeannine->attack(mutant);
	Jeannine->attack(mutant);
	Jeannine->attack(mutant);
	Jeannine->attack(mutant);
	std::cout << *Jeannine;
	std::cout << "-- The player has no energy left, he escapes. --" << std::endl;

	delete ptrr;
	delete ptrf;
	delete Jeannine;
	delete mutant;

//42 MAIN
	std::cout << std::endl << std::endl << "42 main" << std::endl << "---------------" << std::endl;

	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	delete (pf);
	delete (pr);
	delete (me);

//EOF = destructors called
	std::cout << std::endl << std::endl << "EOF" << std::endl << "---------------" << std::endl;
	return (0);
}
