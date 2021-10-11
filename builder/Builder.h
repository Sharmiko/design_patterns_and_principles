#ifndef BUILDER
#define BUILDER


class Builder {
public:
    virtual ~Builder() {};
    virtual void ProductPartA() const = 0;
    virtual void ProductPartB() const = 0;
    virtual void ProductPartC() const = 0;
};


#endif