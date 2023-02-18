 #include <iostream>

using namespace std;

int main()
{
    int i=0,n=0,t=0, j=0,S1,S2,s=0;

    cout << "Enter the size of array 1: ";
    cin >> S1;
    cout << "Enter the size of array 2: ";
    cin >> S2;

    int a[S1], b[S2],c[S1+S2];

//===============================

    for(i=0;i<(S1+S2);i++)
        {
            if(i<S1)
            {
                cout << "\nEnter a number (1): ";
                cin >> a[i];
        }
            else
            {
                cout << "\nEnter a number (2): ";
                cin >> b[i-S1];
        }
        }

//====================================

    for( t=0; 0<=t && t<(S1+S2); t++)
        {
            if(t<S1)
            {
                c[t]=a[t];
        }
            else
            {
                c[t]=b[t-S1];
        }
        }

//================================

    cout << "c={";

    while(s<(S1+S2))
        {
            cout << c[s] << "  ";
        s++;

        }

    cout << "}";

    return 0;
}
