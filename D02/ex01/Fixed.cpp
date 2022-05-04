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

Fixed::Fixed(const int nb): _nb_b(8){
    std::cout << "Int constructor called" << std::endl;
    this->_nb = nb << _nb_b;

    return ;
}

Fixed::Fixed(const float nb): _nb_b(8){
    std::cout << "Float constructor called" << std::endl;
    float tmp;
    int     i = 0;

    tmp = nb;
    while (i < _nb_b){
        tmp = tmp *  2;
        i++;
    }
    this->_nb = tmp;
    return ;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
    return ;
}



float Fixed::toFloat( void ) const{
    float tmp;
    int     i = 0;

    tmp = float(this->_nb);
    while (i < 8){
        tmp = tmp /  2;
        i++;
    }
    return tmp;
}

int Fixed::toInt( void ) const{
    int f;
    f = this->_nb >> this->_nb_b;

    return f;
}


int Fixed::getRawBits() const{
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
    o <<rhs.toFloat();
    return o;

}

