#include<iostream>

using namespace std;

void swapp(int &a, int &b)
{
    int c=a;
    a=b;
    b=c;
}

int main()
{
    int a,b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nBefore swapping: " << "\na= " << a << "\nb= " << b;

    swapp(a,b);

    cout << "\nAfter swapping: "  << "\na= " << a << "\nb= " << b;

    return 0;
}

