#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float N,V,E,L,R;

    cout << "Enter a number N:";
    cin >> N;

    V=abs(N);
    cout << endl << "Absolute value of N is: " << V << endl;


    E=exp(N);
    cout << "The exponential of N is: " << E << endl;

    R=sqrt(N);
    cout << "The root of N is: " << R << endl;

    L=log(N);
    cout << "The logarithm of N is: " << L << endl;


}
