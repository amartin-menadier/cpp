#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();
		void settype(std::string type);
		void setname(std::string name);
		void announce() const;
		
	private:
		std::string type;
		std::string name;
};

#endif