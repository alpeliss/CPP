#include "iostream"

int main(){
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Variable  : " << &str << std::endl;
    std::cout << "Pointeur  : " << stringPTR << std::endl;
    std::cout << "Reference : " << &stringREF << std::endl;

    std::cout << "Variable  : " << str << std::endl;
    std::cout << "Pointeur  : " << *stringPTR << std::endl;
    std::cout << "Reference : " << stringREF << std::endl;
	return 1;
}