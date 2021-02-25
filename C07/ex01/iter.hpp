#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

void	showChar(char &input)
{
	std::cout << input << " ";
}

template<typename T>
void	show(T &input)
{
	std::cout << input << " ";
}

template<typename T>
void	decrement(T &input)
{
	input--;
	std::cout << input << " ";
}

template<typename T>
void	increment(T &input)
{
	input++;
	std::cout << input << " ";
}

template <typename T>
void	iter(T array[], size_t size, void(*f)(T &))
{
	for (size_t i= 0; i < size; i++)
		f(array[i]);
}

#endif /* ************************************************************ ITER_H */