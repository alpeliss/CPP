#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain sarts working." << std::endl;
    return ;
}

Brain::Brain(Brain const & src){
    *this = src;
    return ;
}

Brain::~Brain(){
    std::cout << "Brain dies." << std::endl;
    return ;
}

Brain & Brain::operator=(Brain const & rhs){
    return (*this);
}