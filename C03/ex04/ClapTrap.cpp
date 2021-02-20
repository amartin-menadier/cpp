#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	ClapTrap("with no name");
}

ClapTrap::ClapTrap(std::string name) : m_name(name), m_hitPoints(0), m_maxHitPoints(0), m_energyPoints (0), m_maxEnergyPoints(0), m_level(1), m_meleeAttackDamage (0),m_rangedAttackDamage (0), m_armorDamageReduction(0)
{
	std::cout << "CL4P-TP Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << m_name << " died (Destructor called)" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << m_name << " attacks " << target << " at range, causing " << m_rangedAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << m_name << " attacks " << target << " in a melee attack, causing " << m_meleeAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "CL4P-TP " << m_name << " takes " << amount << " points of damage!" << std::endl;
	if (amount > m_hitPoints)
		amount = m_hitPoints;
	m_hitPoints -= amount;	
	std::cout << "CL4P-TP " << m_name << " has now "<< m_hitPoints << " points of life!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (m_hitPoints + amount > m_maxHitPoints)
		amount = m_maxHitPoints - m_hitPoints;
	m_hitPoints += amount;
	std::cout << "CL4P-TP " << m_name << " was repaired and recovered "<< amount << " points of life!" << std::endl;
	std::cout << "CL4P-TP " << m_name << " has now "<< m_hitPoints << " points of life!" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ClapTrap::getName()
{
	return (m_name);
}


/* ************************************************************************** */