#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <ctime>

class Span
{

	public:

		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		std::vector<int>	getStorage() const;

		void	addNumber(int);
		void	addManyNumbers(std::vector<int>::const_iterator, std::vector<int>::const_iterator);
		int		shortestSpan();
		int		longestSpan();

		class	FullContainer : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	NoSpan : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	RangeTooBig : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		Span();
		std::vector<int>	_storage;
		unsigned int		_N;
		unsigned int		_saved;


};

std::ostream &			operator<<( std::ostream & o, Span & i );

#endif /* ************************************************************ SPAN_H */
