#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	// 42 MAIN (2 leaks if no "delete src" added to learnMateria)
/*	std::cout << "------------------" << std::endl;
	std::cout << "42 main" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());//leak if no "delete src" at the end of learnMateria
	src->learnMateria(new Cure());//idem

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete (tmp);//added to avoid 1 leak
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete (tmp);//added to avoid 1 leak

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
*/
	// More tests
	std::cout << "------------------" << std::endl;
	std::cout << "More tests" << std::endl;
	// --------------------------------------------------------------------------

	ICharacter		*Miguel = new Character("Miguel");
	IMateriaSource	*source = new MateriaSource();
	AMateria		*cold = new Ice();
	AMateria		*leaves = new Cure();
	source->learnMateria(cold);
	source->learnMateria(leaves);

	std::cout << "START" << std::endl << *((Character*)Miguel) << std::endl; //empty Miguel
	AMateria	*tmp;

	tmp = source->createMateria("cure");
	Miguel->equip(tmp);
	delete tmp;
	tmp = source->createMateria("ice");
	Miguel->equip(tmp);
	delete tmp;
	tmp = source->createMateria("cure");
	Miguel->equip(tmp);
	delete tmp;
	tmp = source->createMateria("AAAAAAA");//Error test on non-existing materia
	Miguel->equip(tmp);
	tmp = source->createMateria("cure");
	Miguel->equip(tmp);
	delete tmp;
	tmp = source->createMateria("ice");
	Miguel->equip(tmp);//overflow
	delete tmp;
	std::cout << "AFTER BEING EQUIPPED " << std::endl << *((Character*)Miguel) << std::endl;

// -------------------------------------------------------------------------
	ICharacter	*Roberto = new Character("Roberto");

	std::cout << "USE TESTS" << std::endl;
	Miguel->use(0, *Roberto); //XP increase on empty character
	Miguel->use(1, *Roberto); //XP increase on empty character
	std::cout << std::endl;

	std::cout << "AFTER USE " << std::endl << *((Character*)Miguel) << std::endl; 
	ICharacter	*Miguel_copy = new Character(*(Character*)Miguel); // Copy constructor test
	std::cout << "AFTER COPY " << std::endl << *((Character*)Miguel_copy) << std::endl; 
	// --------------------------------------------------------------------------

	std::cout << "UNEQUIP TESTS" << std::endl;
	Miguel->unequip(3); // unequip test /!\ creates one leak (see guidelines)
	Miguel->unequip(2); // unequip test /!\ creates one leak (see guidelines)
	Miguel->unequip(16); // unequip test with an overflow
	std::cout << *((Character*)Miguel) << std::endl; 

	// --------------------------------------------------------------------------
	delete Miguel;
	delete source;
	delete Miguel_copy;
	delete Roberto;
	delete cold;
	delete leaves;
	return (0);

}
/*Output:
$> clang++ -W -Wall -Werror *.cpp
$> ./a.out | cat -e
* shoots an ice bolt at bob *$
* heals bob's wounds *$
*/