#include "ShrubberyCreationForm.hpp"
#include "iostream"
#include "fstream"

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
    std::string tmp;
    tmp = this->_target;
    tmp.append("_shrubbery");
    std::ofstream ofs(tmp); 
    ofs << "\n    ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\\\//  /douUP\n        \\\\////\n         |||/\\\n         |||\\/\n         |||||\n   .....//||||\\.... \n\n\n";
    ofs << "    ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\\\//  /douUP\n        \\\\////\n         |||/\\\n         |||\\/\n         |||||\n   .....//||||\\.... \n\n\n";
    ofs << "    ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\\\//  /douUP\n        \\\\////\n         |||/\\\n         |||\\/\n         |||||\n   .....//||||\\.... \n\n";
    return ;
}

SCForm & SCForm::operator=(SCForm const & rhs){
    return (*this);
}