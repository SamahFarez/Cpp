#include<iostream>

#include<fstream>

using namespace std;

int main()
{

    float sum=0,n=0,V;

    ifstream out;
    out.open("floats.txt");

    ofstream OUT;
    OUT.open ("output.txt");

    if(!OUT )
        cout << "not open 2";

    if(!out)
        cout << "not open";


    while(!out.eof())
    {
        out >> V;
        sum+=V;
        n++;

    }

    OUT << "Sum is: " << sum << endl;
    OUT << "Average: " << sum/n;


    cout << "Sum:  " << sum << endl << "Average: " << sum/n;

    OUT.close();
    out.close();


    return 0 ;
}
