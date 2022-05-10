#ifndef FORM_H
# define FORM_H

#include "iostream"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

public:
    Form(std::string name, int Sgrade, int Egrade);
    Form(Form const & src);
    ~Form();

    Form & operator=(Form const & rhs);


    std::string get_name() const;
    int         get_Sgrade() const;
    int         get_Egrade() const;
    bool        get_signed() const;
    void beSigned(Bureaucrat & checker);

private:
    Form ();
    const   std::string _name;
    bool    _signed;
    int     _Sgrade;
    int     _Egrade;


    class GradeTooHighException : public std::exception{
    public:
		virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public:
		virtual const char* what() const throw();
    };
    class AlreadySignedException : public std::exception{
    public:
		virtual const char* what() const throw();
    };

    class SigningGradeTooLow : public std::exception{
    public:
		virtual const char* what() const throw();
    };

};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif