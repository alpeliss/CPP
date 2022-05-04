#include "Zombie.hpp"

Zombie::Zombie(){
    return ;
}


Zombie::~Zombie(void){
	std::cout << this->_name << " est mort une seconde fois." << std::endl;
	return ;
}

void    Zombie::announce(void){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


void    Zombie::add_name(std::string name){
    this->_name = name;
}
