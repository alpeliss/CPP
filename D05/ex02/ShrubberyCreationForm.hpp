#ifndef SCFORM_H
# define SCFORM_H

#include "iostream"
#include "Form.hpp"

class SCForm: public AForm{

public:
    SCForm ();
    SCForm (std::string target);
    SCForm(SCForm const & src);
    ~SCForm();

    SCForm & operator=(SCForm const & rhs);
    void execute(Bureaucrat const & executor) const;

private:
    std::string _target;


};

#endif