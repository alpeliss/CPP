#ifndef CANON_H
# define CANON_H

#include "iostream"

class Canon{

public:
    Canon ();
    Canon(Canon const & src);
    ~Canon();

    Canon & operator=(Canon const & rhs);

private:


};

std::ostream & operator<<(std::ostream & o, Canon const & rhs)

#endif