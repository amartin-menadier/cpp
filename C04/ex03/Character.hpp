#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{

	public:

		Character(std::string name);
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		AMateria *getMateria(int i) const;


	private:
		Character();
		std::string	_name;
		AMateria	*_inventory[4];

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */

