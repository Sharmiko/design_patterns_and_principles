#include "Creator.h"
#include "ConcreteProduct1.cpp"


class ConcreteCreator1 : public Creator {
public:
    Product* FactoryMethod() const override {
        return new ConcreteProduct1();
    }
};
