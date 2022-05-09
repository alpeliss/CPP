#ifndef SOURCE_H
# define SOURCE_H

#include <iostream>
#include "Materia.hpp"
#include "Character.hpp"


class AMateria;

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;

};

class MateriaSource : public IMateriaSource{
public:
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
    
    virtual ~MateriaSource();
    MateriaSource();
    MateriaSource(MateriaSource const & src);
    MateriaSource & operator=(MateriaSource const & rhs);

private:
    AMateria *_learned[4];

};

#endif