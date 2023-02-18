#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include<algorithm>
#include<iostream>

using namespace std;

class Rational
{
public:
    Rational();
    Rational(int x, int y);
    void reduce(int a, int b)
    {
        if(b==0) return;
        if(a==0) return;
        int p=__gcd(a,b);

        num=a/p;
        den=b/p;
    }

    void setrat(int w, int z)
    {

        reduce(w,z);
        num=w;
        den=z;

    }
    Rational getra();

    void Displayr()
    {
        cout << num << "/" << den;
    }

private:

    int num;
    int den;

};

class Point
{
private:

    Rational X,Y;

public:

    Point ();
    Point (int x, int y);
    Point setp();
    void display ()
    {
        cout << "( " ;
        X.Displayr() ;
        cout << " , " ;
        Y.Displayr() ;
        cout << ")";
    }
};


class segment
{
public:

    segment();
    segment (Rational a, Rational b);
    void setseg();
    Point getseg();

    friend void Display (segment);

private:

    Point P1,P2;
};





#endif // POINT_H_INCLUDED
