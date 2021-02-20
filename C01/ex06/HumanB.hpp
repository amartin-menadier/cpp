#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string c_name);

		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
	private:
		std::string	name;
		Weapon *weapon;
};

#endif