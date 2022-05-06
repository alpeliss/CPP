#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    std::cout << "WrongCat is born." << std::endl;
    this->type = "wcat";
    return ;
}

WrongCat::WrongCat(WrongCat const & src){
    *this = src;
    return ;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat dies" << std::endl;
    return ;
}

void WrongCat::makeSound(void) const{
    std::cout << "Miaou...rRrrrRRRrRrrRrr..." << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs){
    return (*this);
}