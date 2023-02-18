#ifndef OVERFLOWEXCEPTION_H_INCLUDED
#define OVERFLOWEXCEPTION_H_INCLUDED

#include"MathException.h"


class OverflowException : public MathException
{
public:
    OverflowException():MathException("Overflow attempt\a")
    {

    }

};



#endif // OVERFLOWEXCEPTION_H_INCLUDED
