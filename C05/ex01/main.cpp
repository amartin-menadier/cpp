//   clang++ *.cpp -Werror -Wall -Wextra -std=c++98  && ./a.out && rm ./a.out  

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	Renaud("Renaud Van Ruymbeke", 2);
	Bureaucrat	Jean("Jean Lassalle", 50);
	Bureaucrat	Christiane("Christiane Taubira", 1);
	Form		QuaranteNeufTrois("49_3", 10, 30);
	Form		QuaranteNeufTroisBis("49_3 bis", 10, 30);
	try
	{
		Form	toohigh("too high", 0, 50); // Error msg but the program goes on
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}	
//	Form		toolow("too low", 180, 50); // out of a try so stops the program

	std::cout << Christiane << std::endl;
	std::cout << QuaranteNeufTrois << std::endl;
	try
	{
		Renaud.signForm(QuaranteNeufTrois);//shall work
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Christiane.signForm(QuaranteNeufTrois);//shall not work (already signed)
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jean.signForm(QuaranteNeufTroisBis);//shall not work (grade too low)
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Christiane.signForm(QuaranteNeufTroisBis);//shall work
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << std::endl << "--EOF--" << std::endl;
	return (0);
}
