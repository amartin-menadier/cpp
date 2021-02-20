#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap( FragTrap const & src );
		virtual ~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		void	vaulthunter_dot_exe(std::string const & target);

		unsigned int	set_hitPoints();
		unsigned int	set_maxHitPoints();
		unsigned int	set_rangedAttackDamage();
		unsigned int	set_armorDamageReduction();
};

#endif /* ******************************************************** FragTrap_H */