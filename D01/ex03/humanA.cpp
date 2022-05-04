#include "humanA.hpp"

HumanA::HumanA(std::string name,Weapon &arme): _name(name), _wpn(arme){
    std::cout << this->_name << " est ne" << std::endl;
    return ;
}

HumanA::~HumanA(){
    std::cout << this->_name << " est mort" << std::endl;
    return ;
}

void    HumanA::attack(){
    std::string wpn;

    wpn = this->_wpn.getType();
    std::cout << this->_name << " attacks with their " << wpn << std::endl;
    return ;
}