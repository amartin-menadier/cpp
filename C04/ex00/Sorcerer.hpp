#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{

	public:

		Sorcerer(std::string name, std::string title);
		Sorcerer( Sorcerer const & src );
		~Sorcerer();

		Sorcerer &		operator=( Sorcerer const & rhs );

		std::string		get_name() const;
		std::string		get_title() const;

		void			polymorph(Victim const &) const;

	private:
		Sorcerer();
		std::string _name;
		std::string _title;

};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif /* ******************************************************** SORCERER_H */
