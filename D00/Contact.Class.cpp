#include "Phonebook.Class.hpp"


Contact::Contact() {
	return ;
}

Contact::~Contact(void){
	return ;
}

void    Contact::set_contact(std::string datas[5]){
    Contact::_nbInst++;
    int i = 0;
    while (i < 5){
        this->_datas[i] = datas[i];
        i++;
    }
}

const std::string *Contact::get_infos() const{
    return (this->_datas);
}

int Contact::getnbInst(){
    return Contact::_nbInst;
}

int Contact::_nbInst = 0;