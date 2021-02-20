#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {
	public:
		Pony(std::string);
		~Pony();
	private:
		std::string	name;
};

#endif
