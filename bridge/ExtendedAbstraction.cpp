#include "Abstraction.h"


class ExtendedAbstraction : public Abstraction {
public:
    ExtendedAbstraction(Implementation *implementation) : Abstraction(implementation) {}
    std::string Operation() const override {
        return "ExtendenedAbstraction: Extended operation with:\n" + this->implementation_->OperationImplementation();
    }
};
