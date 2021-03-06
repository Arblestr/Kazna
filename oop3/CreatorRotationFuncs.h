#ifndef CREATORROTATIONFUNCS_H
#define CREATORROTATIONFUNCS_H
#include "BaseChangeError.h"

CreatorRotationX :: CreatorRotationX()
{
}

CreatorRotationX :: ~CreatorRotationX()
{
}

CreatorRotationX :: CreatorRotationX(double Angle, cPoint* Center)
{
    this->Center = Center;
    this->Angle = Angle;
}

CreatorRotationX :: BaseChange* get_change()
{
    BaseChange* RotationXChange = new RotationX(this->Angle,this->Center);

    if (!RotationXChange)
    {
        throw ChangeMemoryError();
    }

    return RotationXChange;
}


CreatorRotationY :: CreatorRotationY()
{
}

CreatorRotationY :: ~CreatorRotationY()
{
}

CreatorRotationY :: CreatorRotationY(double Angle, cPoint* Center)
{
    this->Center = Center;
    this->Angle = Angle;
}

CreatorRotationY :: BaseChange* get_change()
{
    BaseChange* RotationYChange = new RotationY(this->Angle,this->Center);

    if (!RotationYChange)
    {
        throw ChangeMemoryError();
    }

    return RotationYChange;
}


CreatorRotationZ :: CreatorRotationZ()
{
}

CreatorRotationZ :: ~CreatorRotationZ()
{
}

CreatorRotationZ :: CreatorRotationZ(double Angle, cPoint* Center)
{
    this->Center = Center;
    this->Angle = Angle;
}

CreatorRotationZ :: BaseChange* get_change()
{
    BaseChange* RotationZChange = new RotationX(this->Angle,this->Center);

    if (!RotationZChange)
    {
        throw ChangeMemoryError();
    }

    return RotationZChange;
}

#endif // CREATORROTATIONFUNCS_H
