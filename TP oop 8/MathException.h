#ifndef EXCEPTIONZERO_H_INCLUDED
#define EXCEPTIONZERO_H_INCLUDED

#include<iostream>

#include<exception>
using namespace std;


class MathException : public exception
{
public:
    MathException( string m="None")
    {
        message=m;
    }
    string what()
    {
        return message;
    }

protected:
    string message;

};
#endif // EXCEPTIONZERO_H_INCLUDED
