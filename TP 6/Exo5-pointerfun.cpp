#include <iostream>

using namespace std;

double* maxm(double* a, int s)
{
    double *mx;

    if(s==0)
    {
        return NULL;
    }
    else
    {
        for(int i=0; i<s; i++)
        {
            if(*mx<*(a+i))
            {
                *mx=*(a+i);
            }
        }
    }
    return mx;
}

int main()
{

    int n;
    cout << "Enter size : ";
    cin >> n;

    double arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter: ";
        cin >> arr[i];
    }

    double *maxx=maxm(arr,n);

    cout << *maxx;

    return 0;
}
