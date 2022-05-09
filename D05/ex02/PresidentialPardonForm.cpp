#include "PresidentialPardonForm.hpp"

PPForm::PPForm(): AForm("PresidentialPardonForm", 25,5){
    this->_target = "Default";
    return ;
}

PPForm::PPForm(std::string Target): AForm("PresidentialPardonForm", 25,5){
    this->_target = Target;
    return ;
}

PPForm::PPForm(PPForm const & src): AForm("PresidentialPardonForm", 25,5){
    *this = src;
    return ;
}

PPForm::~PPForm(){
    return ;
}

void    PPForm::execute(Bureaucrat const & executor) const{
    std::cout << "PPform executed vers" << this->_target;
    return ;
}

PPForm & PPForm::operator=(PPForm const & rhs){
    return (*this);
}