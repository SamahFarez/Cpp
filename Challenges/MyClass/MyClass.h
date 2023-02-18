#ifndef MYCLASS_H
#define MYCLASS_H

#include<iostream>

using namespace std;

class MyClass
{
public:
    MyClass();
    MyClass(int a, double b);
    void setValues( int c, double d);
    void PrintValue();

//======================================== function using This pointer
    MyClass &addOne()
    {
        this->x = x+1;

        return *this;
    }
//======================================== friend functions
    friend void switchfun (MyClass &);
    friend void setcount(MyClass, int t);
    friend void returncount(MyClass ctr );

//======================================== Operator overloading
    MyClass operator+(MyClass &m1);

private:
    int x;
    double y;
    static int i;
    static int i2;

};


#endif // MYCLASS_H
