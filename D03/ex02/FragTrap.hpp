#ifndef FRAGTRAP_H
# define FRAGTRAP_H
#include "ClapTrap.hpp"
#include "iostream"

class FragTrap : public ClapTrap
{
private:
    bool    _gk;
public:
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap();
    FragTrap & operator=(FragTrap const & rhs);

    void highFivesGuys(void);
};



#endif