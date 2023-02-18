#include <iostream>

using namespace std;

int main()
{
    int S,i=0, N[9]={};


    while(i<10){
        cout << "Enter a number: ";
        cin>>N[i];  S=S+N[i]; i=i+1;}

        cout<< "The sum is:" << S << endl;

    return 0;
}

