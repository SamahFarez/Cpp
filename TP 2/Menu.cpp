#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    int N,i=0;

    cout << "Enter a number: ";
    cin >> N;

    while(true){
            cout << "\nwhat do you want to do with it?\n 1. Add 1\n 2. Multiply by 2\n 3. Subtract 4\n 4. Exit\n\n Enter here: ";
        cin >> i;
        switch (i){
        case 1:{
             cout << "\nThe result is: " << N+1 << endl; N=N+1;
        break;
         }
        case 2:{
            cout << " \nThe result is: " << N*2 << endl;N=N*2;
        break;
        }
        case 3:{
             cout << " \nThe result is: " << N-4 << endl; N=N-4;
         break;
         }
        case 4: {
            cout << "\nThank you; bye :)\n";
           exit(0);
        }
        default:{
            cout << "\nPlease make sure to choose a number from the menu below!\n";
         break;
        }
        }
    }







    return 0;
}
