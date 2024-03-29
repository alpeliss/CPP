#include "Form.hpp"


AForm::AForm(std::string name, int Sgrade, int Egrade): _name(name), _Sgrade(Sgrade), _Egrade(Egrade), _signed(false){
    if (this->_Egrade > 150 || this->_Sgrade > 150)
        throw AForm::GradeTooLowException();
    if (this->_Egrade < 1 || this->_Sgrade < 1)
        throw AForm::GradeTooHighException();
}

AForm::AForm(AForm const & src){
    *this = src;
    return ;
}

AForm::~AForm(){
    return ;
}


std::string AForm::get_name() const{
    return this->_name;
}

int         AForm::get_Sgrade() const{
    return this->_Sgrade;
}

int         AForm::get_Egrade() const{
    return this->_Egrade;
}
bool        AForm::get_signed() const{
    return this->_signed;
}

void        AForm::beSigned(Bureaucrat & checker){
    if (checker.get_grade() > this->_Sgrade)
        throw AForm::SigningGradeTooLow();
    if (this->_signed == true)
        throw AForm::AlreadySignedException();
    this->_signed = true;
}

void AForm::execute(Bureaucrat const & executor) const{
    if (executor.get_grade() > this->_Egrade)
        throw AForm::ExecuteGradeTooLow();
    if (this->_signed == false)
        throw AForm::NotSigned();
    this->action();
}

AForm & AForm::operator=(AForm const & rhs){
    this->_Sgrade = rhs.get_Sgrade();
    this->_Egrade = rhs.get_Egrade();
    this->_signed = rhs.get_signed();
    return (*this);
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs){
    o << "[" << rhs.get_name() << "], AForm signing grade " << rhs.get_Sgrade() << " execute grade " << rhs.get_Egrade();
    o << " satus, signed: " << rhs.get_signed();
    return o;

}

const char* AForm::GradeTooHighException::what() const throw(){
    return ("Form grade is too high (max : 1)");		
} 

const char* AForm::GradeTooLowException::what() const throw(){
    return ("Form grade is too low (min : 150)");		
} 

const char* AForm::SigningGradeTooLow::what() const throw(){
    return ("The bureaucrat grade is too low, not habilitate to sign this form.");		
} 

const char* AForm::AlreadySignedException::what() const throw(){
    return ("The form is already signed, can't sign twice.");		
} 

const char* AForm::ExecuteGradeTooLow::what() const throw(){
    return ("The bureaucrat grade is too low, not habilitate to execute this form.");		
} 

const char* AForm::NotSigned::what() const throw(){
    return ("Can't execute a form not signed! Are you insane!");		
} 
