#include <iostream>

using namespace std;

int main()
{
    const int maxsizer=100 ;
    const int maxsizec=100 ;
    int arr[maxsizer][maxsizec];
    int sirow,sicolumn;

    cout <<"Enter the number of all students: ";
    cin >> sirow;
    cout <<"Enter the number of modules: ";
    cin >> sicolumn;

    for( int i=0; i<sirow ; i++)
    {
        for(int j=0; j<sicolumn ; j++)
        {
            cout<<"give the marks of the student "<<i+1<<endl ;
            cin>>arr[i][j];
            arr[i][sicolumn]+=arr[i][j];
            arr[sirow][i]+=arr[i][j];
            arr[sirow][sicolumn]+=arr[i][j];


        }

        for(int i=0;i<=sirow ; i++)
        {
            for(int j=0; j<=sicolumn ;j++)
                cout << arr[i][j] << "\t" << endl;

        }
    }


}
