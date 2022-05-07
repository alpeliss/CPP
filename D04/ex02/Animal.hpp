#ifndef ANIMAL_H
# define ANIMAL_H

#include "iostream"

class AAnimal{

public:
    AAnimal ();
    AAnimal(AAnimal const & src);
    virtual ~AAnimal();

    AAnimal & operator=(AAnimal const & rhs);
    virtual void makeSound(void) const = 0;
    std::string getType(void) const;

protected:
    std::string type;



};


#endif