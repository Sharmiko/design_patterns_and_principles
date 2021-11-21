#include <iostream>

#include "Abstraction.h"
#include "Implementation.h"
#include "ConcreteImplementationA.cpp"
#include "ConcreteImplementationB.cpp"




void ClientCode(const Abstraction &abstraction)
{
    std::cout << abstraction.Operation();
}


int main()
{
    Implementation *impl = new ConcreteImplementationA;
    Abstraction *abstr = new Abstraction(impl);
    ClientCode(*abstr);
    std::cout << std::endl;

    delete impl;
    delete abstr;

    impl = new ConcreteImplementationB;
    abstr = new Abstraction(impl);
    ClientCode(*abstr);

    delete impl;
    delete abstr;

    return 0;
}