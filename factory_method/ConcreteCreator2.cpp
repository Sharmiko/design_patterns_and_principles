#include "Creator.h"
#include "ConcreteProduct2.cpp"


class ConcreteCreator2 : public Creator {
public:
    Product* FactoryMethod() const override {
        return new ConcreteProduct2();
    }
};
