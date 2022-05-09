#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(){
try
{
    Bureaucrat  joe("Joe",51);
    Bureaucrat  tom("Tom",150);
    Bureaucrat  bill("Bill",1);
    SCForm        a1("test");
    PPForm        a2("test");
    RRForm        a3("test");
    joe.signForm(a1);
    bill.signForm(a1);
    a1.beSigned(bill);
    bill.signForm(a1);


    std::cout << a1 << std::endl;
    std::cout << a2 << std::endl;
    std::cout << a3 << std::endl;

    a3.execute(tom);
}
catch (Bureaucrat::GradeTooHighException & e)
{
    std::cout << "No grade above 1!" << std::endl;
}
catch (Bureaucrat::GradeTooLowException & e)
{
    std::cout << "No grade below 150!" << std::endl;
}
catch (AForm::GradeTooLowException & e)
{
    std::cout << "No form grade below 150 and you can't sign form above your grade." << std::endl;
}
catch (AForm::GradeTooHighException & e)
{
    std::cout << "No form grade above 1!" << std::endl;
}
catch (AForm::AlreadySignedException & e)
{
    std::cout << "Can't be signed twice" << std::endl;
}
}