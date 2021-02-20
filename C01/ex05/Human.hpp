#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {	
	public:
		Human();
		std::string	identify() const;
		Brain const	&getBrain(void) const;
	private:
		Brain const brain;
};

#endif