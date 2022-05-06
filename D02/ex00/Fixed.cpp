#include "Fixed.hpp"

Fixed::Fixed(void): _nb(0) , _nb_b(8){
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const & src): _nb_b(8){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_nb;
}


void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->_nb = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignement operator called" << std::endl;
    this->_nb = rhs.getRawBits();
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
    o <<rhs.getRawBits();
    return o;

}