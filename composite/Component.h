#ifndef COMPONENT
#define COMPONENT

#include <string>


class Component {
protected:
    Component *parent_;
public:
    virtual ~Component() {}

    void SerParent(Component *parent) {
        this->parent_ = parent;
    }

    Component *GetParent() const {
        return this->parent_;
    }

    virtual void Add(Component *component) {}

    virtual void Remove(Component *componet) {}

    virtual bool IsComposite() const {
        return false;
    }

    virtual std::string Operation() const = 0;
};  


#endif