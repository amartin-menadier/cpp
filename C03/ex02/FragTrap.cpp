#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
	FragTrap("with no name");
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FR4G-TP Constructor called" << std::endl;
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints  = 100;
	m_maxEnergyPoints = 100;
	m_level = 1;
	m_meleeAttackDamage  = 30;
	m_rangedAttackDamage  = 20;
	m_armorDamageReduction = 5;
}

FragTrap::FragTrap( const FragTrap & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << m_name << " died (Destructor called)" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << m_name << " attacks " << target << " at range, causing " << m_rangedAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << m_name << " attacks " << target << " in a melee attack, causing " << m_meleeAttackDamage << " points of damage!" << std::endl;
}

std::string randomAttack()
{
	std::string names[] = {"a loud fart", "a disguting amount of spit", "a boring poem from their French class", "nothing but bravoury", "a SEGFAULT"};
	return (names[rand() % 5]);
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (m_energyPoints < 25)
	{
		std::cout << "FR4G-TP " << m_name << " tried to attack " << target << " but does not have enough energy (25 points) left" << std::endl;	
		std::cout << "FR4G-TP " << m_name << " now has " << m_energyPoints << " energy points left" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << m_name << " attacks " << target << " with " << randomAttack() << std::endl;
		m_energyPoints -= 25;
		std::cout << "FR4G-TP " << m_name << " has " << m_energyPoints << " energy points left" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */