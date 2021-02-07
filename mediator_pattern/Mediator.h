#ifndef MEDIATOR
#define MEDIATOR

#include <string>

#include "BaseComponent.h"

class BaseComponent;

class Mediator {
public:
    virtual void notify(BaseComponent *sender, std::string event) = 0;
};


#endif