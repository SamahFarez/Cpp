#include<iostream>
using namespace std;
int main()
{
    int i , n , c = 0,j, maximum = 0;


    for(i = 0 ; i < 5 ; i++ )
    {


        cout << "Enter your number: ";
        cin >> n;


                 if(n >=maximum)
                {
                    maximum = n;
                }
    }

            if( maximum == n )
                {
                c++;
                }





    cout << maximum ;
    cout << "\n";
    cout << c ;
    return 0;
}
