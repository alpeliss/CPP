#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){
    std::cout << this->_type << " est cree" << std::endl;
    return ;
}

Weapon::~Weapon(){
    std::cout << this->_type << " est detruit.e" << std::endl;
    return ;
}

const std::string Weapon::getType(void){
    return this->_type;
}

void    Weapon::setType(std::string type){
    this->_type = type;
}