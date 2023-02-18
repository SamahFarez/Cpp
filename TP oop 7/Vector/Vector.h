#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include<iostream>
using namespace std;

class Vector
{
public:
    Vector( int a )
    {
        create(a);
    }

    void sumVect( Vector &v )
    {
        for(int i=0; i<(min(N,v.N)); i++)
        {
            arr[i]+=v.arr[i];
        }
    }

      void create(int n)
    {
        cout << "Enter " << n << " nums: ";
        for(int i=0; i< n; i++)
        {
            cin >> arr[i];
        }


    }

    int prodVect(Vector &v)
    {
        int P;

        for(int i=0; i<(min(N,v.N)); i++)
        {
            P+=(arr[i]*v.arr[i]);

        }

        return P;
    }

    Vector &operator+(Vector &v)
    {
        Vector temp((min(N,v.N)));

         for(int i=0; i<(min(N,v.N)); i++)
        {
            temp.arr[i]=arr[i]+v.arr[i];

        }

        return temp;
    }

    Vector &operator-(Vector &v)
    {
        Vector temp((min(N,v.N)));

         for(int i=0; i<(min(N,v.N)); i++)
        {
            temp.arr[i]=abs(arr[i]-v.arr[i]);

        }

        return temp;
    }


    void print()
    {
         for( int i=0 ; i<N ; i++ )
        {
            cout << arr[i] << "  ";

        }

    }


protected:

    int N;
    int *arr;

};


#endif // VECTOR_H_INCLUDED
