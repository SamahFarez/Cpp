#include <iostream>
#include<cmath>
using namespace std;


double distance(double xa, double ya , double xb, double yb )
{
    double ab;
    ab=sqrt(pow(xa-xb,2)+pow(ya-yb,2));
    return ab;
}


int main()
{
    double xa,ya,xb,yb;

    cout << "Enter coordinates of first point x then y: ";
    cin >> xa >> ya;
    cout << "Enter coordinates of second point x then y: ";
    cin >> xb >> yb;

    cout << "Distance is: " << distance(xa,ya,xb,yb);

    return 0;
}
