#ifndef BRAIN_H
# define BRAIN_H

#include "iostream"

class Brain{

public:
    Brain ();
    Brain(Brain const & src);
    ~Brain();

    Brain & operator=(Brain const & rhs);

private:
    std::string *ideas;


};

#endif