#ifndef ANIMAL_H
# define ANIMAL_H

#include "iostream"

class Animal{

public:
    Animal ();
    Animal(Animal const & src);
    ~Animal();

    Animal & operator=(Animal const & rhs);
    virtual void makeSound(void) const;
    std::string getType(void) const;

protected:
    std::string type;



};


#endif