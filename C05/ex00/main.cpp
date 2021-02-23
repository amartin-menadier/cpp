//   clang++ *.cpp -Werror -Wall -Wextra -std=c++98  && ./a.out && rm ./a.out  

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Renaud("Renaud Van Ruymbeke", 2);
	Bureaucrat Jerome("Jérôme Cahuzac", 148);
//	Bureaucrat toolow("too low", 170);
//	Bureaucrat toohigh("too high", -52);

	try
	{
		Renaud.promotion();//shall work
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Renaud.promotion();//shall not work => throw and catch
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jerome.demotion();//shall work
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jerome.demotion();//shall work
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jerome.demotion();//shall not work => throw and catch
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << std::endl << "EOF" << std::endl;
	return (0);
}
