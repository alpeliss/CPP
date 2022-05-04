#ifndef FIXED_H
# define FIXED_H

#include "iostream"

class Fixed{

public:
    Fixed ();
    Fixed(Fixed const & src);
    Fixed(const int _nb);
    Fixed(const float _nb);
    ~Fixed();

    float toFloat( void ) const;
    int toInt( void ) const;

    Fixed & operator=(Fixed const & rhs);

    bool  operator==(Fixed const & rhs) const;
    bool  operator!=(Fixed const & rhs) const;
    bool  operator>=(Fixed const & rhs) const;
    bool  operator<=(Fixed const & rhs) const;
    bool  operator<(Fixed const & rhs) const;
    bool  operator>(Fixed const & rhs) const;

    Fixed  operator+(Fixed const & rhs) const;
    Fixed  operator-(Fixed const & rhs) const;
    Fixed  operator*(Fixed const & rhs) const;
    Fixed  operator/(Fixed const & rhs) const;

    Fixed & operator++(void);
    Fixed & operator--(void);
    Fixed   operator++(int);
    Fixed   operator--(int);

    const static Fixed & min(Fixed const & a, Fixed const & b);
    static Fixed & min(Fixed & a, Fixed & b);

    const static Fixed & max(Fixed const & a, Fixed const & b);
    static Fixed & max(Fixed & a, Fixed & b);

    int getRawBits( void ) const;
    void setRawBits( int const raw );

private:
    int     _nb;
    int const   _nb_b;


};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif