#include"MyClass.h"

//====================== static variables
int MyClass::  i=0;
int MyClass::  i2;

//====================== Constructors
MyClass :: MyClass()
{
    x=0;
    y=0;
    i++;

}

MyClass :: MyClass(int a, double b)
{
    x=0;
    y=0;
    i++;

    setValues( a, b);

}

//====================== Member functions
void MyClass:: setValues ( int c, double d)
{
    x=( c <=20 && c>=0)? c : 0;
    y=( d>=0 && d<=20) ? d : 0;

}

void MyClass :: PrintValue()
{
    cout << "\nObject " << i << endl <<"num1= " << x << endl << "num2= " << y<< endl;

}

//====================== Friend functions
void switchfun(MyClass &c)
{
    double temp;
    temp=c.x;
    c.x=c.y;
    c.y=temp;

    cout << endl << "Switch!!" << endl;
}

void setcount(MyClass ctr, int t)
{
    ctr.i2=ctr.i;
    ctr.i=t;
}

void returncount(MyClass ctr )
{
    ctr.i=ctr.i2;
}

//====================== Operator function
MyClass  MyClass ::operator+(MyClass &m1)
{
    MyClass sum;
    sum.x=x+m1.x;
    sum.y=y+m1.y;

    return sum;
}

