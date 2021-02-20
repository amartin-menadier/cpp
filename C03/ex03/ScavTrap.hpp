#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		void	challengeNewcomer(std::string const & target) const;

};

#endif /* ******************************************************** SCAVTRAP_H */