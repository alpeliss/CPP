#include "Bureaucrat.hpp"

int main(){
    
try{
    Bureaucrat  joe("Joe",0);
}
catch(const std::exception& e){
	std::cerr << e.what() << std::endl;
}
    
try{
    Bureaucrat  joe("Joe",151);
}
catch(const std::exception& e){
	std::cerr << e.what() << std::endl;
}
    
try{
    Bureaucrat  joe("Joe",1);
    std::cout << joe << std::endl;
    joe.promote();
}
catch(const std::exception& e){
	std::cerr << e.what() << std::endl;
}
    
try{
    Bureaucrat  joe("Joe",150);
    std::cout << joe << std::endl;
    joe.demote();
    std::cout << "Ne s'affiche pas" << std::endl;
}
catch(const std::exception& e){
	std::cerr << e.what() << std::endl;
}


}