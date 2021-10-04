#include "AbstractFactory.h"
#include "ConcreteProductA1.cpp"
#include "ConcreteProductB1.cpp"


class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA *CreateProductA() const override
    {
        return new ConcreteProductA1();
    }

    AbstractProductB *CreateProductB() const override
    {
        return new ConcreteProductB1();
    }
};
