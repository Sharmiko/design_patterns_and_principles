#include <unordered_map>
#include "Prototype.cpp"
#include "ConcretePrototype1.cpp"
#include "ConcretePrototype2.cpp"


class PrototypeFactory {
private:
    std::unordered_map<Type, Prototype *, std::hash<int>> prototypes_;
public:
    PrototypeFactory() {
        prototypes_[Type::PROTOTYPE_1] = new ConcretePrototype1("PROTOTYPE_1", 50.f);
        prototypes_[Type::PROTOTYPE_2] = new ConcretePrototype2("PROTOTYPE_2", 60.f);
    }

    ~PrototypeFactory() {
        delete prototypes_[Type::PROTOTYPE_1];
        delete prototypes_[Type::PROTOTYPE_2];
    }

    Prototype *CreatePrototype(Type type) {
        return prototypes_[type]->Clone();
    }
};