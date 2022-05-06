#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "iostream"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

public:
    WrongCat ();
    WrongCat(WrongCat const & src);
    ~WrongCat();

    WrongCat & operator=(WrongCat const & rhs);
    void makeSound(void) const;

private:


};


#endif