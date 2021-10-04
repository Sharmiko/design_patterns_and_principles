#include "AbstractFactory.h"
#include "ConcreteProductA2.cpp"
#include "ConcreteProductB2.cpp"


class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA *CreateProductA() const override
    {
        return new ConcreteProductA2();
    }

    AbstractProductB *CreateProductB() const override
    {
        return new ConcreteProductB2();
    }
};
