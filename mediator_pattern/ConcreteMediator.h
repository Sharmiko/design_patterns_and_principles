#ifndef CONCRETEMEDIATOR
#define CONCRETEMEDIATOR

#include <string>

#include "Mediator.h"
#include "ProcessA.cpp"
#include "ProcessB.cpp"
#include "BaseComponent.h"


class ConcreteMediator : public Mediator {
private:
    ProcessA *processA;
    ProcessB *processB;
    bool is_busy = false;
public:
    ConcreteMediator(ProcessA *processA, ProcessB *processB);
    void notify(BaseComponent *sender, std::string event) override;
    void lock();
    void release();
};


#endif