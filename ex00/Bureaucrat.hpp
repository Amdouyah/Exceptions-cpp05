#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
	private:
		const std::string name;
		int grade;
	public :
		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char* what()const throw();
		};
		Bureaucrat();
		Bureaucrat(int grade, const std::string name);
		std::string getName() const;
		int getGrade();
		void increment();
		void decrement();

};
std::ostream &operator << (std::ostream Cout, const Bureaucrat &Bureaucrat);

#endif