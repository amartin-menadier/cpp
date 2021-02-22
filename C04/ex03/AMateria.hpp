#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

	public:
		AMateria(std::string const & type);
		virtual ~AMateria();

		AMateria( AMateria const & src );
		AMateria &		operator=( AMateria const & rhs );

		
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string		_type;
		unsigned int	_xp;

	private:
		AMateria();

};


#endif /* ******************************************************** AMATERIA_H */

