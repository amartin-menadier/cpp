#include "SuperTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperTrap::SuperTrap()
{
	SuperTrap("with no name");
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << "5UP4R-TP Constructor called" << std::endl;
	this->m_hitPoints = FragTrap::set_hitPoints();
	this->m_maxHitPoints = FragTrap::set_maxHitPoints();
	this->m_energyPoints = NinjaTrap::set_energyPoints();
	this->m_maxEnergyPoints = NinjaTrap::set_maxEnergyPoints();
	this->m_level = 1;
	this->m_meleeAttackDamage = NinjaTrap::set_meleeAttackDamage();
	this->m_rangedAttackDamage = FragTrap::set_rangedAttackDamage();
	this->m_armorDamageReduction = FragTrap::set_armorDamageReduction();
}

SuperTrap::SuperTrap( const SuperTrap & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperTrap::~SuperTrap()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperTrap &				SuperTrap::operator=( SuperTrap const & rhs )
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

void	SuperTrap::show(){
	std::cout << "Life: " << m_hitPoints << std::endl;
	std::cout << "Max Life: " << m_maxHitPoints << std::endl;
	std::cout << "Energy: " << m_energyPoints << std::endl;
	std::cout << "Max Life: " << m_maxEnergyPoints << std::endl;
	std::cout << "Melee Attack Damage: " << m_meleeAttackDamage << std::endl;
	std::cout << "Ranged Attack Damage: " << m_rangedAttackDamage << std::endl;
	std::cout << "Armor Damage Reduction: " << m_armorDamageReduction << std::endl;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */