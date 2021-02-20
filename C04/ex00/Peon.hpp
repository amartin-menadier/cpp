#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{

	public:

		Peon(std::string name);
		Peon( Peon const & src );
		~Peon();

		Peon &		operator=( Peon const & rhs );
		
		virtual void	getPolymorphed() const;

	private:
		Peon();

};

std::ostream &			operator<<( std::ostream & o, Peon const & i );

#endif /* ************************************************************ PEON_H */