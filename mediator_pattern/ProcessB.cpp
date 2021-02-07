#ifndef PROCESS_B
#define PROCESS_B

#include <iostream>
#include "BaseComponent.h"


class ProcessB : public BaseComponent {
public:

    bool is_performing = false;

    void action_read()
    {
        std::cout << "Process B performs read action" << std::endl;
        this->mediator_->notify(this, "rB");
    }

    void action_finish()
    {
        std::cout << "Process B finished last action" << std::endl;
        this->mediator_->notify(this, "fB");
    }
};

#endif