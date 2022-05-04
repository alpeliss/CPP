#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include "iostream"
#include "Contact.Class.hpp"

class Phonebook{

public:

	Phonebook(void);
	~Phonebook(void);

	

private:

	void    _ADD(void) ;
    void    _SEARCH(void) const;
    void    _PROMPT(void) ;
	Contact _contacts[8];
    void _print_to_format(std::string s) const;


};

#endif