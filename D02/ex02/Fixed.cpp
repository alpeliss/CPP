#include "Fixed.hpp"

Fixed::Fixed(void): _nb(0) , _nb_b(8){
   // std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const & src): _nb_b(8){
  //  std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed(const int nb): _nb_b(8){
   // std::cout << "Int constructor called" << std::endl;
    this->_nb = nb << _nb_b;

    return ;
}

Fixed::Fixed(const float nb): _nb_b(8){
   // std::cout << "Float constructor called" << std::endl;
    this->_nb = nb * (1 << _nb_b);
    return ;
}

Fixed::~Fixed(){
  //  std::cout << "Destructor called" << std::endl;
    return ;
}



float Fixed::toFloat( void ) const{
    return (float)this->_nb / (1 << _nb_b);
}

int Fixed::toInt( void ) const{
    return (int)this->_nb >> this->_nb_b;
}


int Fixed::getRawBits() const{
    return this->_nb;
}


void Fixed::setRawBits( int const raw ){
 //   std::cout << "setRawBits member function called" << std::endl;
    this->_nb = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs){
  //  std::cout << "Copy assignement operator called" << std::endl;
    this->_nb = rhs.getRawBits();
    return (*this);
}

bool   Fixed::operator==(Fixed const & rhs) const{
    if (rhs.getRawBits() == this->_nb)
        return true;
    return false;
}

bool   Fixed::operator!=(Fixed const & rhs) const{
    if (rhs.getRawBits() != this->_nb)
        return true;
    return false;
}

bool   Fixed::operator>=(Fixed const & rhs) const{
    if (rhs.getRawBits() <= this->_nb)
        return true;
    return false;
}

bool   Fixed::operator<=(Fixed const & rhs) const{
    if (rhs.getRawBits() >= this->_nb)
        return true;
    return false;
}

bool   Fixed::operator<(Fixed const & rhs) const{
    if (rhs.getRawBits() > this->_nb)
        return true;
    return false;
}

bool   Fixed::operator>(Fixed const & rhs) const{
    if (rhs.getRawBits() < this->_nb)
        return true;
    return false;
}


Fixed  Fixed::operator+(Fixed const & rhs) const{
    Fixed   a;
    float test;
    
    a.setRawBits(this->getRawBits() + rhs.getRawBits());
    return a;
}

Fixed  Fixed::operator-(Fixed const & rhs) const{
    Fixed   a;

    a.setRawBits(this->getRawBits() - rhs.getRawBits());
    return a;
}

Fixed  Fixed::operator*(Fixed const & rhs) const{
    Fixed   a;

    a.setRawBits(this->getRawBits() * rhs.getRawBits() >> this->_nb_b);
    return a;
}

Fixed  Fixed::operator/(Fixed const & rhs) const{
    Fixed   a;
    if (rhs.getRawBits() != 0)
        a.setRawBits(this->getRawBits() / rhs.getRawBits() << this->_nb_b);
    return a;
}

Fixed  & Fixed::operator++(void){
    this->_nb += 1;
    return (*this);
}

Fixed  & Fixed::operator--(void){
    this->_nb -= 1;
    return (*this);
}

Fixed   Fixed::operator++(int){
    Fixed b(*this);

    this->_nb += 1;
    return b;
}

Fixed   Fixed::operator--(int){
    Fixed b(*this);

    this->_nb -= 1;
    return b;
}

const Fixed  & Fixed::min(Fixed const &a, Fixed const &b){
    if (a <= b)
        return a;
    return b;
}

Fixed  & Fixed::min(Fixed  &a, Fixed  &b){
    if (a <= b)
        return a;
    return b;
}

const Fixed  & Fixed::max(Fixed const &a, Fixed const &b){
    if (a >= b)
        return a;
    return b;
}

Fixed  & Fixed::max(Fixed  &a, Fixed  &b){
    if (a >= b)
        return a;
    return b;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
    o <<rhs.toFloat();
    return o;

}

