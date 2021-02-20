#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string c_name, Weapon &c_weapon);

		void	attack(void) const;
	private:
		std::string name;
		Weapon &weapon;
};

#endif