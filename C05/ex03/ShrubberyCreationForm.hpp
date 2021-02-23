#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		std::string		getTarget() const;
		void			execute(Bureaucrat const & executor) const;

	private:
		ShrubberyCreationForm();
		std::string		_target;

};

# define TREE1 \
"      /\\      " << std::endl <<		\
"     /\\*\\     " << std::endl <<		\
"    /\\O\\*\\    " << std::endl <<		\
"   /*/\\/\\/\\   " << std::endl <<		\
"  /\\O\\/\\*\\/\\  " << std::endl <<	\
" /\\*\\/\\*\\/\\/\\ " << std::endl <<	\
"/\\O\\/\\/*/\\/O/\\" << std::endl <<	\
"      ||      " << std::endl <<		\
"      ||      " << std::endl <<		\
"      ||      " << std::endl

# define TREE2 \
"          &&& &&  & &&" << std::endl <<			\
"      && &\\/&\\|& ()|/ @, &&" << std::endl <<		\
"      &\\/(/&/&||/& /_/)_&/_&" << std::endl <<		\
"   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl <<	\
"  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl <<	\
"&&   && & &| &| /& & % ()& /&&" << std::endl <<	\
" ()&_---()&\\&\\|&&-&&--%---()~" << std::endl <<	\
"     &&     \\|||" << std::endl <<		\
"             |||" << std::endl <<		\
"             |||" << std::endl <<		\
"             |||" << std::endl <<		\
"       , -=-~  .-^- _" << std::endl

# define TREE3 \
"    oxoxoo    ooxoo" << std::endl <<		\
"  ooxoxo oo  oxoxooo" << std::endl <<		\
" oooo xxoxoo ooo ooox" << std::endl <<		\
" oxo o oxoxo  xoxxoxo" << std::endl <<		\
"  oxo xooxoooo o ooo" << std::endl <<		\
"    ooo\\oo\\  /o/o" << std::endl <<		\
"        \\  \\/ /" << std::endl <<			\
"         |   /" << std::endl <<	\
"         |  |" << std::endl <<		\
"         | D|" << std::endl <<		\
"         |  |" << std::endl <<		\
"         |  |" << std::endl <<		\
"  ______/____\\____" << std::endl

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */