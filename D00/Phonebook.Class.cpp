#include "Phonebook.Class.hpp"


Phonebook::Phonebook() {
    this->_PROMPT();
	return ;
}

Phonebook::~Phonebook(void){
	return ;
}

void    Phonebook::_ADD(void){
    int nb;

    nb = this->_contacts->getnbInst();
    if (nb >= 8){
        std::cout << "too many contacts" << std::endl;
        return ;
    }
    std::string datas[5];
    std::cout << "Enter First_name :";
    std::cin >> datas[0];
    std::cout << "Enter Last_name :";
    std::cin >> datas[1];
    std::cout << "Enter Nickname :";
    std::cin >> datas[2];
    std::cout << "Enter Phone_number :";
    std::cin >> datas[3];
    std::cout << "Enter Darkest_secret :";
    std::cin >> datas[4];
    this->_contacts[nb].set_contact(datas);
    return ;
}

void Phonebook::_print_to_format(std::string s) const{
    if (s.length() > 10)
    {
        s = s.insert(9, ".");
        s = s.substr(0, 10);
    }
    else
        while (s.length() < 10)
            s = s.insert(0, " ");
    std::cout << s;
    std::cout << "|";
}

void    Phonebook::_SEARCH(void) const{
    int nb;
    int i = 0;
    int j;
    const std::string   *datas;

    nb = this->_contacts->getnbInst();

    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    while (i < nb){
        datas = this->_contacts[i].get_infos();
        j = 0;

        std::cout << "|         " << i + 1 << "|";
        while (j < 3){
            this->_print_to_format(datas[j]);
            j++;
        }
        i++;
        std::cout << std::endl;
    }
    return ;
}

void    Phonebook::_PROMPT(void){
    std::string entry;

    while (true){
        std::cout << "Enter: ADD, SEARCH OR EXIT";
        std::cin >> entry;
        if (!entry.compare("ADD"))
            this->_ADD();
	    if (!entry.compare("SEARCH"))
            this->_SEARCH();
	    if (!entry.compare("EXIT"))
		    exit(0);
    }
}