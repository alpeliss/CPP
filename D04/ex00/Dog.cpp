#include "Dog.hpp"

Dog::Dog() : Animal(){
    std::cout << "Dog is born." << std::endl;
    this->type = "Dog";
    return ;
}

Dog::Dog(Dog const & src){
    *this = src;
    return ;
}

Dog::~Dog(){
    std::cout << "Dog dies." << std::endl;
    return ;
}

void Dog::makeSound(void) const{
    std::cout << "Woof *tail wigles* woof! woof!" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs){
    return (*this);
}