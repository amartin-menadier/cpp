#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap( FragTrap const & src );
		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		void	vaulthunter_dot_exe(std::string const & target);
};

#endif /* ******************************************************** FragTrap_H */