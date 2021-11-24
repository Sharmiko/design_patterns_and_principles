#ifndef COMPONENT
#define COMPONENT

#include <string>


class Component {
public:
    virtual ~Component() {}
    virtual std::string Operation() const = 0;
};


#endif