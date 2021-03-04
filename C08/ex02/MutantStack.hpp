#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack();
		MutantStack( MutantStack const & src );
		MutantStack(std::stack<T> const & src);
		virtual ~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return (this->c.begin()); }
		iterator end() { return (this->c.end()); }
		//c (protected member of stack) = underlying container

		MutantStack &		operator=( MutantStack const & rhs );

	private:

};


template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &src) : std::stack<T>(src)
{}

template <typename T>
MutantStack<T>::MutantStack(std::stack<T> const &src) : std::stack<T>(src)
{}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> const &src)
{
	this->c = src.c;
	return (*this);
}

#endif /* ***************************************************** MUTANTSTACK_H */