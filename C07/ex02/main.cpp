#include <iostream>
#include "Array.hpp"

int main(void)
{
	int *b = new int();
	std::cout << "*b = " << *b << std::endl << std::endl;

	delete b;

	srand(time(NULL));
	unsigned int a = 10;
	Array<int> int_arr(a);

	std::cout << "-- INT ARRAY TEST --" << std::endl;
	for (size_t i = 0; i < int_arr.size(); i++)
	{
		std::cout << int_arr[i];
		int_arr[i] = i + 1;
		std::cout << int_arr[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "-- OUT OF BOUND EXCEPTION TEST --" << std::endl;
	try
	{
		int_arr[18] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-- FLOAT ARRAY TEST --" << std::endl;
	Array<float> float_arr(a);
	for (size_t i = 0; i < float_arr.size(); i++)
	{
		std::cout << float_arr[i];
		float_arr[i] = i + 1;
		std::cout << float_arr[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "-- STRING ARRAY TEST --" << std::endl;
	static std::string BurgundyKing[5] = {
		"J'apprecie les fruits au sirop",
		"Pas changer assiette pour fromage",
		"Arthur! C'est la guerre!",
		"Cuilleeeeeeeeere",
		"La fleur en bouquet fane et jamais ne renait"
	};

	Array<std::string> s(5);
	for (size_t i = 0; i < s.size(); i++)
	{
		std::cout << "Before: " << s[i] << std::endl;
		s[i] = BurgundyKing[rand() % 5];
		std::cout << "After : " << s[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "-- COPY & ASSIGNATION TEST --" << std::endl;
	Array<std::string> copy(s);
	Array<std::string> assign = s;
	for (size_t i = 0; i < copy.size(); i++)
	{
		std::cout << "     s = " << s[i] << std::endl; 
		std::cout << "  copy = " << copy[i] << std::endl;
		std::cout << "assign = " << copy[i] << std::endl;
	}

	return (0);
}
