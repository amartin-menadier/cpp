#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	ScavTrap("with no name");
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "SC4V-TP Constructor called" << std::endl;
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints  = 50;
	m_maxEnergyPoints = 50;
	m_meleeAttackDamage  = 20;
	m_rangedAttackDamage  = 15;
	m_armorDamageReduction = 3;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << m_name << " died (destructor called)" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
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

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << m_name << " attacks " << target << " at range, causing " << m_rangedAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << m_name << " attacks " << target << " in a melee attack, causing " << m_meleeAttackDamage << " points of damage!" << std::endl;
}

std::string randomChallenge()
{
	std::string names[] = {"watch 'les Princes de la téléréalité' for 24 consecutive hours", "invent a new challenge cause he has no idea of a new challenge", "pass 42 entry exam", "give a correct answer. Regardless of the question", "dance Carioca"};
	return (names[rand() % 5]);
}

void	ScavTrap::challengeNewcomer(std::string const & target) const
{
	std::cout << "SC4V-TP " << m_name << " challenges " << target << " to " << randomChallenge() << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */