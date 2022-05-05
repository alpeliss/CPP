#ifndef ANIMAL_H
# define ANIMAL_H

#include "iostream"

class Animal{

public:
    Animal ();
    Animal(Animal const & src);
    ~Animal();

    Animal & operator=(Animal const & rhs);

protected:
    std::string type;


};

std::ostream & operator<<(std::ostream & o, Animal const & rhs)

#endif