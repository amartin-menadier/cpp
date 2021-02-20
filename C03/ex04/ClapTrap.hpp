#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName();

	protected:
		std::string		m_name;
		unsigned int	m_hitPoints;
		unsigned int	m_maxHitPoints;
		unsigned int	m_energyPoints;
		unsigned int	m_maxEnergyPoints;
		unsigned int	m_level;
		unsigned int	m_meleeAttackDamage;
		unsigned int	m_rangedAttackDamage;
		unsigned int	m_armorDamageReduction;

};

#endif /* ******************************************************** CLAPTRAP_H */