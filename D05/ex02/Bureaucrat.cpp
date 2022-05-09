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

void    Bureaucrat::signForm(AForm &form) const{
    
	
    if (this->_grade > form.get_Sgrade()){
        std::cout << *this << "couldn't sign" << form << " cause his grade is to low." << std::endl;
        return ;
    }
    if (form.get_signed() == true){
        std::cout << *this << "couldn't sign" << form << " cause it is already signed." << std::endl;
        return ;
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