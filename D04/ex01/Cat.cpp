#include "Cat.hpp"

Cat::Cat() : Animal(){
    this->type = "cat";
    this->_mind = new Brain;
    std::cout << "Cat is born." << std::endl;
    return ;
}

Cat::Cat(Cat const & src){
    *this = src;
    return ;
}

Cat::~Cat(){
    std::cout << "Cat dies." << std::endl;
    delete this->_mind;
    return ;
}

void Cat::makeSound(void) const{
    std::cout << "Miaou...rRrrrRRRrRrrRrr..." << std::endl;
}

Cat & Cat::operator=(Cat const & rhs){
    return (*this);
}