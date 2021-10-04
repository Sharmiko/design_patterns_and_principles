#ifndef ABSTRACTPRODUCTB
#define ABSTRACTPRODUCTB


#include <string>
#include "AbstractProductA.h"

class AbstractProductB {
public:
    virtual ~AbstractProductB() {};
    virtual std::string UsefulFunctionB() const = 0;
    virtual std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};


#endif