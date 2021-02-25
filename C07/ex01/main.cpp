#include "iter.hpp"

int		main()
{
	//NO 42 MAIN
	//My tests
	std::cout << "-- MY TESTS --" << std::endl;

	double pi(3.14);
	double e(2.71);
	double k(4.444);
	double doubleArray[3] = {pi, e, k};
	iter(doubleArray, 3, &show);
	std::cout << std::endl;
	iter(doubleArray, 3, &increment);
	std::cout << std::endl;
	iter(doubleArray, 3, &decrement);
	std::cout << std::endl;
	iter(doubleArray, 3, &decrement);
	std::cout << std::endl << std::endl;


	char c0('k');
	char c1('l');
	char c2('m');
	char charArray[3] = {c0, c1, c2};
	iter(charArray, 3, &showChar);
	std::cout << std::endl;
	iter(charArray, 3, &increment);
	std::cout << std::endl;
	iter(charArray, 3, &decrement);
	std::cout << std::endl;
	iter(charArray, 3, &decrement);
	std::cout << std::endl << std::endl;

	char Perceval[32] = "J'apprecie les fruits au sirop";
	iter(Perceval, sizeof(Perceval), &showChar);
	std::cout << std::endl;
	iter(Perceval, sizeof(Perceval), &increment);
	std::cout << std::endl;
	iter(Perceval, sizeof(Perceval), &increment);
	std::cout << std::endl;
	iter(Perceval, sizeof(Perceval), &decrement);
	std::cout << std::endl;
	iter(Perceval, sizeof(Perceval), &decrement);
	std::cout << std::endl;

	return 0;
}
