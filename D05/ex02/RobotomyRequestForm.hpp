#ifndef RRFORM_H
# define RRFORM_H

#include "iostream"
#include "Form.hpp"

class RRForm: public AForm{

public:
    RRForm ();
    RRForm (std::string target);
    RRForm(RRForm const & src);
    ~RRForm();

    RRForm & operator=(RRForm const & rhs);
    void execute(Bureaucrat const & executor) const;

private:
    std::string _target;


};


#endif