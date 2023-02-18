#ifndef RATIONUM_H_INCLUDED
#define RATIONUM_H_INCLUDED
#include"string"
#include <iostream>
using namespace std;

class  RationalNumber
{
public:
    RationalNumber();
    RationalNumber(int a, int b);
    RationalNumber(  const RationalNumber & );

    void reduce(int a, int b);

    RationalNumber operator+( RationalNumber& )  ;
    RationalNumber operator*( RationalNumber& )  ;
    RationalNumber operator-( RationalNumber &)  ;
    RationalNumber operator/( RationalNumber& )  ;

    RationalNumber &operator<( RationalNumber& ) const ;
    bool operator==( RationalNumber& ) const ;

    bool operator!=( RationalNumber& ) const ;

    void operator-();
    RationalNumber operator++();
    RationalNumber operator++(int);

    void operator+=( RationalNumber& );

    operator float() const
    {
        return ((float)num/den);
    }
    operator string() const
    {
        return (to_string(num/den));
    }



    void print();

    friend ostream &operator<< ( ostream & output, const RationalNumber &a);
    friend istream &operator>> ( istream & input, RationalNumber&b);
private:
    int num, den;

};


#endif // RATIONUM_H_INCLUDED
