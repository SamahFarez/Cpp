#include "point.h"
#include <iostream>
using namespace std;



void Display (segment P)
{

    cout << "Segment= " << "[" ;
    (P.P1).display();
    cout  << ",";
    (P.P2).display();
    cout  << "]";
}
int main ()
{
    Rational r1,r2;
    segment p(r1.getra(),r2.getra());
    Display(p);
    return 0;
}
