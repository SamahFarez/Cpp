#include <iostream>

using namespace std;

int main()
{
    double N,i=0,S=0,M;

    while(true){

        cout << "Enter a number: ";
        cin >> N;

        if(N>0)
            {
                S+=N;
                i++;
                }

        else if(N<0)
                {
                    cout << "\nERROR!!\n\n"; continue;
         }
        else break;
        }

        M=S/i;
        cout << "\nThe mean is: "<< M << endl;

    return 0;
}
