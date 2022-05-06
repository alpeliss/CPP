#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name){
    std::cout << "Basic FragTrap constructor called for " << this->_name << std::endl;
    this->_hp = 100;
    this->_ep = 100;
    this->_dmg = 30;
    this->_vie = this->_hp;
    this->_type = "FragTrap";
    return ;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src){
    std::cout << "Copy FragTrap constructor called  to copy " << src.get_name() << std::endl;
    *this = src;
    return ;
}

FragTrap::~FragTrap(){
    std::cout << "Basic FragTrap destructor called for " << this->_name << std::endl;
    return ;
}

void    FragTrap::highFivesGuys(void) {
    if (this->_hp <= 0){
        std::cout << "FragTrap " << this->_name;
        std ::cout << " is K.O. unable to do anything :(" << std::endl;
        return ;
    }
    if (this->_ep <= 0){
        std::cout << "FragTrap " << this->_name;
        std ::cout << " has no energy left, unable to even raise his hand." << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name << " raises his hand and smile hopefully at you =)" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs){
    std::cout << "FragTrap assigenment operator called for " << rhs.get_name()  << std::endl;
    this->_name = rhs.get_name();
    this->_dmg = rhs._dmg; 
    this->_hp = rhs._hp; 
    this->_vie = rhs._vie; 
    this->_ep = rhs._ep; 
    return (*this);
}