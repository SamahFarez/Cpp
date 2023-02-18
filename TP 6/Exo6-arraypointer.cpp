#include <iostream>

using namespace std;

int main ()
{
    double arr[5];
    double * p;

    p=&arr[0];

    for(int i=0; i<5; i++)
    {
        cout << "Enter: ";
        cin >> arr[i];
    }

    cout << "\n***************************************************\n";

    for(int i=0; i<5; i++)
        cout << "Arr[" << i << "]= " << *(p+i)
        << "  adress => " <<  p+i << endl;

    return 0;
}
