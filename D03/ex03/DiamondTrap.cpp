#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), FragTrap(), ScavTrap() {
	this->_name = "UnNamed";
    std::cout << "Basic DiamondTrap constructor called for " << this->_name << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_dmg = 30;
    this->_vie = this->_hp;
    this->_type = "DiamondTrap";
	return;
}

DiamondTrap::DiamondTrap(std::string name):FragTrap(name), ScavTrap(), ClapTrap(name){
	this->_name = name;
    std::cout << "Name DiamondTrap constructor called for " << this->_name << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_dmg = 30;
    this->_vie = this->_hp;
    this->_type = "DiamondTrap";
	return;
}

DiamondTrap::DiamondTrap( DiamondTrap  & src ){
    std::cout << "Copy DiamondTrap constructor called  to copy " << src.get_name() << std::endl;
	*this = src;
	return;
}
DiamondTrap::~DiamondTrap( void ){
    std::cout << "Basic DiamondTrap destructor called for " << this->_name << std::endl;
	return;
}
DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs ){
    std::cout << "DiamondTrap assignement operator called for " << rhs.get_name()  << std::endl;
    this->_name = rhs.get_name();
	ClapTrap::_name = this->_name + "_clap_name";
    this->_dmg = rhs._dmg; 
    this->_hp = rhs._hp; 
    this->_vie = rhs._vie; 
    this->_ep = rhs._ep; 
	return *this;
}

void		DiamondTrap::whoAmI( void ) const{
	std::cout << "My Diamond name is " << this->_name << " and my Clap name is " << ClapTrap::_name << std::endl;
}