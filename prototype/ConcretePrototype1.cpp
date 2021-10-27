#include "Prototype.cpp"


class ConcretePrototype1 : public Prototype {
private:
    float concrete_prototype_field1_;
public:
    ConcretePrototype1(std::string prototype_name, float concrete_prototype_field)
    : Prototype(prototype_name), concrete_prototype_field1_(concrete_prototype_field) {}

    Prototype *Clone() const override {
        return new ConcretePrototype1(*this);
    }
};
