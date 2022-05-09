#ifndef PPFORM_H
# define PPFORM_H

#include "iostream"
#include "Form.hpp"

class PPForm: public AForm{

public:
    PPForm ();
    PPForm (std::string target);
    PPForm(PPForm const & src);
    ~PPForm();

    PPForm & operator=(PPForm const & rhs);
    void execute(Bureaucrat const & executor) const;

private:
    std::string _target;


};

#endif