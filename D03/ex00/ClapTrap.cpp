#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_name(name), _hp(10), _ep(10), _dmg(0){
    std::cout << "Basic ClapTrap constructor called for " << this->_name << std::endl;
    this->_vie = this->_hp;
    return ;
}


ClapTrap::ClapTrap(ClapTrap const & src){
    std::cout << "Copy ClapTrap constructor called  to copy " << src.get_name() << std::endl;
    *this = src;
    return ;
}

ClapTrap::~ClapTrap(){
    std::cout << "Basic ClapTrap destructor called for " << this->_name << std::endl;
    return ;
}

std::string ClapTrap::get_name(void) const{
    return this->_name; 
}


ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
    std::cout << "Claptrap assigenment operator called for " << rhs.get_name()  << std::endl;
    this->_name = rhs.get_name();
    this->_dmg = rhs._dmg; 
    this->_hp = rhs._hp; 
    this->_vie = rhs._vie; 
    this->_ep = rhs._ep; 
    return (*this);
}

void ClapTrap::attack(const std::string& target){
    if (this->_hp <= 0){
        std::cout << "ClapTrap " << this->_name;
        std ::cout << " is K.O. unable to do anything :(" << std::endl;
        return ;
    }
    if (this->_ep <= 0){
        std::cout << "ClapTrap " << this->_name;
        std::cout << " tries to attack but not enough energy left." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target;
    std::cout <<  ", causing " << this->_dmg << " points of damage!" << std::endl;
    this->_ep--;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (amount < 0){
        std::cout << "ClapTrap can't be healed by an attack" << std::endl;
        return ;
    }
    if (this->_hp <= 0){
        std::cout << "ClapTrap " << this->_name;
        std ::cout << " is already K.O. stop beating him!" << std::endl;
        return ;
    }
   
    if (this->_hp < amount)
        this->_hp = 0; 
    else
        this->_hp -= amount;
    std::cout << "ClapTrap " << this->_name << " get hit and loose ";
    std::cout << amount << " hp: " << this->_hp << " left!" << std::endl;
    if (this->_hp <= 0 )
        std::cout << this->_name << " is K.O." << std::endl;
    return ;
}


void ClapTrap::beRepaired(unsigned int amount){
    if (amount < 0){
        std::cout << "ClapTrap can't harm itself" << std::endl;
        return ;
    }
    if (this->_hp <= 0){
        std::cout << "ClapTrap " << this->_name;
        std ::cout << " is K.O. unable to do anything :(" << std::endl;
        return ;
    }
    if (this->_ep <= 0){
        std::cout << "ClapTrap " << this->_name;
        std::cout << " tries to repair himself but not enough energy left." << std::endl;
        return ;
    }
    if (this->_hp == this->_vie){
        std::cout << "ClapTrap " << this->_name;
        std::cout <<  " is in perfect shape. Cant heal himself." << std::endl;
        return ;
    }

    this->_hp += amount;
    if (this->_hp > this->_vie)
        this->_hp = this->_vie;
    std::cout << "ClapTrap " << this->_name << " heals himself of ";
    std::cout << amount << " hp: " << this->_hp << " left!" << std::endl;
    if (this->_hp == this->_vie)
        std::cout << "CalpTrap is now perfectly fine =)" << std::endl;
    this->_ep--;
    return ;
}
