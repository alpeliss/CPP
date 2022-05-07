#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain sarts working." << std::endl;
    this->ideas = new (std::string[100]);
    return ;
}

Brain::Brain(Brain const & src){
	std::cout << "Copy constructor of Brain called" << std::endl;
	this->ideas = new std::string[100];
	for (int i=0; i < 100; i++) 
		this->ideas[i] = src.ideas[i];
	return ;
}

Brain::~Brain(){
    std::cout << "Brain dies." << std::endl;
    delete [] this->ideas;
    return ;
}

Brain & Brain::operator=(Brain const & rhs){
	std::cout << "Assignation operator of Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}