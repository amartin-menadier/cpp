#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{

	public:

		
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon( AWeapon const & src );
		virtual ~AWeapon();

		AWeapon &		operator=( AWeapon const & rhs );

		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;

		virtual void	attack() const = 0;

	protected:
		std::string		_name;
		int				_apcost;
		int				_damage;

	private:
		AWeapon();
};

#endif /* ********************************************************* AWEAPON_H */

