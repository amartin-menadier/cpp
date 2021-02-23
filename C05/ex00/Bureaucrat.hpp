#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		std::string			getName() const;
		int					getGrade() const;

		void				promotion();
		void				demotion();

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

	private:
		const std::string	_name;
		int					_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
