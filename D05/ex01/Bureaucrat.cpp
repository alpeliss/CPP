#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
    this->_grade = grade;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
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
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void    Bureaucrat::demote(){
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void    Bureaucrat::signForm(Form &form) const{
    if (this->_grade > form.get_Sgrade()){
        throw Form::GradeTooLowException();
    }
    if (form.get_signed() == true){
        throw Form::AlreadySignedException();
    }
    std::cout << *this << " signed" << form <<  std::endl;
}

Bureaucrat::~Bureaucrat(){
    return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){
    this->_grade = rhs.get_grade();
    return (*this);
}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs){
    o <<rhs.get_name() << ", bureaucrat grade " << rhs.get_grade() << ".";
    return o;

}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade is too high (max : 1)");		
} 

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade is too low (min : 150)");		
} 

const char* Bureaucrat::AlreadySignedException::what() const throw(){
    return ("an't sign twice.");		
} 