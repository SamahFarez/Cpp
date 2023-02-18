#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include<iostream>
using namespace std;

class Polynomial
{
public:

    Polynomial () ;
    Polynomial operator+ (const Polynomial &) ;
    Polynomial operator- (const Polynomial &) ;
    Polynomial operator* (const Polynomial &) ;
    const Polynomial operator= (const Polynomial &) ;
    Polynomial& operator+= (const Polynomial &) ;
    Polynomial& operator-= (const Polynomial &) ;
    Polynomial& operator*= (const Polynomial &) ;
    void enterTerms(void) ;
    void printPolynomial (void) ;

private:
    int exponents[100] ;
    int coefficients [100] ;
    void PolynomialCombine(Polynomial &) ;


};

#endif // POLYNOMIAL_H
