#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int N1,N2,C1,C2,C3,Sum,Sub;
    double Mark1,Mark2,M,S;
    string Module[] = {"Algebra" ,"Analysis","Programming"};
    int Co[] = {3,3,5};


    cout << "Choose 2 modules by tapping 2 numbers: " << "\nAlgebra --> 1\n" << "Analysis --> 2\n" << "Programming --> 3" << endl;

    cout << "\n1st number: "; cin >> N1;
    cout << "2nd number:"; cin >> N2;

     Sum=N1+N2;
     Sub=abs(N1-N2);


     if(N1!=N2){
                if(N1<=3 && N2<=3){
            cout << "\nWell give your mark in " << Module[N1-1] << "  ";
            cin >> Mark1;
            cout << "Now your mark in : " << Module[N2-1]<< "  ";
            cin >> Mark2;
            cout << endl;
            M=(Mark1*Co[N1-1]+Mark2*Co[N2-1])/(11);
                    if(M>=10){cout << "Congratulations!! you did a good job!! don't worry about the rest!!\n";}
                    else{

            S=(110-Mark1*Co[N1-1]-Mark2*Co[N2-1])/(Co[3-Sub]);

            cout << "In order to have an average superior or equal to 10 you must have " << S << " in ";

                if(Sum==3){cout << Module[2]; }
                if(Sum>3){cout << Module[3-Sub];}
            }}

        else cout << "Enter two numbers from the list above!!\n";}

    else cout << "Choose two different modules!!";

        return 0;
}
