#include "Intern.hpp"


Intern::Intern(){
    return ;
}

Intern::Intern(Intern const & src){
    *this = src;
    return ;
}

Intern::~Intern(){
    return ;
}

Intern & Intern::operator=(Intern const & rhs){
    return (*this);
}

AForm*	Intern::makeForm(std::string form, std::string target)
{
	std::string form_names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	AForm * ret;
	while (i < 3)
	{
		if (form == form_names[i])
			break;
		i++;\
	}
	switch(i)
	{
		case 0:{
			ret = new SCForm(target);
            break;
		}
		case 1:{
			ret = new RRForm(target);
            break;
		}
		case 2:{
			ret = new PPForm(target);
            break;
		}
		case 3:{
			throw Intern::Unknownform();
		}
	}

	std::cout << "Intern creates " << *ret << std::endl;
	return ret;
}

const char* Intern::Unknownform::what() const throw(){
    return ("Type of form Unknown. Impossible to make it.");		
} 