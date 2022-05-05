#include "Animal.hpp"

Animal::Animal(){
    return ;
}

Animal::Animal(Animal const & src){
    *this = src;
    return ;
}

Animal::~Animal(){
    return ;
}

Animal & Animal::operator=(Animal const & rhs){
    this->_n = rhs.get_value();
    return (*this);
}