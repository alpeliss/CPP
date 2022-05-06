#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(){
    ScavTrap un("ted");
    ScavTrap deux("bob");
  /*  int i = 0;
    while (i < 14){
        un.attack("X");
        un.beRepaired(1);
        un.takeDamage(8);
        i++;
    }*/
    int i = 0;
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
    
    deux.attack("O");

    return 0;
}