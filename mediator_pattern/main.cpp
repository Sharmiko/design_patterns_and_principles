#include "ProcessA.cpp"
#include "ProcessB.cpp"
#include "ConcreteMediator.h"

int main()
{
    ProcessA *processA = new ProcessA;
    ProcessB *processB = new ProcessB;
    ConcreteMediator *mediator = new ConcreteMediator(processA, processB);

    processA->action_read();
    processA->action_finish();

    processA->action_write();
    processB->action_read();

    processA->action_finish();
    processB->action_read();

    return 0;
}