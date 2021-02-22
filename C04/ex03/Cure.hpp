#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		Cure &		operator=( Cure const & rhs );

		std::string const & getType() const;
		unsigned int getXP() const; 

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

	private:

};

#endif /* ************************************************************ CURE_H */
