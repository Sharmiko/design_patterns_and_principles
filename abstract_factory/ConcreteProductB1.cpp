#include "AbstractProductB.h"


class ConcreteProductB1 : public AbstractProductB {
public:
    std::string UsefulFunctionB() const override 
    {
        return "The result of the product B1.";
    }

    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override 
    {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B1 collaborating with ( " + result + " )";
    }
};
