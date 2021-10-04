#include "AbstractProductA.h"


class ConcreteProductA1 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override 
    {
        return "The result of the product A1.";
    }
};
