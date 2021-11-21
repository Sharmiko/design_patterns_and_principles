#include "Implementation.h"


class ConcreteImplementationB : public Implementation {
public:
    std::string OperationImplementation() const override {
        return "ConcreteImplementationB: platform B.\n";
    }
};
