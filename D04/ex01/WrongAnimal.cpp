#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wAnimal"){
    std::cout << "WrongAnimal is born." << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src){
    *this = src;
    return ;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal dies." << std::endl;
    return ;
}


std::string WrongAnimal::getType(void) const{
    return this->type;
}

void WrongAnimal::makeSound(void) const{
    std::cout << "*animal noises*" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs){
    return (*this);
}