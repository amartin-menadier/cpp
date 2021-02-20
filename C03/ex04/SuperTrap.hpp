#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

	public:

		SuperTrap();
		SuperTrap( std::string name );
		SuperTrap( SuperTrap const & src );
		~SuperTrap();

		SuperTrap &		operator=( SuperTrap const & rhs );

		void show();

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
};

#endif /* ******************************************************* SUPERTRAP_H */