#include "iostream"
#include "Fixed.hpp"


void    test_egal(float nb_a, float nb_b){
    Fixed const a(nb_a);
    Fixed const b(nb_b);

    std::cout << std::endl << "a = " << a << " b = " << b << std::endl; 
    if (a == b)
        std::cout << "a == b" << std::endl;
    if (a != b)
        std::cout << "a != b" << std::endl;
    if (a <= b)
        std::cout << "a <= b" << std::endl;
    if (a < b)
        std::cout << "a < b" << std::endl;
    if (a >= b)
        std::cout << "a >= b" << std::endl;
    if (a > b)
        std::cout << "a > b" << std::endl;
}

void test_operations(float nb_a, float nb_b)
{
    Fixed const a(nb_a);
    Fixed const b(nb_b);

    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    std::cout << a << " / " << b << " = " << a / b << std::endl;
}

void test_increment(void){
    Fixed a;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
}

int test_poly( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}

int main( void ) {
    test_egal(0,0);
    test_egal(1,0);
    test_egal(0,1);
    test_egal(0.00000000001,0);

    test_operations(1,1);
    test_operations(-2,1);
    test_operations(1,0);

    test_increment();

    test_poly();
    
   /* std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;*/

    return 0;
}