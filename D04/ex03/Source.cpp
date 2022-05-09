#include "Source.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
		this->_learned[i] = NULL;
    return;
}


MateriaSource::MateriaSource(MateriaSource const & src){
	for (int i = 0; i < 4; i++)
	{
		if (src._learned[i] != NULL)
			delete(src._learned[i]);
		_learned[i] = NULL;
	}
    return ;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
	{
		if (this->_learned[i] != NULL)
			delete(this->_learned[i]);
		_learned[i] = NULL;
	}
    return ;
}


MateriaSource & MateriaSource::operator=(MateriaSource const & rhs){
	for (int i = 0; i < 4; i++)
	{
		if (rhs._learned[i] != NULL)
			this->_learned[i] = rhs._learned[i];
	}
	return *this;
}


void MateriaSource::learnMateria(AMateria* aMateria)
{
	int i = 0;
	while(i < 4)
	{
		if (this->_learned[i] == NULL)
		{
			_learned[i] = aMateria;
			return ;
		}
		i++;
	}

	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while(i < 4)
	{
		if (this->_learned[i] && this->_learned[i]->getType().compare(type) == 0){
			return this->_learned[i]->clone();
		}
		i++;
	}
	return NULL;
}