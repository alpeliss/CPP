#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#include "ClapTrap.hpp"
#include "iostream"

class ScavTrap : public ClapTrap
{
private:
    
public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();
    ScavTrap & operator=(ScavTrap const & rhs);
};



#endif