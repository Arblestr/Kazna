#ifndef BASECHANGE_H
#define BASECHANGE_H
#include "math.h"

class cPoint;

class BaseChange
{
public:
    BaseChange();
    ~BaseChange();

    virtual void run(cPoint* Point) = 0;
};


#endif // BASECHANGE_H
