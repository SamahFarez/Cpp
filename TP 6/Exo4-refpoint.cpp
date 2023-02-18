#include <iostream>

using namespace std;

void maxmin( int arr[], int s, int *maxx, int *minn )
{

    *maxx=arr[0];
    *minn=arr[0];

    for(int i=0; i<5; i++)
    {
        if(arr[i]>*maxx)
            *maxx=arr[i];

        if(arr[i]<*minn)
            *minn=arr[i];

    }
}

//void maxmin2( int arr[], int s, int *maxx, int *minn );

int main()
{
    int maxx,minn;
    int arr[5];

    for(int i=0; i<5; i++)
    {
        cout << "Enter: ";
        cin >> arr[i];
    }
//===================================================reference
    maxmin(arr,5,&maxx,&minn);

    cout << "MAX= " << maxx << endl;
    cout << "MIN= " << minn << endl;

}

//===================================================pointers

/*   int *maxx,*minn;
   int *A=arr;

   maxmin2(A,5,maxx,minn);

   cout << "MAX= " << *maxx << endl;
   cout << "MIN= " << *minn << endl;

   return 0;
}

/*void maxmin2( int *arr, int s, int *maxx, int *minn )
{

   int mini=*minn;
   int maxi=*maxx;

   for(int i=0; i<5; i++)
   {
       if(*(arr+i)> maxi )
           maxi=*(arr+i);

       if(*(arr+i)< mini )
           mini=*(arr+i);

   }

   maxx=&maxi;
   minn=&mini;
}*/
