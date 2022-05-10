#ifndef INTERN_H
# define INTERN_H

#include "iostream"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern{

public:
    Intern ();
    Intern(Intern const & src);
    ~Intern();
    AForm* makeForm(std::string form, std::string target);
    Intern & operator=(Intern const & rhs);

private:
    class Unknownform : public std::exception{
    public:
		virtual const char* what() const throw();
    };

};


#endif