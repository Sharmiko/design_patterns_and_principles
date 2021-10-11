#include <iostream>

#include "Director.cpp"
#include "ConcreteBuilder1.cpp"



void client_code(Director &director)
{
    ConcreteBuilder1 *builder = new ConcreteBuilder1();
    director.set_builder(builder);

    std::cout << "Standard basic product:\n";
    director.BuildMinimalViableProduct();

    Product1 *p = builder->GetProduct();
    p->ListParts();
    delete p;

    std::cout << "Standard full featured product:\n";
    director.BuildFullFeaturedProduct();

    p = builder->GetProduct();
    p->ListParts();
    delete p;

    std::cout << "Custom product:\n";
    builder->ProductPartA();
    builder->ProductPartC();
    p = builder->GetProduct();
    p->ListParts();
    delete p;

    delete builder;
}


int main()
{
    Director *director = new Director();
    client_code(*director);

    delete director;

    return 0;
}