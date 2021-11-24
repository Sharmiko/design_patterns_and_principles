#include "Decorator.h"
#include "Component.h"


class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component *component) : Decorator(component) {}
    std::string Operation() const override {
        return "ConcreteDecoratorA(" + Decorator::Operation() + ")";
    }
};
