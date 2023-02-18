#include<iostream>
#include<algorithm>

using namespace std;

class Rational
{
public:
    Rational();
    Rational(int x, int y);
    void addition(const Rational &a);
    void substraction(const Rational &s);
    void multiplication(const Rational &m);
    void devide(const Rational &d);
    void print();
    void printfloat();
    void reduce(int a, int b);

private:

    int num;
    int den;

};
Rational::Rational()
{


};

Rational::Rational (int x, int y)
{
    reduce(x,y);

}

void Rational :: reduce(int a, int b)
{
    if(b==0) return;
    if(a==0) return;
    int p=__gcd(a,b);

    num=a/p;
    den=b/p;

}

void Rational:: addition(const Rational &a)
{
    reduce((num * a.den)+(a.num *den),den*a.den) ;
}

void Rational:: substraction(const Rational &s)
{
    reduce(num * s.den - s.num * den, den*s.den) ;
}

void Rational:: multiplication(const Rational &m)
{
    reduce(num*m.num,den*m.den) ;
}

void Rational:: devide(const Rational &d)
{
    reduce(num*d.den,den*d.num) ;
}

void Rational:: print()
{
    cout << "Number rational is: " <<  num << " / " << den << endl ;

}

void Rational:: printfloat()
{
    double f=(double)num/den;
    cout << "Number float is: " << f << endl ;
}


int main()
{
    Rational c2(1,6),c1(6,1);

    cout << "\nAddition: \n";

    c1.addition(c2);
    c1.print();
    c1.printfloat();


    cout << "\nsubstraction: \n";

    c1.substraction(c2);
    c1.print();
    c1.printfloat();

    cout << "\nmultiplication: \n";

    c1.multiplication(c2);
    c1.print();
    c1.printfloat();

    cout << "\ndevision: \n";

    c1.devide(c2);
    c1.print();
    c1.printfloat();


    return 0;
}
