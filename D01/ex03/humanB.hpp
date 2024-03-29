#ifndef HUMANB_H
# define HUMANB_H
#include "iostream"
#include "Weapon.hpp"

class HumanB{

public:

	HumanB(std::string name);
	~HumanB(void);

    void    attack(void);
    void    setWeapon(Weapon *wpn);
    
private:
    std::string     _name;
    Weapon          *_wpn; 

};

#endif