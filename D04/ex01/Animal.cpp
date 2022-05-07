#include "Animal.hpp"

Animal::Animal(): type("Animal"){
    std::cout << "Animal is born." << std::endl;
    return ;
}

Animal::Animal(Animal const & src){
    *this = src;
    return ;
}

Animal::~Animal(){
    std::cout << "Animal dies." << std::endl;
    return ;
}


std::string Animal::getType(void) const{
    return this->type;
}

void Animal::makeSound(void) const{
    std::cout << "*animal noises*" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs){
    return (*this);
}