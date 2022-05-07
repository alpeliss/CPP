#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), FragTrap(), ScavTrap() {
	this->_name = "UnNamed";
    std::cout << "Basic DiamondTrap constructor called for " << this->_name << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_dmg = FragTrap::_dmg;
    this->_vie = this->_hp;
    this->_type = "DiamondTrap";
	std::cout << "hp: " << FragTrap::_hp << ", ep: " << FragTrap::_ep << ", dmg: " << FragTrap::_dmg << std::endl;
	std::cout << "hp: " << ScavTrap::_hp << ", ep: " << ScavTrap::_ep << ", dmg: " << ScavTrap::_dmg << std::endl;
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
	std::cout << "hp: " << FragTrap::_hp << ", ep: " << FragTrap::_ep << ", dmg: " << FragTrap::_dmg << std::endl;
	std::cout << "hp: " << ScavTrap::_hp << ", ep: " << ScavTrap::_ep << ", dmg: " << ScavTrap::_dmg << std::endl;
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
	ClapTrap::_name = rhs.get_name();
	if (ClapTrap::_name.size() > 10)
    	this->_name = ClapTrap::_name.substr(0, ClapTrap::_name.size()-10);
	else
		this->_name = "";
    this->_dmg = rhs._dmg; 
    this->_hp = rhs._hp; 
    this->_vie = rhs._vie; 
    this->_ep = rhs._ep; 
	return *this;
}

void		DiamondTrap::whoAmI( void ) const{
	std::cout << "My Diamond name is " << this->_name << " and my Clap name is " << ClapTrap::_name << std::endl;
}