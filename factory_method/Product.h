#ifndef PRODUCT
#define PRODUCT

#include <string>


class Product {
public:
    virtual ~Product() {};
    virtual std::string Operation() const = 0;
};


#endif