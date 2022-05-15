#include "Array.hpp"

int main(){
    Array<int> a(3);
    Array<int> c(a);

    a.display();
    c.display();
    int i = 0;
    while (i < a.size()){
        a[i] = i;
        i++;
    }
    Array<int> d = a;
    Array<int> e(a);
    a.display();
    c.display();
    d.display();
    e.display();

	Array<std::string>	stringArray(2);
	Array<std::string>	otherStringArray;

    stringArray.display();
	stringArray[0] = "Hi";
	stringArray[1] = "My name is Bob";
    stringArray.display();
	otherStringArray = stringArray;
    otherStringArray.display();
	otherStringArray[1] = "My name is Joe";
    stringArray.display();
    otherStringArray.display();
    stringArray = otherStringArray;
    stringArray.display();


    Array<int> test1(3);
    Array<float> test2;
    try{
        test1[-1] = 42; 
    }  
    catch(const std::exception& e){
	        std::cerr << "Index  out of range." << std::endl;
    }
    try{
        test1[3] = 42; 
    }  
    catch(const std::exception& e){
	        std::cerr << "Index  out of range." << std::endl;
    }
    try{
        test2[0] = 42; 
    }  
    catch(const std::exception& e){
	        std::cerr << "Index  out of range." << std::endl;
    } 

    return 0;
}