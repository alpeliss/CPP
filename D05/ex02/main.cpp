#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(){
    Bureaucrat  noob("noob",150);
    Bureaucrat  boss("boss",1);
    SCForm        trees("garden");
    PPForm        pardon("me");
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
}
