#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include "iostream"

class Bureaucrat{

public:
    Bureaucrat (std::string name, int grade);
    Bureaucrat(Bureaucrat const & src);
    ~Bureaucrat();
    std::string get_name() const;
    int         get_grade() const;
    Bureaucrat & operator=(Bureaucrat const & rhs);

private:
    Bureaucrat ();
    const std::string   _name;
    int _grade;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif