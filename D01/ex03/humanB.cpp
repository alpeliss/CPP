#include "humanB.hpp"

HumanB::HumanB(std::string name): _name(name){
    std::cout << this->_name << " est ne" << std::endl;
    return ;
}

HumanB::~HumanB(){
    std::cout << this->_name << " est mort" << std::endl;
    return ;
}

void    HumanB::attack(){
    std::string wpn;

    wpn = this->_wpn->getType();
    std::cout << this->_name << " attacks with their " << wpn << std::endl;
    return ;
}

void       HumanB::setWeapon(Weapon *wpn){
    this->_wpn = wpn;
}