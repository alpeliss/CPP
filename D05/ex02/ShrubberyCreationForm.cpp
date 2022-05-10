#include "ShrubberyCreationForm.hpp"

SCForm::SCForm(): AForm("ShrubberyCreationForm", 145,137){
    this->_target = "Default";
    return ;
}

SCForm::SCForm(std::string Target): AForm("ShrubberyCreationForm", 145,137){
    this->_target = Target;
    return ;
}

SCForm::SCForm(SCForm const & src): AForm("ShrubberyCreationForm", 145,137){
    *this = src;
    return ;
}

SCForm::~SCForm(){
    return ;
}

void    SCForm::action() const{
    std::cout << "PPform executed vers " << this->_target << std::endl;
    return ;
}

SCForm & SCForm::operator=(SCForm const & rhs){
    return (*this);
}