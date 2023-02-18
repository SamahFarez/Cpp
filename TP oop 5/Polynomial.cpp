#include "Polynomial.h"

Polynomial::Polynomial()
{
    for( int i=0; i<100 ; i++)
    {
        coefficients[i]=0;
        exponents[i]=0;
    }




}

void Polynomial :: PolynomialCombine(Polynomial &)
{

}

Polynomial Polynomial:: operator+ (const Polynomial & p)
{
    Polynomial temp;
    int a=0;


    for( int j=0; j<100 ; j++)

    {
        for( int i=0; i<100 ; i++)
        {
            if( exponents[i] == p.exponents[j])
            {
                temp.coefficients[a]= coefficients[i] + p.coefficients[j] ;

                temp.exponents[a]= exponents[i];
                a++;
            }
        }
    }

    return temp;

}
Polynomial Polynomial:: operator- (const Polynomial & q)
{

    Polynomial temp;
    int a=0;


    for( int j=0; j<100 ; j++)

    {
        for( int i=0; i<100 ; i++)
        {
            if( exponents[i] == q.exponents[j])
            {
                temp.coefficients[a]= coefficients[i] - q.coefficients[j];
                temp.exponents[a]= exponents[i];
                a++;
            }
        }
    }

    return temp;

}
Polynomial Polynomial:: operator* (const Polynomial &w )
{
    Polynomial temp;
    int a=0;

    for( int i=0; i<100 ; i++)
    {
        for( int j=0; j<100 ; j++)
        {
            temp.exponents[a]= exponents[i] + w.exponents[j];
            temp.coefficients[a]= coefficients[i]* w.coefficients[j];
            a++;
        }
    }

    return temp;

}
const Polynomial Polynomial:: operator= (const Polynomial & z)
{

        for( int i=0; i<100 ; i++)
        {
            coefficients[i]=z.coefficients[i];
            exponents[i]=z.exponents[i];
        }

        return *this;
}

Polynomial& Polynomial:: operator+= (const Polynomial & x)
{


    for( int j=0; j<100 ; j++)

    {
        for( int i=0; i<100 ; i++)
        {
            if( exponents[i] == x.exponents[j])
            {
                coefficients[i]+=x.coefficients[j];
            }
        }

    }

    return *this;

}

Polynomial& Polynomial:: operator-= (const Polynomial & y)
{


    for( int j=0; j<100 ; j++)

    {
        for( int i=0; i<100 ; i++)
        {
            if( exponents[i] == y.exponents[j])
            {
                coefficients[i]-= y.coefficients[j];

            }
        }
    }


    return *this;

}
Polynomial& Polynomial:: operator*= (const Polynomial & w)
{
    for( int j=0; j<100 ; j++)
    {
        for( int i=0; i<100 ; i++)
        {
            exponents[i]+= w.exponents[j];
            coefficients[i]*= w.coefficients[j];
        }
    }

    return *this;


}
void  Polynomial:: enterTerms()
{
    bool bo=false;

    for( int i=0; i<100 && bo !=true ; i++)
    {

        cout << "Enter coefficient: ";
        cin >> coefficients[i];
        cout << "Enter exponent ";
        cin >> exponents[i];

        if(coefficients[i]==0 && exponents[i]==0)
            bo=true;

    }


}

void Polynomial:: printPolynomial (void)
{
    for( int i=0; i<100 ; i++)
    {
        cout << coefficients[i] << "x^" <<  exponents[i] << " + ";
    }

}


