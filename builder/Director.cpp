#include "Builder.h"


class Director {
private:
    Builder *builder;
public:
    void set_builder(Builder *builder) {
        this->builder = builder;
    }

    void BuildMinimalViableProduct() {
        this->builder->ProductPartA();
    }

    void BuildFullFeaturedProduct() {
        this->builder->ProductPartA();
        this->builder->ProductPartB();
        this->builder->ProductPartC();
    }
};
