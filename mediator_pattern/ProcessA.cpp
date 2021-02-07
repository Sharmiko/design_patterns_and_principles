#ifndef PROCESS_A
#define PROCESS_A

#include <iostream>
#include "BaseComponent.h"


class ProcessA : public BaseComponent {
public:
    void action_read()
    {
        std::cout << "Process A performs read action" << std::endl;
        this->mediator_->notify(this, "rA");
    }

    void action_write()
    {
        std::cout << "Process A performs write action" << std::endl;
        this->mediator_->notify(this, "wA");
    }

    void action_finish()
    {
        std::cout << "Process A finished last action" << std::endl;
        this->mediator_->notify(this, "fA");
    }
};

#endif