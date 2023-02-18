#ifndef BITVECTOR_H_INCLUDED
#define BITVECTOR_H_INCLUDED

#include"Vector.h"

class BitVector : public Vector
{
public:

    BitVector();
    BitVector(int n) : Vector(n)
    {
        check(n);
    }

    void check(int n)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]!= 0 && arr[i]!=1 )
            arr[i]=0;
        }
    }

    sumVect( BitVector &b)
    {
        for(int i=0; i<min(N,b.N); i++)
        {
            if(arr[i]!=b.arr[i])
                arr[i]=1;

        }
    }

    prodVect( BitVector &b)
    {
        for(int i=0; i<min(N,b.N); i++)
        {
            if(arr[i]!=b.arr[i])
                arr[i]=0;
        }
    }

    void print()
    {
        for( int i=0 ; i<N ; i++ )
        {
            cout << arr[i] << "  ";
        }
    }

    BitVector &operator+(BitVector &v)
    {
        BitVector temp;
        for(int i=0; i<min(N,v.N); i++)
        {
            if(arr[i]!=v.arr[i])
                temp.arr[i]=1;
        }
        return temp;
    }

    BitVector &operator*(BitVector &v)
    {
        BitVector temp;
        for(int i=0; i<min(N,v.N); i++)
        {
            if(arr[i]!=v.arr[i])
                temp.arr[i]=0;
        }
        return temp;
    }


};


#endif // BITVECTOR_H_INCLUDED
