#ifndef ROOTOFNEGATIVEEXCEPTION_H_INCLUDED
#define ROOTOFNEGATIVEEXCEPTION_H_INCLUDED

#include"MathException.h"


class RootOfNegativeException : public MathException
{
public:
    RootOfNegativeException() : MathException("Root Of Negative attempt\a ")
    {

    }


};


#endif // ROOTOFNEGATIVEEXCEPTION_H_INCLUDED
