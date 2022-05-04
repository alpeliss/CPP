#ifndef HUMANA_H
# define HUMANA_H
#include "iostream"
#include "Weapon.hpp"

class HumanA{

public:

	HumanA(std::string name, Weapon &arme);
	~HumanA(void);

    void    attack(void);
    
private:
    std::string     _name;
    Weapon          &_wpn; 

};

#endif