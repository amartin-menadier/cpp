#include "easyfind.hpp"

int		main()
{
	std::cout << "-- DEQUE TESTS --" << std::endl;
	std::deque<int> d(5,6);//double-ended queue of 5 elements worth 6 
	std::cout << "deque is: ";
	for (std::deque<int>::iterator i = d.begin(); i != d.end(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
	try
	{
		easyfind(d, 6);//shall work
		std::cout << "deque 6: found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "deque 6: " << e.what() << std::endl;
	}
	try
	{
		easyfind(d, 4);//shall not work
		std::cout << "deque 4: found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "deque 4: " << e.what() << std::endl;
	}
	std::cout << "**adding '4' at the end of deque**" << std::endl;	
	d.push_back(4);
	std::cout << "deque is: ";
	for (std::deque<int>::iterator i = d.begin(); i != d.end(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;	
	try
	{
		easyfind(d, 4);//shall work
		std::cout << "deque 4: found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "deque 4: " << e.what() << std::endl;
	}

	std::cout << std::endl << "-- VECTOR TESTS --" << std::endl;
	std::vector<int> v(9);//vector of 9 elements
	int a = 0;
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
		*i = a++;
	std::cout << "vector is: ";	
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
	try
	{
		easyfind(v, 4);//shall work
		std::cout << "vector 4: found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "vector 4: " << e.what() << std::endl;
	}	
	try
	{
		easyfind(v, 40);//shall not work
		std::cout << "vector 40: found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "vector 40: " << e.what() << std::endl;
	}

	std::cout << std::endl << "-- LIST TESTS --" << std::endl;
	std::list<int> l;
	l.push_back(6895);
	l.push_front(5);
	l.push_back(56);
	std::cout << "list is: ";	
	for (std::list<int>::iterator i = l.begin(); i != l.end(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
	try
	{
		easyfind(l, 40);//shall not work
		std::cout << "list 40: found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "list 40: " << e.what() << std::endl;
	}	
	try
	{
		easyfind(l, 6895);//shall work
		std::cout << "list 6895: found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "list 6895: " << e.what() << std::endl;
	}
	return (0);
}

