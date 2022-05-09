#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include "iostream"
#include "Form.hpp"

class AForm;

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
    class GradeTooHighException : public std::exception{};
    class GradeTooLowException : public std::exception{};
    class AlreadySignedException : public std::exception{};
    void signForm(AForm &form) const;

private:
    Bureaucrat ();
    const std::string   _name;
    int _grade;



};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif