#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int Sgrade, int Egrade): _name(name), _Sgrade(Sgrade), _Egrade(Egrade), _signed(false){
    if (this->_Egrade > 150 || this->_Sgrade > 150)
        throw Form::GradeTooLowException();
    if (this->_Egrade < 1 || this->_Sgrade < 1)
        throw Form::GradeTooHighException();
}

Form::Form(Form const & src){
    *this = src;
    return ;
}

Form::~Form(){
    return ;
}


std::string Form::get_name() const{
    return this->_name;
}

int         Form::get_Sgrade() const{
    return this->_Sgrade;
}

int         Form::get_Egrade() const{
    return this->_Egrade;
}
bool        Form::get_signed() const{
    return this->_signed;
}

void        Form::beSigned(Bureaucrat & checker){
    if (checker.get_grade() > this->_Sgrade)
        throw Form::SigningGradeTooLow();
    if (this->_signed == true)
        throw Form::AlreadySignedException();
    this->_signed = true;
}

Form & Form::operator=(Form const & rhs){
    this->_Sgrade = rhs.get_Sgrade();
    this->_Egrade = rhs.get_Egrade();
    this->_signed = rhs.get_signed();
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Form const & rhs){
    o << "[" << rhs.get_name() << "], form signing grade " << rhs.get_Sgrade() << " execute grade " << rhs.get_Egrade();
    o << " satus, signed: " << rhs.get_signed();
    return o;

}

const char* Form::GradeTooHighException::what() const throw(){
    return ("Form grade is too high (max : 1)");		
} 

const char* Form::GradeTooLowException::what() const throw(){
    return ("Form grade is too low (min : 150)");		
} 

const char* Form::SigningGradeTooLow::what() const throw(){
    return ("The bureaucrat grade is too low, not habilitate to sign this form.");		
} 

const char* Form::AlreadySignedException::what() const throw(){
    return ("The form is already signed, can't sign twice.");		
} 
