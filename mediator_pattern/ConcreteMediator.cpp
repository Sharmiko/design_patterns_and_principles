#include <string>
#include <iostream>

#include "ProcessA.cpp"
#include "BaseComponent.h"
#include "ConcreteMediator.h"


ConcreteMediator::ConcreteMediator(ProcessA *processA, ProcessB *processB)
{
    this->processA = processA;
    this->processA->set_mediator(this);

    this->processB = processB;
    this->processB->set_mediator(this);
}


void ConcreteMediator::notify(BaseComponent *sender, std::string event) 
{   
    char action = event[0];
    char process_name = event[1];

    if (action == 'f')
    {
        std::cout << "File is not longer busy. Process" << process_name << " finished\n" << std::endl;
        this->release();
    }
    else if (this->is_busy)
    {
        std::cout << "Mediator denied action from Process" << process_name << "\n" << std::endl;
    }
    else
    {
        if (action == 'r')
        {
            std::cout << "Mediator allows Process" << process_name << " to read the file\n" << std::endl;
            this->lock();
        }
        else if (action == 'w')
        {
            std::cout << "Mediator allows Process" << process_name << " to write to the file\n" << std::endl;
            this->lock();
        }
    }   
}


void ConcreteMediator::lock()
{
    this->is_busy = true;
}


void ConcreteMediator::release()
{
    this->is_busy = false;
}

