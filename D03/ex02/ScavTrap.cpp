#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(), _gk(false){
    std::cout << "Basic ScavTrap constructor called for " << this->_name << std::endl;
    this->_hp = 100;
    this->_ep = 50;
    this->_dmg = 20;
    this->_vie = this->_hp;
    this->_type = "ScavTrap";
    return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _gk(false){
    std::cout << "Name ScavTrap constructor called for " << this->_name << std::endl;
    this->_hp = 100;
    this->_ep = 50;
    this->_dmg = 20;
    this->_vie = this->_hp;
    this->_type = "ScavTrap";
    return ;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src){
    std::cout << "Copy ScavTrap constructor called  to copy " << src.get_name() << std::endl;
    *this = src;
    return ;
}

ScavTrap::~ScavTrap(){
    std::cout << "Basic ScavTrap destructor called for " << this->_name << std::endl;
    return ;
}

void    ScavTrap::guardGate(void) {
    if (this->_hp <= 0){
        std::cout << "ScavTrap " << this->_name;
        std ::cout << " is K.O. unable to do anything :(" << std::endl;
        return ;
    }
    if (this->_ep <= 0){
        std::cout << "ScavTrap " << this->_name;
        std ::cout << " has no energy left to enter gatekeeper mode." << std::endl;
        return ;
    }
    if (this->_gk == false){
        std::cout << "Scavtrap " << this->_name << " goes in gatekeeper mode." << std::endl;
        this->_gk = true;
    }
    else
        std::cout << "Scavtrap " << this->_name << " is already in gatekeeper mode." << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
    std::cout << "ScavTrap assigenment operator called for " << rhs.get_name()  << std::endl;
    this->_name = rhs.get_name();
    this->_dmg = rhs._dmg; 
    this->_hp = rhs._hp; 
    this->_vie = rhs._vie; 
    this->_ep = rhs._ep; 
    return (*this);
}