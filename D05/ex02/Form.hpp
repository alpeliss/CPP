#ifndef FORM_H
# define FORM_H

#include "iostream"
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{

public:
    AForm(std::string name, int Sgrade, int Egrade);
    AForm(AForm const & src);
    ~AForm();

    AForm & operator=(AForm const & rhs);


    std::string get_name() const;
    int         get_Sgrade() const;
    int         get_Egrade() const;
    bool        get_signed() const;
    class GradeTooHighException : public std::exception{};
    class GradeTooLowException : public std::exception{};
    class AlreadySignedException : public std::exception{};
    void beSigned(Bureaucrat & checker);
    virtual void execute(Bureaucrat const & executor) const = 0;

private:
    AForm ();
    const   std::string _name;
    bool    _signed;
    int     _Sgrade;
    int     _Egrade;

};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif