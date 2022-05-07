#ifndef DOG_H
# define DOG_H

#include "iostream"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{

public:
    Dog ();
    Dog(Dog const & src);
    ~Dog();

    Dog & operator=(Dog const & rhs);
    virtual void makeSound(void) const;
    Brain    *get_brain() const;

private:
    Brain   *_mind;


};


#endif