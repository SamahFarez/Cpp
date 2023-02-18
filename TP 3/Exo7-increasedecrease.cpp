#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int i,j,a=0,b=0,c=0;
    int N[10];

    for(i=0; i<10; i++)
    {
        cout << "Add a number: ";
        cin >> N[i];
    }

    for(i=0; i+1<10; i++)
    {
        if(N[i]<N[i+1])
        {
            a++;
        }

        else if(N[i]>N[i+1])
        {
            b++;
        }
        else if(N[i]==N[i+1])
        {

            c++;
        }
    }

    if(a==9)
        cout << "increase";

    else if(b==10)
        cout << "decrease";

    else if(c==9)
        cout << "constant";

    else
        cout << "mixed";


    return 0;
}
