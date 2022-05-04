#include "Interger.hpp"

Integer::Integer(int const n) : _n(n) {
    std::cout << "constructor called with value n = " << n << std::endl;
    return ;
}

Integer::~Integer(void){
    std::cout << "destructor called with value n = " << this->_n << std::endl;
    return ;
}

int Integer::get_value(void) const{
    return (this->_n);
}


Integer & Integer::operator=(Integer const & rhs){
    std::cout << "Assignation operator called from " << this->_n;
    std::cout << " and " << rhs.get_value() << std::endl;

    this->_n = rhs.get_value();
    return (*this);
}

Integer  Integer::operator+(Integer const & rhs) const{
    std::cout << "Addition operator called from " << this->_n;
    std::cout << " and " << rhs.get_value() << std::endl;


    return Integer(this->_n + rhs.get_value());
}

std::ostream & operator<<(std::ostream & o, Integer const & rhs){
    o <<rhs.get_value();
    return o;

}