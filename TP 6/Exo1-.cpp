#include<iostream>

using namespace std;

int main ()
{

    int *p1,*p2=NULL;
    int v=10;
    p1=&v;

//===================== pointer value

    cout  << "****************************************" << endl;

    cout << "Pointer value: " << p1 << endl;
    cout << "Pointer address: " << &p1 << endl;
    cout << "value: " << v << endl;
    cout << "Value address: " << &v << endl;


//===================== change value with pointer

    cout  << "****************************************" << endl;

    cout << "Enter ";
    cin >> *p1;

    cout << "New value is: " << v << endl;
    cout << "new Pointer value: " << p1 << endl;
    cout << "new Pointer address: " << &p1 << endl;
    cout <<  "value address: " << &v << endl;

//===================== initialize w

    cout  << "****************************************" << endl;

    int w=v;
    p2=&w;

    cout << "w value is: " << w << endl;
    cout << "new Pointer address: " << &p2 << endl;
    cout << "new value address: " << &w << endl;
    cout <<  "Pointer value: " << p2 << endl;


//===================== pointer to pointer

    cout  << "****************************************" << endl;
    int **r;

    r=&p1;

    cout << "Enter ";
    cin >> **r;
    cout << "New value is: " << v << endl;
    cout << "new Pointer value: " << p1 << endl;
    cout << "new Pointer address: " << &p1 << endl;
    cout <<  "value address: " << &v << endl;

    cout  << "****************************************" << endl;



    return 0;
}
