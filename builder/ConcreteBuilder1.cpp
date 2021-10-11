#include "Builder.h"
#include "Product1.cpp"


class ConcreteBuilder1 : public Builder {
private:
    Product1 *product;
public:
    ConcreteBuilder1() {
        this->Reset();
    }

    ~ConcreteBuilder1() {
        delete this->product;
    }

    void Reset() {
        this->product = new Product1();
    }

    void ProductPartA() const override {
        this->product->parts_.push_back("PartA1");
    }

    void ProductPartB() const override {
        this->product->parts_.push_back("PartB1");
    }

    void ProductPartC() const override {
        this->product->parts_.push_back("PartC1");
    }

    Product1 *GetProduct() {
        Product1 *result = this->product;
        this->Reset();
        return result;
    }
};