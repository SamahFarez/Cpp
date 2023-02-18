#include<iostream>

using namespace std;

int  main() {

        double N,A1,A2,A3,S;


        cout << "Enter the first angle:  ";
        cin >>A1;
        cout << "\nEnter the second angle:  ";
        cin >> A2;
        cout << "\nEnter the third angle: ";
        cin >>A3;

    if(A1>0 && A2>0 && A3>0){
            S=A1+A2+A3;

            if(S==180){cout << "\nA triangle\n";}
            else cout << "\nNot a triangle!\n";

    }

    else { cout << "Please make sure the angles are greater than 0!";}




return 0;}
