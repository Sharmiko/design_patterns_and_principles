#ifndef BASECOMPONENT
#define BASECOMPONENT

#include "Mediator.h"

class Mediator;

class BaseComponent {
protected:
    Mediator *mediator_; 
public:
    void set_mediator(Mediator *mediator);
};


#endif