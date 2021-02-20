#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:
		
		Victim(std::string name);
		Victim( Victim const & src );
		~Victim();

		Victim &		operator=( Victim const & rhs );

		virtual void	getPolymorphed() const;
		std::string		get_name() const;

	protected:
		std::string _name;
	
	private:
		Victim();

};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif /* ********************************************************** VICTIM_H */
