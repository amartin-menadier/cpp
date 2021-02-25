#include <iostream>
#include "Array.hpp"

int main(void)
{
	srand(time(NULL));
	Array<int> int_arr(3);

	for (size_t i = 0; i < int_arr.size(); i++)
	{
		int_arr[i] = i;
		std::cout << int_arr[i];
	}
	std::cout << std::endl;

	Array<float> float_arr(3);
	for (size_t i = 0; i < float_arr.size(); i++)
	{
		float_arr[i] = static_cast<float>(i);
		std::cout << float_arr[i];
	}
	std::cout << std::endl;

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

	try
	{
		int_arr[18] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Array<int> empty;
	std::cout << empty.size() << std::endl;
	return (0);
}
