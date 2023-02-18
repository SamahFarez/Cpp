#include<iostream>

using namespace std;

int main ()
{

    int *p1,*p2=NULL;
    int v=10;
    p1=&v;

//===================== pointer value

    cout << "Pointer value: " << *p1 << endl;


//===================== change value with pointer
    cout << "Enter ";
    cin >> *p1;
    cout << "New value is: " << v << endl;

//===================== initialize w
    int w=v;
    p2=&w;

    cout << "w value is: " << *p2 << endl;

//===================== pointer to pointer

    int **r;

    r=&p1;

    cout << "Enter ";
    cin >> **r;
    cout << "New value is: " << v << endl;


    return 0;
}
