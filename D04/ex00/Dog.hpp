#ifndef DOG_H
# define DOG_H

#include "iostream"
#include "Animal.hpp"

class Dog : public Animal{

public:
    Dog ();
    Dog(Dog const & src);
    ~Dog();

    Dog & operator=(Dog const & rhs);
    virtual void makeSound(void) const;

private:


};


#endif