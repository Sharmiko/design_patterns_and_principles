#include <list>

#include "Component.h"



class Composite : public Component {
protected:
    std::list<Component *> children_;
public:
    void Add(Component *component) override {
        this->children_.push_back(component);
        component->SerParent(this);
    }

    void Remove(Component *component) override {
        this->children_.remove(component);
        component->SerParent(nullptr);
    }

    bool IsComposite() const override {
        return true;
    }

    std::string Operation() const override {
        std::string result;
        for (const Component *c : this->children_)
        {
            result += c->Operation();
            if (c != this->children_.back())
            {
                result += "+";
            }
        }

        return "Branch(" + result + ")";
    }
};
