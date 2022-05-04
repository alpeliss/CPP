#include "ClapTrap.hpp"

int main(){
    ClapTrap un("ted");
    ClapTrap deux("bob");

    int i = 0;
    while (i < 14){
        un.attack("Bob");
        un.beRepaired(1);
        i++;
    }

    un = deux;

    un.attack("J");
    un.beRepaired(1);
    un.takeDamage(8);
    un.beRepaired(5);
    un.beRepaired(5);
    un.takeDamage(100);
    un.attack("J");
    un.beRepaired(1);
    un.attack("J");
    
    deux.attack("O");

    return 0;
}