#ifndef LINE_H
#define LINE_H
#include "BaseClass.h"

class cLine: public BaseClass
{
public:
    cLine();
    cLine(cPoint* firstPoint, cPoint* secondPoint);

    ~cLine();

    void set_begin(cPoint* Begin);
    void set_end(cPoint* End);

    cPoint* get_begin();
    cPoint* get_end();

    void change(BaseChange* ChangeType);

private:
    cPoint* Begin;
    cPoint* End;

};

#include "LineFuncs.h"

#endif // LINE_H
