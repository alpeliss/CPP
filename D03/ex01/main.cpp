#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(){
    ClapTrap a("ted");
    ClapTrap b(a);
    ClapTrap c;
    ScavTrap un("ted");
    ScavTrap deux("bob");
    ScavTrap trois;
    int i = 0;
    while (i < 30){
        std::cout << i + 1;
        un.attack("X");
        un.beRepaired(1);
        un.takeDamage(1);
        i++;
    }
    i = 0;
    while (i < 51){
        std::cout << i + 1;
        un.attack("X");
        i++;
    }
    un.guardGate();
    un.guardGate();
    un.beRepaired(5);
    un = deux;

    un.guardGate();
    un.attack("J");
    un.beRepaired(1);
    un.takeDamage(8);
    un.beRepaired(5);
    un.beRepaired(5);
    un.takeDamage(100);
    un.attack("J");
    un.beRepaired(1);
    un.guardGate();

    return 0;
}