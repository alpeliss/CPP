#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include "iostream"

class WrongAnimal{

public:
    WrongAnimal ();
    WrongAnimal(WrongAnimal const & src);
    ~WrongAnimal();

    WrongAnimal & operator=(WrongAnimal const & rhs);
    void makeSound(void) const;
    std::string getType(void) const;

protected:
    std::string type;


};


#endif