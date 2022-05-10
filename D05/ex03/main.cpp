#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"



int main(){
    Bureaucrat  noob("noob",150);
    Bureaucrat  boss("boss",1);
    SCForm        trees("garden");
    PPForm        pardon("Everyone");
    RRForm        robot("bender");


    std::cout << trees << std::endl;
    std::cout << pardon << std::endl;
    std::cout << robot << std::endl;

    noob.signForm(trees);
    boss.signForm(trees);
    noob.executeForm(trees);
    boss.executeForm(trees);

    boss.executeForm(pardon);
    boss.signForm(pardon);
    boss.executeForm(pardon);

    boss.signForm(robot);
    boss.executeForm(robot);
    boss.executeForm(robot);
    boss.executeForm(robot);
    boss.executeForm(robot);
    boss.executeForm(robot);


    Intern someRandomIntern;
    AForm* rrf;
    try{
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *rrf << std::endl;
    delete (rrf);

    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    std::cout << *rrf << std::endl;
    delete (rrf);

    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    std::cout << *rrf << std::endl;
    delete (rrf);

     rrf = someRandomIntern.makeForm("presial padon", "Bender");
    }
    catch(const std::exception& e){
	    std::cerr << e.what() << std::endl;
    }
}
