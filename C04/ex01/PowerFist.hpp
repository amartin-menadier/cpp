#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{

	public:

		PowerFist();
		PowerFist( PowerFist const & src );
		virtual ~PowerFist();

		PowerFist &		operator=( PowerFist const & rhs );

		virtual void	attack() const;

	private:

};


#endif /* ****************************************************** POWERFIST_H */