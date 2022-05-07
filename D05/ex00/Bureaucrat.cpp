#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
    try
    {
        this->_grade = grade;
        if (this->_grade < 1)
            throw
    }
    catch (std::exception & e)
    {
    /* handle exception */
    }
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src){
    *this = src;
    return ;
}

std::string Bureaucrat::get_name() const{
    return this->_name;
}

int Bureaucrat::get_grade() const{
    return this->_grade;
}

void    Bureaucrat::promote(){
    
}

void    Bureaucrat::demote(){
    
}

Bureaucrat::~Bureaucrat(){
    return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){
    return (*this);
}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs){
    o <<rhs.;
    return o;

}