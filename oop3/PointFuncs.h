#ifndef POINTFUNCS_H
#define POINTFUNCS_H

cPoint :: cPoint()
{
}

cPoint :: cPoint(double X, double Y, double Z)
{
    this->X = X;
    this->Y = Y;
    this->Z = Z;
}

cPoint :: ~cPoint()
{
}

void cPoint :: set_X(double X)
{
    this->X = X;
}

void cPoint :: set_Y(double Y)
{
    this->Y = Y;
}

void cPoint :: set_Z(double Z)
{
    this->Z = Z;
}

double cPoint :: get_X()
{
    return this->X;
}

double cPoint :: get_Y()
{
    return this->Y;
}

double cPoint :: get_Z()
{
    return this->Z;
}

void cPoint :: change(BaseChange* ChangeType)
{
    //
}

#endif // POINTFUNCS_H
