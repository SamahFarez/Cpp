#include <iostream>
#include <math.h>

using namespace std;

int main()
{  int A,B;

    cout << "Enter a number A: ";
    cin >> A;
    cout << "Enter a number B: ";
    cin >> B;

    cout << "A power B is: " << pow(A,B) << endl;
    cout << "B power A is: " << pow(B,A) << endl;


    return 0;
}
