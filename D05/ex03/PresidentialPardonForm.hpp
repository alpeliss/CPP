#ifndef PPFORM_H
# define PPFORM_H

#include "iostream"
#include "Form.hpp"

class PPForm: public AForm{

public:
    PPForm ();
    PPForm (std::string target);
    PPForm(PPForm const & src);
    virtual ~PPForm();

    PPForm & operator=(PPForm const & rhs);
    virtual void action() const;

private:
    std::string _target;


};

#endif