#ifndef DIVIDEBYZEROEXCEPTION_H_INCLUDED
#define DIVIDEBYZEROEXCEPTION_H_INCLUDED

#include"MathException.h"

class DevideByZeroException : public MathException
{
public:
    DevideByZeroException(): MathException("Devide By Zero attempt")
    {

    }

};

#endif // DIVIDEBYZEROEXCEPTION_H_INCLUDED
