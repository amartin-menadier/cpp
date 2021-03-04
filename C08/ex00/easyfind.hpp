#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>
# include <vector>
# include <map>
# include <list>
# include <deque>
# include <algorithm>

class notFound : public std::exception
{
	public:
		virtual const char *what() const throw();
};

const char *notFound::what() const throw()
{
	return ("not found");
}

template<typename T>
int easyfind(T &container, int toFind)
{
	if(std::find(container.begin(), container.end(), toFind) != container.end())
		return (toFind);
	throw notFound();
}

#endif
