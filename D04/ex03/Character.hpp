#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include "Materia.hpp"
#include "Source.hpp"



class AMateria;

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;

};

class Character : public ICharacter{
public:
    Character();
    Character(std::string name);
    Character(Character const & src);
    Character & operator=(Character const & rhs);

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
    virtual ~Character();

private:
    AMateria *_learned[4];
    std::string _name;
};

#endif