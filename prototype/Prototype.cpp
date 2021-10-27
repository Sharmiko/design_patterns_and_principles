#ifndef PROTOTYPE
#define PROTOTYPE

#include <string>
#include <iostream>


enum Type {
    PROTOTYPE_1 = 0,
    PROTOTYPE_2
};


class Prototype {
protected:
    std::string prototype_name_;
    float protototype_field_;
public:
    Prototype() {}
    Prototype(std::string prototype_name) : prototype_name_(prototype_name_) {}
    virtual ~Prototype() {}
    virtual Prototype *Clone() const = 0;
    virtual void Method(float prototype_field) {
        this->protototype_field_ = prototype_field;
        std::cout << "Call Method from " << prototype_name_ << " with field: " << prototype_field << std::endl;
    }
};


#endif