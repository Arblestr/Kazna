#ifndef LINEFUNCS_H
#define LINEFUNCS_H

cLine :: cLine()
{
}

cLine :: ~cLine()
{
}

cLine :: cLine(cPoint* Begin, cPoint* End)
{
    this->Begin = Begin;
    this->End = End;
}

void cLine :: set_begin(cPoint* Begin)
{
    this->Begin = Begin;
}

void cLine :: set_end(cPoint* End)
{
    this->End = End;
}

cPoint* cLine :: get_begin()
{
    return this->Begin;
}

cPoint* cLine :: get_end()
{
    return this->End;
}

void cLine :: change(BaseChange* ChangeType)
{
    //
}

#endif // LINEFUNCS_H
