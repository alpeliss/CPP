#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include "iostream"

class ClapTrap
{
private:
    std::string _name;
    int         _hp;
    int         _vie;
    int         _ep;
    int         _dmg;
    
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & src);
    ~ClapTrap();
    ClapTrap & operator=(ClapTrap const & rhs);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string get_name(void) const;
};



#endif