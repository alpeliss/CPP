#include "Dog.hpp"

Dog::Dog() : AAnimal(){
    std::cout << "Dog is born." << std::endl;
    this->_mind = new Brain;
    this->type = "Dog";
    return ;
}

Dog::Dog(Dog const & src){
	std::cout << "Copy constructor of Dog called" << std::endl;
	this->type = src.getType();
	this->_mind = new Brain(*src.get_brain());
    return ;
}

Dog::~Dog(){
    std::cout << "Dog dies." << std::endl;
    delete this->_mind;
    return ;
}

void Dog::makeSound(void) const{
    std::cout << "Woof *tail wigles* woof! woof!" << std::endl;
}

Brain   *Dog::get_brain(void) const{
    return this->_mind;
}

Dog & Dog::operator=(Dog const & rhs){
	std::cout << "Assignation operator of Dog called" << std::endl;
	this->type = rhs.getType();
	this->_mind = new Brain(*rhs.get_brain());
    return (*this);
}