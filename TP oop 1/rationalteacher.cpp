#include<iostream>
#include<algorithm>

using namespace std ;
class Rational
{
public:
    Rational(int, int);
    void setn(int, int);
    void print();
    void fpoint();
    void add(const Rational &);
    void sub(const Rational &);
    void mul(const Rational &);
private:
    int n, d,res ;
};

Rational::Rational(int a, int b)
{
    setn(a,b);
}

void Rational::setn(int a, int b)
{
    if (b == 0) return;
    if (a == 0) return;
    int m =__gcd(a, b);
    n = a/m;
    d = b/m;
}

void Rational::add(const Rational &r)
{
    setn((n * r.d + d * r.n),  (d * r.d) ) ;
}
void Rational::sub(const Rational &r)
{
    setn((n * r.d - d * r.n),  (d * r.d)) ;
}

void Rational::mul(const Rational &r)
{
    setn(n*r.n,d*r.d) ;
}

void Rational::print()
{
    cout << " The number after reduction is : " << n << "/" << d ;
    cout <<endl;
}

void Rational::fpoint()
{
    double f ;
    f = (double)n/d ;
    cout << " The floating point format : " << f ;
}

int main()
{
    int a , b ,c ,d;

    cout << "Enter the numerator then the of the denominator of the first number : \n" ;
    cin >> a >> b ;
    cout << "Enter the numerator then the of the denominator of the second number : \n" ;
    cin >> c >> d ;

    Rational n1(a, b);
    Rational n2(c, d);

    cout << " SUB : \n";
    n2.sub(n1);
    n2.print();
    n2.fpoint();

    cout << "\n ADD : \n";
    n2.add(n1);
    n2.print();
    n2.fpoint();

    cout << "\n MUL : \n";
    n2.mul(n1);
    n2.print();
    n2.fpoint();
}
