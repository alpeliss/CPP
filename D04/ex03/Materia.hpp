#ifndef MATERIA_H
# define MATERIA_H

#include <iostream>
#include "Character.hpp"
#include "Source.hpp"


class ICharacter;

class AMateria
{
private:
    AMateria();
    AMateria(AMateria const & src);
    AMateria & operator=(AMateria const & rhs);

protected:
    std::string _type;

public:
    virtual ~AMateria();
    AMateria(std::string const & type);
    std::string const & getType() const; 
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


class Ice : public AMateria{
public:
    Ice();
    virtual ~Ice();
    Ice(Ice const & src);
    Ice & operator=(Ice const & rhs);
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

private:

};

class Cure: public AMateria{
public:
    Cure();
    virtual ~Cure();
    Cure(Cure const & src);
    Cure & operator=(Cure const & rhs);
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

private:\

};

#endif