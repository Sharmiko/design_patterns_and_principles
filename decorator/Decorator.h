#ifndef DECORATOR
#define DECORATOR

#include "Component.h"


class Decorator : public Component {
protected:
    Component *component_;
public:
    Decorator(Component *component) : component_(component) {}
    std::string Operation() const override {
        return this->component_->Operation();
    }
};


#endif