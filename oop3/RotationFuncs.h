#ifndef ROTATIONFUNCS_H
#define ROTATIONFUNCS_H

RotationX :: RotationX()
{
}

RotationX :: ~RotationX()
{
}

RotationX :: RotationX(double Angle, cPoint* Center)
{
    this->Angle = Angle;
    this->Center = Center;
}

void RotationX :: run(cPoint* PointToRotate)
{
    this->X_Rotation(PointToRotate);
}


RotationY :: RotationY()
{
}

RotationY :: ~RotationY()
{
}

RotationY :: RotationY(double Angle, cPoint* Center)
{
    this->Angle = Angle;
    this->Center = Center;
}

void RotationY :: run(cPoint* PointToRotate)
{
    this->Y_Rotation(PointToRotate);
}


RotationZ :: RotationZ()
{
}

RotationZ :: ~RotationZ()
{
}

RotationZ :: RotationZ(double Angle, cPoint* Center)
{
    this->Angle = Angle;
    this->Center = Center;
}

void RotationZ :: run(cPoint* PointToRotate)
{
    this->Z_Rotation(PointToRotate);
}

#endif // ROTATIONFUNCS_H
