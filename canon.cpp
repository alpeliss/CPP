#include "canon.hpp"

Canon::Canon(){
    return ;
}

Canon::Canon(Canon const & src){
    *this = src;
    return ;
}

Canon::~Canon(){
    return ;
}

Canon & Canon::operator=(Canon const & rhs){
    this->_n = rhs.get_value();
    return (*this);
}