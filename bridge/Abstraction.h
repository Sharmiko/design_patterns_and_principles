#ifndef ABSTRACTIO
#define ABSTRACTION

#include "Implementation.h"


class Abstraction {
protected:
    Implementation *implementation_;
public:
    Abstraction(Implementation *implementation) : implementation_(implementation) {}

    virtual ~Abstraction() {}

    virtual std::string Operation() const  {
        return "Abstractioon: Base operation with:\n" + this->implementation_->OperationImplementation();
    }
};


#endif