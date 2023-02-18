#include <iostream>

using namespace std;

int main()
{
    int A,B,M=1,i=1;


    cout << "Enter the first number: ";
        cin>>A;
        cout << "Enter the second number: ";
        cin>>B;

    while(i<=B){
          M=M*A;
          i=i+1;}


        cout<< "\nA^B=" << M << endl;

    return 0;
}

