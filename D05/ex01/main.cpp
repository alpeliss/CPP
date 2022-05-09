#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(){
/*try
{
    Bureaucrat  joe("Joe",51);
    Bureaucrat  tom("Tom",150);
    Bureaucrat  bill("Bill",1);
    Form        a1("super formulaire", 10, 100);
    joe.signForm(a1);
    bill.signForm(a1);
    a1.beSigned(bill);
    bill.signForm(a1);


    std::cout << a1 << std::endl;
}*/

Bureaucrat  boss("Boss",1);
Bureaucrat noob("Noobie",150);
Form       ultra("ultra", 1 , 1);
Form      easy("easy", 150, 150);

std::cout << boss <<std::endl;
std::cout << noob <<std::endl;
std::cout << ultra <<std::endl;
std::cout << easy <<std::endl;

try{
     boss.promote();
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
     Bureaucrat  joe("Joe",10);
}
catch(const std::exception& e){
	std::cerr << e.what() << std::endl;
}

try{
     Bureaucrat  joe("Joe",10);
}
catch(const std::exception& e){
	std::cerr << e.what() << std::endl;
}
}