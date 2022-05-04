#include "Harl.hpp"

int main(int ac, char **av){
    Harl test;
    if (ac < 2){
        std::cout << "non complaints? Increcible!" << std::endl;
        return 0;
    }

    test.complain(av[1]);
    return (0);
}