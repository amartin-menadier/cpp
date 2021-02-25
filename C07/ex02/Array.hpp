#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <typename T>
class Array {

	public:
		Array();
		Array(unsigned int n);
		~Array();
	   	Array(const Array &other);

		unsigned int size() const;

		Array &operator=(Array const &other);
		T &operator[](unsigned int i);
		T const &operator[](unsigned int i) const;

		class OutOfBoundException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};

	private:
		T *_array;
		unsigned int 	_arraySize;

};

template<typename T>
Array<T>::Array() {
	_array = NULL;
	_arraySize = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	_array = new T[n];
	_arraySize = n;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template<typename T>
Array<T>::Array(const Array &other) {
	*this = other;
}

template<typename T>
Array<T> &Array<T>::operator=(Array const &other) {
	if (other._arraySize)
	{
		_array = new T[other._arraySize];
		for (unsigned int i = 0; i < other._arraySize; i++)
			_array[i] = other.array[i];
	}
	_arraySize = other._arraySize;
	return *this;
}

template<typename T>
unsigned int Array<T>::size() const{
	return _arraySize;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (!_array || i >= _arraySize)
		throw OutOfBoundException();
	return _array[i];
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const
{
	if (!_array || i >= _arraySize)
		throw OutOfBoundException();
	return _array[i];
}

template <typename T>
char const *Array<T>::OutOfBoundException::what() const throw()
{
	return "Error: you are trying to a reach an element out of bound";
}

#endif
