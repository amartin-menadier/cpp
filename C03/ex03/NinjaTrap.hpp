#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{

	public:

		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap( NinjaTrap const & src );
		~NinjaTrap();

		void	ninjaShoebox(ClapTrap & victim);
		void	ninjaShoebox(FragTrap & victim);
		void	ninjaShoebox(ScavTrap & victim);
		void	ninjaShoebox(NinjaTrap & victim);


		NinjaTrap &		operator=( NinjaTrap const & rhs );

	private:

};

#endif /* ******************************************************* NINJATRAP_H */