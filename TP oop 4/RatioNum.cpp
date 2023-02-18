#include <algorithm>
#include "RatioNum.h"


RationalNumber ::  RationalNumber()
{
    num=0;
    den=1;
}

RationalNumber ::  RationalNumber(  const RationalNumber &x )
{
    num=x.num;
    den=x.den;
}

RationalNumber ::  RationalNumber(int a, int b)
{

    if(b==0)
    {
        cout << "Invalid input !!";

        num=0;
        den=1;
    }

    if(b<0)
    {
        b=-b;
        a=-a;
    }

    reduce(a,b);

}


RationalNumber RationalNumber :: operator+( RationalNumber &c)
{

    return RationalNumber((num * c.den)+(c.num *den), den *c.den);
}

RationalNumber RationalNumber :: operator*( RationalNumber &m)
{
    return RationalNumber(num*m.num,den*m.den);

}

RationalNumber RationalNumber :: operator-( RationalNumber &s)
{


    return RationalNumber(num * s.den - s.num * den,den*s.den);

}

RationalNumber RationalNumber :: operator/( RationalNumber &d)
{

    return RationalNumber(num*d.den,den*d.num);

}

void RationalNumber :: operator-()
{

    num=-num;

}

RationalNumber RationalNumber :: operator  ++()
{

    num=den+num;
    reduce(num,den);

    return *this;

}


RationalNumber RationalNumber :: operator  ++( int )
{

    RationalNumber temp= *this;

    num=den+num;
    reduce(num,den);


    return temp;
}


void RationalNumber :: reduce(int a, int b)
{

    int p=__gcd(a,b);

    num=a/p;
    den=b/p;

}

void RationalNumber :: operator+=( RationalNumber &r)
{
    r.num=(num * r.den)+(r.num *den);
    r.den=den*r.den;
}

bool RationalNumber :: operator==( RationalNumber& b) const
{
    return (num==b.num && den==b.den );

}

bool RationalNumber :: operator!=( RationalNumber& b) const
{
        return !(*this==b);
}

ostream &operator<< ( ostream & output, const RationalNumber&a)
{
    output << a.num  << " / " << a.den ;

    return output;
}

istream &operator>> ( istream & input, RationalNumber&b)
{
    cout << "Enter num";
    input >> b.num ;
    cout << "Enter den ";
    input>> b.den ;

    return input;
};










