#include <iostream>

using namespace std;

// File: complex.h
// Class defintion
class Complex
{
public:
    Complex(); // default constructor
     Complex addition(const Complex &a); // addition of a complex number to another
    Complex subtraction(const Complex &s); // subtract a complex number from another
    Complex multiplication(const Complex &m); // multiply a complex number by another
    void printComplex(void); // print a complex number
    void setComplexNumber(double, double); // set the real and imaginary parts
private:
    double r;
    double im;
};
// File: complex.cpp
// Member functions definition
Complex::Complex()
{

}
 Complex Complex::addition(const Complex &a)
{
    Complex temp;
    temp.r = a.r + temp.r;
    temp.im = a.im + temp.im;

    return temp;



}
 Complex Complex::subtraction(const Complex &s)
{
    Complex temp;
    temp.r= temp.r-s.r;
    temp.im=temp.im - s.im;

    return temp;


}
 Complex Complex::multiplication(const Complex &m)
{
    Complex temp;
    temp.r= temp.r*m.r;
    temp.im=temp.im * m.im;
    return temp;

}
void Complex::printComplex()
{
    char p;
    p=(im>=0)? ' + ' : ' ';
    cout << r << p <<  im << " i";

}
void Complex::setComplexNumber(double rp, double ip)
{
    r=rp;
    im=ip;
}
// File: main.cpp
// Driver program

#include <iostream>
using std::cout;
using std::endl;
int main()
{
    Complex c1,c2,c3;
    int a,b,c,d;

    cout << "Enter real 1 ";
    cin >> a;
     cout << "Enter imaginary 1 ";
    cin >> b;
     cout << "Enter real 2 ";
    cin >> c;
     cout << "Enter imaginary 2 ";
    cin >> d;
    Complex();
    c1.setComplexNumber(a,b);
    c1.setComplexNumber(c,d);

    c3=c1.addition(c2);

    cout << "Add: " ;
    c3.printComplex();



}



