#include "MyClass.h"

//====================== Main
int main ()
{

    int a,c;
    double b;

    MyClass n1;
    cout << "Set two values for your object \nif out of [0,20], set to default 0\n" << endl;
    cout << "1 ---> ";
    cin >> a;
    cout << "2 ---> ";
    cin>> b;

    cout << "~~~~~~~~~~~~~~~~~~~~~\n";


    n1.setValues(a,b);
    n1.PrintValue();

    cout << "\n~~~~~~~~~~~~~~~~~~~~~\n";


    MyClass n2;
    cout << "\nSet 2 values \nif Wrong values, set to default 0\n" << endl ;
    cout << "1 ---> ";
    cin >> a;
    cout << "2 ---> ";
    cin>> b;
    cout << "~~~~~~~~~~~~~~~~~~~~~\n";

    n2.setValues(a,b);
    n2.PrintValue();

    cout << "\n~~~~~~~~~~~~~~~~~~~~~\nAdd one to first value of object ....? "<< endl << "Choose num 1 or 2 ? \n";
    cin >> c;
    setcount(n1,c);

    if(c==1)
    n1.addOne().PrintValue();

    else if(c==2)
    n2.addOne().PrintValue();

    else cout << "\nNo addition!";

    returncount(n1);
    cout << "\n~~~~~~~~~~~~~~~~~~~~~\n";



    MyClass n3=n1+n2;

    cout << "\nObject 3 is sum of obj 1 and 2 you've chosen: \n";

    n3.PrintValue();

    switchfun(n3);
    n3.PrintValue();

    return 0;
}
