#ifndef BASEACTION_H
#define BASEACTION_H
#include "Composite.h"

class BaseAction
{
public:
    BaseAction();
    ~BaseAction();

    virtual void make(cComposite* Object) = 0;
};

#endif // BASEACTION_H
