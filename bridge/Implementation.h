#ifndef IMPLEMENTATION
#define IMPLEMENTATION


#include <string>


class Implementation {
public:
    virtual ~Implementation() {}
    virtual std::string OperationImplementation() const = 0;
};


#endif