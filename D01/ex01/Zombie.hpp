#ifndef ZOMBIE_H
# define ZOMBIE_H
#include "iostream"

class Zombie{

public:

	Zombie( );
	~Zombie(void);
    void    announce( void );
    void    add_name(std::string name);

private:
    std::string   _name;

};

#endif