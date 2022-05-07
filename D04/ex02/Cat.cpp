#include "Cat.hpp"

Cat::Cat() : AAnimal(){
    std::cout << "Cat is born." << std::endl;
    this->type = "cat";
    this->_mind = new Brain();
    return ;
}

Cat::Cat(Cat const & src){
	std::cout << "Copy constructor of Cat called" << std::endl;
	this->type = src.getType();
	this->_mind = new Brain(*src.get_brain());
    return ;
}

Cat::~Cat(){
    std::cout << "Cat dies." << std::endl;
    delete (this->_mind);
    return ;
}

void Cat::makeSound(void) const{
    std::cout << "Miaou...rRrrrRRRrRrrRrr..." << std::endl;
}

Brain   *Cat::get_brain(void) const{
    return this->_mind;
}

Cat & Cat::operator=(Cat const & rhs){
	std::cout << "Assignation operator of Cat called" << std::endl;
	this->type = rhs.getType();
	this->_mind = new Brain(*rhs.get_brain());
    return (*this);
}