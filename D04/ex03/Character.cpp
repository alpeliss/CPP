#include "Character.hpp"

Character::Character(){
    this->_name = "Unamed";
    for (int i = 0; i < 4; i++)
		this->_learned[i] = NULL;
    return;
}

Character::Character(std::string name){
    this->_name = name;
    for (int i = 0; i < 4; i++)
		this->_learned[i] = NULL;
    return;
}


Character::Character(Character const & src){
	this->_name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (src._learned[i] != NULL)
			delete(src._learned[i]);
		_learned[i] = NULL;
	}
    return ;
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
	{
		if (this->_learned[i] != NULL)
			delete(this->_learned[i]);
		_learned[i] = NULL;
	}
    return ;
}

std::string const & Character::getName() const{
    return this->_name;
}

Character & Character::operator=(Character const & rhs){
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (rhs._learned[i] != NULL)
			this->_learned[i] = rhs._learned[i];
	}
	return *this;
}

void    Character::equip (AMateria *m){

	int i = 0;
	if (m == NULL)
		return ;
	while (i < 4)
	{
		if (this->_learned[i] == NULL)
		{
			this->_learned[i] = m;
			return ;
		}
		i++;
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_learned[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0 && idx < 4) && _learned[idx] != NULL)
		this->_learned[idx]->use(target);
	return ;
}