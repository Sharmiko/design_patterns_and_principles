#include "Decorator.h"
#include "Component.h"


class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component *component) : Decorator(component) {}
    std::string Operation() const override {
        return "ConcreteDecoratorB(" + Decorator::Operation() + ")";
    }
};
