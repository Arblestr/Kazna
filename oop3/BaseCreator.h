#ifndef BASECREATOR_H
#define BASECREATOR_H
#include "BaseChange.h"

class BaseCreator
{
public:
    BaseCreator();
    ~BaseCreator();
    virtual BaseChange* get_change() = 0;
};

#endif // BASECREATOR_H
