#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

template<typename T>
void    swap(T &a, T &b){
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T    max(T const &x, T const &y){
    return (x > y ? x : y);
}

template<typename T>
T    min(T const  &x, T const &y){
    return (x < y ? x : y);
}



#endif