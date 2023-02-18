#include<iostream>

using namespace std;
int main()
{
    int i=0,j=0,n,s;

    cout << "Enter the size of array: ";
    cin >> n;

    s=n;
   int N[n]={};

    while(i<n){
        cout << "Enter a number: ";
        cin >> N[i];
        i++;
    }

    int A[n]={};
    cout << "The elements of the new array are: ";

    while(j<s){
        A[j]={N[n-1]};
        cout << A[j] << " ";;
        n--;
        j++;
    }

    return 0;
}

