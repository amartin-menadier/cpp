#include "span.hpp"

int main()
{
	srand(time(NULL));

	std::cout << "-- BASIC TESTS -- " << std::endl;
	Span sp0 = Span(5);									//SP0
	sp0.addNumber(1000);
	sp0.addNumber(85);
	sp0.addNumber(-85);
	sp0.addNumber(-86);//minspan = -85 -(-86) = 1
	sp0.addNumber(-1000);//maxspan = 1000 -(-1000) = 2000
	std::cout << "sp0: " << sp0 << std::endl;

	Span sp1 = Span(5);									//SP1
	sp1.addNumber(1000);
	sp1.addNumber(85);
	sp1.addNumber(85);//minspan = 85 - 85 = 0
	sp1.addNumber(86);
	sp1.addNumber(10);//maxspan = 1000 - 10 = 990
	std::cout << "sp1: " << sp1 << std::endl;

	std::cout << "-- ERROR TESTS -- " << std::endl;
	try
	{
		sp1.addNumber(1);//ERROR throw exception container is full
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	Span sp2 = Span(1);									//SP2
	try
	{
		sp2.addNumber(1000);
		std::cout << sp2.shortestSpan() << std::endl;// ERROR no span
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl << "-- LOTS OF NUMBERS TEST -- " << std::endl;
	Span sp3 = Span(20000);								//SP3
	std::vector<int> victor; 
	for(int i = 0; i < 20000; i++)
		victor.push_back(rand());
	try
	{
		sp3.addManyNumbers(victor.begin(), victor.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
//	std::cout << sp3;
	return 0;
}