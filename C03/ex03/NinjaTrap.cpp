#include "NinjaTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaTrap::NinjaTrap()
{
	NinjaTrap("with no name");
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Ninja-TP Constructor called" << std::endl;
	m_hitPoints = 60;
	m_maxHitPoints = 60;
	m_energyPoints  = 120;
	m_maxEnergyPoints = 120;
	m_meleeAttackDamage  = 60;
	m_rangedAttackDamage  = 5;
	m_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap( const NinjaTrap & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << "Ninja-TP " << m_name << " died (Destructor called)" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

NinjaTrap &				NinjaTrap::operator=( NinjaTrap const & rhs )
{
	if ( this != &rhs )
		*this = rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


void	NinjaTrap::ninjaShoebox(FragTrap & victim)
{
	std::cout << "Ninja-TP " << m_name << " attacks FR4G-TP " << victim.getName() << " causing it 60 damage points" << std::endl;
	victim.takeDamage(60);
}

void	NinjaTrap::ninjaShoebox(ScavTrap & victim)
{
	std::cout << "Ninja-TP " << m_name << " attacks SC4V-TP " << victim.getName() << " causing it 40 damage points" << std::endl;
	victim.takeDamage(40);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap & victim)
{
	std::cout << "Ninja-TP " << m_name << " attacks Ninja-TP " << victim.getName() << " causing it 30 damage points" << std::endl;
	victim.takeDamage(30);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */