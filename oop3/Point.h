#ifndef POINT_H
#define POINT_H
#include "BaseClass.h"

class cPoint: public BaseClass
{
public:
    cPoint();
    cPoint(double X, double Y, double Z);

    ~cPoint();

    void set_X(double X);
    void set_Y(double Y);
    void set_Z(double Z);

    double get_X();
    double get_Y();
    double get_Z();

    virtual void change(BaseChange* ChangeType);

private:
    double X;
    double Y;
    double Z;

};

#include "PointFuncs.h"

#endif // POINT_H
