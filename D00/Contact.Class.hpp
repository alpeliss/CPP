#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H
#include "iostream"

class Contact{

public:

	Contact();
	~Contact(void);
    void    set_contact(std::string _datas[5]);
    const std::string *get_infos() const;
    static int    getnbInst(void); 

private:

	std::string   _datas[5];
    static int  _nbInst;


};

#endif