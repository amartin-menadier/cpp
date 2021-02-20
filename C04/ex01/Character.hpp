#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{

	public:

		Character(std::string const & name);
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		std::string		getName() const;
		int				getActionPoints() const;
		AWeapon			*getWeapon() const;

		void			recoverAP();
		void			equip(AWeapon* weapon);
		void			attack(Enemy* enemy);

	private:
		Character();
		std::string	_name;
		int			_actionPoints;
		AWeapon		*_weapon;
};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */