//#include "Sample.class.hpp"
#include "Zombie.hpp"

void randomChump( std::string name ){
    Zombie Joe;
    Joe.add_name(name);
    Joe.announce();
    return ;
}

Zombie* newZombie( std::string name ){
    Zombie *Z = new Zombie;
    Z->add_name(name);
    return (Z);
}

Zombie* zombieHorde( int N, std::string name ){
    if (N <= 0)
        return 0;
    Zombie *horde = new Zombie[N];
    
    int i = 0;
    while (i<N){
        horde[i].add_name(name);
        i++;
    }
    return(horde);
}

int main(){
    Zombie *horde = new Zombie[4];
    int i;
    int nb = 4;

    horde = zombieHorde(nb, "tom");
    randomChump("Bib");
    i = 0;
    while(i < nb){
        std::cout << i + 1 << "  ";
        horde[i].announce();
        i++;
    }
    delete [] horde;
	return 1;
}