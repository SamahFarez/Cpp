#include<iostream>

using namespace std;

int main()
{
    int i,j;
    int n[5];

    for(i=0;i<5;i++)
   {
    cout << "Enter : ";
    cin >> n[i];
    }

     for(j=0;j+1<5;j=j+2)
        {
            if(n[j]<n[j+1])

        {
            swap(n[j],n[j+1]);
        }
        }

         for(j=0;j<5;j++)
        {   cout << n[j] << "  ";
        }

    return 0;
}
