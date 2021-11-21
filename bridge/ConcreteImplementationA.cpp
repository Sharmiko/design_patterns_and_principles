#include "Implementation.h"


class ConcreteImplementationA : public Implementation {
public:
    std::string OperationImplementation() const override {
        return "ConcreteImplementationA: platform A.\n";
    }
};
