#ifndef CAT_H
# define CAT_H

#include "iostream"
#include "Animal.hpp"

class Cat : public Animal{

public:
    Cat ();
    Cat(Cat const & src);
    ~Cat();

    Cat & operator=(Cat const & rhs);
    virtual void makeSound(void) const;

private:


};


#endif