#include "Materia.hpp"

AMateria::AMateria(std::string const & type): _type(type){
    return ;
}

AMateria::~AMateria(){
    return ;
}
void AMateria::use(ICharacter& target){
	return;
}

std::string const & AMateria::getType() const{
    return this->_type;
}

Ice::Ice() : AMateria("ice"){
    return;
};

Cure::Cure() : AMateria("cure"){
    return;
}

Ice::~Ice(){
    return;
};

Cure::~Cure(){
    return;
}

Ice::Ice(Ice const & src): AMateria("ice"){
    *this = src;
    return;
}

Cure::Cure(Cure const & src): AMateria("cure"){
    *this = src;
    return;
}

Ice& Ice::operator=(Ice const & rhs){
	return *this;
}

Cure& Cure::operator=(Cure const & rhs){
	return *this;
}

AMateria* Cure::clone() const
{
	Cure *tmp;
	tmp = new Cure(*this);
	return tmp;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return;
}

AMateria* Ice::clone() const
{
	Ice *tmp;
	tmp = new Ice(*this);
	return tmp;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}