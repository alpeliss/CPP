#include "iter.hpp"

int main() {
    int tab1[] = { 1, 2, 3, 4 };
    std::string tab2[] = {  "Bab", "Beb", "Bib", "Bob", "Bub", "Byb" };
    float tab3[] = {0.005,0.002};

    int a = 4; 
    unsigned int b = 6;
    const int c = 2;

    iter( tab1, a, func );
    iter( tab2, b, func );
    iter( tab3, c, func );
    return 0;
}