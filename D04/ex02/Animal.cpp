#include "Animal.hpp"

AAnimal::AAnimal(): type("AAnimal"){
    std::cout << "AAnimal is born." << std::endl;
    return ;
}

AAnimal::AAnimal(AAnimal const & src){
    *this = src;
    return ;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal dies." << std::endl;
    return ;
}


std::string AAnimal::getType(void) const{
    return this->type;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs){
    return (*this);
}