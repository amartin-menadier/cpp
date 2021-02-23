#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form (std::string name, int signing_Grade, int executingGrade);
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs );

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
		class AlreadySigned : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
		class NotSigned : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

		std::string		getName() const;
		bool			getSignatureStatus() const;
		int				getSigningGrade() const;
		int				getExecutingGrade() const;

		void			beSigned(Bureaucrat const & signatory);
		virtual void	execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string	_name;
		bool				_signed;
		const int			_signingGrade;//grade required to sign the form
		const int			_executingGrade;//grade required to execute the form
		std::string			_target;
		Form();
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */