#include <iostream>

#include "Creator.cpp"
#include "ConcreteCreator1.cpp"
#include "ConcreteCreator2.cpp"


void ClientCode(const Creator &creator)
{
    std::cout << "Client: I'm not aware of the creator's clas, but it still works.\n"
        << creator.SomeOperation() << std::endl;
}


int main()
{
    std::cout << "App: Launched with ConcreteCreator1.\n";
    Creator *creator = new ConcreteCreator1();
    ClientCode(*creator);
    std::cout << std::endl;

    std::cout << "App: Launched with ConcreteCreator1.\n";
    Creator *creator2 = new ConcreteCreator2();
    ClientCode(*creator2);

    delete creator;
    delete creator2;

    return 0;
}