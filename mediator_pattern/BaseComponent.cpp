#include "Mediator.h"
#include "BaseComponent.h"


void BaseComponent::set_mediator(Mediator *mediator)
{
    this->mediator_ = mediator;
}

