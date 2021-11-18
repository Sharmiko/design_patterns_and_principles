#include <iostream>
#include <algorithm>


class Target {
public:
    virtual ~Target() = default;

    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
};


class Adaptee {
public:
    std::string SpecificRequest() const {
        return ".eetpadA eht fo roivaheb laicepS";
    }
};


class Adapter : public Target, public Adaptee {
public:
    Adapter() {}
    std::string Request() const override {
        std::string to_reverse = SpecificRequest();
        std::reverse(to_reverse.begin(), to_reverse.end());
        return "Adapter: (TRANSLATED) " + to_reverse;
    }
};


void ClientCode(const Target *target) {
    std::cout << target->Request();
}


int main() {
    std::cout << "Client: I can work just fine with the target objects:\n";
    Target *target = new Target;
    ClientCode(target);
    std::cout << "\n\n";

    Adaptee *adapatee = new Adaptee;
    std::cout << "Client: The Adaptee class has a weird interface. See, I don't understand it:\n";
    std::cout << "Adaptee: " << adapatee->SpecificRequest();
    std::cout << "\n\n";

    std::cout << "Client: But I can work with it via the adapter:\n";
    Adapter *adapter = new Adapter;
    ClientCode(adapter);
    std::cout << "\n";

    delete target;
    delete adapatee;
    delete adapter;

    return 0;
}