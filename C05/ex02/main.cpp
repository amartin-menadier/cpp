//   clang++ *.cpp -Werror -Wall -Wextra -std=c++98  && ./a.out && rm ./a.out  

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// ShrubberyCreationForm (Required grades: sign 145, exec 137). Action: Create a file called <target>_shrubbery, and write ASCII trees inside it, in the current directory.
// RobotomyRequestForm (Required grades: sign 72, exec 45). Action: Makes some drilling noises, and tell us that <target> has been robotomized successfully 50% of the time. Otherwise, tell us it’s a failure.
// PresidentialPardonForm (Required grades: sign 25, exec 5). Action: Tells us <target> has been pardoned by Zafod Beeblebrox.

int main()
{
	srand(time(0));
	Bureaucrat					Eva("Eva Joly", 2);
	Bureaucrat					Alex("Alexandre Benalla", 50);
	Bureaucrat					Manu("Manu", 1);
	Bureaucrat					Christine("Christine Boutin", 140);
	PresidentialPardonForm		Pardon("Nicolas Sarkozy");
	RobotomyRequestForm			Bipbop("Jean Castex");
	ShrubberyCreationForm		Forest("Elysee_Palace_garden");

	try
	{
		Eva.signForm(Pardon);//shall work
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Manu.executeForm(Pardon);//shall work (already signed)
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Alex.signForm(Bipbop);//shall work 
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bipbop.execute(Alex);//shall not work (grade too low)
	}
	catch (std::exception & e)
	{
		std::cerr << Alex.getName() << " could not execute the form because " << e.what() << std::endl;
	}
	try
	{
		Bipbop.execute(Manu);//shall work
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Forest.beSigned(Christine);//shall work 
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Forest.execute(Christine);//shall not work (grade too low)
	}
	catch (std::exception & e)
	{
		std::cerr << Christine.getName() << " could not execute the form because " << e.what() << std::endl;
	}	
	try
	{
		Forest.execute(Eva);//shall work
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}	
	
	std::cout << std::endl << std::endl << "--EOF--" << std::endl;
	return (0);
}
