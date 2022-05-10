#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include "iostream"
#include "Form.hpp"

class Form;

class Bureaucrat{

public:
    Bureaucrat (std::string name, int grade);
    Bureaucrat(Bureaucrat const & src);
    ~Bureaucrat();
    std::string get_name() const;
    int         get_grade() const;
    Bureaucrat & operator=(Bureaucrat const & rhs);
    void    promote();
    void    demote();
    void signForm(Form &form) ;

private:
    Bureaucrat ();
    const std::string   _name;
    int _grade;


    class GradeTooHighException : public std::exception{
    public:
		virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public:
		virtual const char* what() const throw();
    };

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif