//#include "Sample.class.hpp"
#include "Zombie.hpp"

void randomChump( std::string name ){
    Zombie Joe(name);
    Joe.announce();
    return ;
}

Zombie* newZombie( std::string name ){
    Zombie *Z = new Zombie(name);
    return (Z);
}

int main(){
    Zombie *Z = new Zombie("");
    Z = newZombie("Z");
    randomChump("Bib");
    Z->announce();
    randomChump("Bab");
    Z->announce();
    randomChump("Beb");
    randomChump("Bob");
    Z->announce();
    randomChump("Bub");
    randomChump("Byb");
    randomChump("Baab");
    Z->announce();
    delete(Z);
	return 1;
}