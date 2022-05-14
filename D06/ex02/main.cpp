#include "Base.hpp"
#include <stdlib.h>
#include <iostream>
#include <time.h>


Base * generate(void){
    int i = rand() % 3;
    Base    *res;
    switch (i)
    {
    case 0:
        res = new A;
        break;
    
    case 1:
        res = new B;
        break;
    
    case 2:
        res = new C;
        break;
    
    default:
        break;
    }
    return res;
}

void identify(Base* p){
    std::cout << "pointer identify: ";

    A* a = dynamic_cast<A*>(p);
    B* b = dynamic_cast<B*>(p);
    C* c = dynamic_cast<C*>(p);
    if (a)
        std::cout << "Sous-classe de type A" << std::endl;
    if (b)
        std::cout << "Sous-classe de type B" << std::endl;
    if (c)
        std::cout << "Sous-classe de type C" << std::endl;
}

void identify(Base& p){
    std::cout << "reference identify: ";
    try{
        A &a = dynamic_cast <A&>(p);
        std::cout << "Sous-classe de type A" << std::endl;
    }
    catch (std::exception &e){}
    try{
        B &a = dynamic_cast <B&>(p);
        std::cout << "Sous-classe de type B" << std::endl;
    }
    catch (std::exception &e){}
    try{
        C &a = dynamic_cast <C&>(p);
        std::cout << "Sous-classe de type C" << std::endl;
    }
    catch (std::exception &e){}

}

int main(){
    int i = 0;
    Base    *p;
    srand (time(NULL));

    while (i < 5){
        p = generate();
        identify(p);
        identify(*p);
        i++;
        delete p;
        std::cout << std::endl;
    }
}