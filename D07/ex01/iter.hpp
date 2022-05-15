#ifndef ITER_H
# define ITER_H

#include <iostream>

template<typename T, typename U>
void    iter(T const *tab, U const size, void (*func)( T const & entry)){
    U  i;

    i = 0;
    while (i < size){
        func(tab[i]);
        i++;
    }
}

template< typename T >
void func( T const & x ) { 
    std::cout << x << std::endl; 
    return; 
}


#endif