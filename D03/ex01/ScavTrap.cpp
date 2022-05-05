#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std:string name){
    return ;
}

ScavTrap::ScavTrap(ScavTrap const & src){
    *this = src;
    return ;
}

ScavTrap::~ScavTrap(){
    return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
    this->_n = rhs.get_value();
    return (*this);
}