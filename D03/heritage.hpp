#ifndef HERITAGE_H
# define HERITAGE_H
#include <string>
#include "iostream"


class Animal{

private:
    int _nb_legs;

public:
    Animal();
    Animal(Animal const &);
    Animal & operator=(Animal const &);
    ~Animal();

    void run(int distance);
};

class Cat : public Animal{ 


public:
    Cat();
    Cat(Cat const &);
    Cat & operator=(Cat const &);
    ~Cat();

    void hautain(std::string const & target);

};

class Pony : public Animal{

public:
    Pony();
    Pony(Pony const &);
    Pony & operator=(Pony const &);
    ~Pony();

    void magic(std::string const & target);

};

#endif