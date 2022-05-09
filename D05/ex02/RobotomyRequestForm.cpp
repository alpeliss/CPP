#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RRForm::RRForm(): AForm("RobotomyRequestForm", 72,45){
    this->_target = "Default";
    return ;
}

RRForm::RRForm(std::string Target): AForm("RobotomyRequestForm", 72,45){
    this->_target = Target;
    return ;
}

RRForm::RRForm(RRForm const & src): AForm("RobotomyRequestForm", 72,45){
    *this = src;
    return ;
}

RRForm::~RRForm(){
    return ;
}

void    RRForm::execute(Bureaucrat const & executor) const{
    int v1 = rand() % 2;
    if (v1 == 0){
        std::cout << "ZZZzzzZzZZZZzZZzzZz  zZZ ZzZZZzzz... " << this->_target << " was successfully robotize" << std::endl;
    }
    else
        std::cout << "Trie to robotize " << this->_target << " but fails." << std::endl;
    return ;
}

RRForm & RRForm::operator=(RRForm const & rhs){
    return (*this);
}