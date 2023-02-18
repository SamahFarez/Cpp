#include<iostream>

using namespace std;

bool two(int n)
{
    int nn;
    if(n==1)
    {
        return true;
    }

        else if(n%2!=0){

        return false;
        }

        else
        {
            n=two(n/2);
        }
}

int main ()
{
    double N;
    cout << "Enter: ";
    cin >> N;

    cout << "Result: " << two(N) << endl;

    cout << "P.S: 1 means true and 0 means false";
}
