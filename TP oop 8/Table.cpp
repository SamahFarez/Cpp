#ifndef DOUBLESUBS_TEMPL_H_INCLUDED
#define DOUBLESUBS_TEMPL_H_INCLUDED
#include<iostream>

using namespace std;

template<class T>
class Table
{

public:
    Table(int=10, int=10);
    ~Table();

    T& operator()(int, int);
          // access element at given row and column (lvalue)

    const T& operator()(int, int) const;
      // access element at given row and column (rvalue)

    bool operator==(const Table<T>&);
        // check if two arrays are equal

    bool operator!=(const Table<T>&);
      // check if two arrays are different

    Table& operator=(const Table<T>&);
    // assign one array to another one

    template<class T>
    friend ostream& operator<<(ostream&, const Table<T>&);
      // output the array in row and column format

    template<class T>
    friend istream& operator>>(istream&, const Table<T>&);
     // input the content of the array

private:
    int rows;
    // number of rows in the array

    int columns;
      // number of columns in the array

    T* Array;
      // pointer to the first element in the array
};

// Constructor
template<class T>
Table<T>::Table(int R, int C)
{
    rows = R > 0 ? R : 10;
    columns = C > 0 ? C : 10;

    Array = new T[rows*columns];

    for(int i=0; i < rows*columns; i++)
        Array[i]=0;
}

// Destructor
template<class T>
Table<T>::~Table()
{
    delete[] Array;
}

// access element at given row and column, the returned element can be used as left value
template<class T>
T& Table<T>::operator()(int R, int C)
{
    int i = (columns * R) + C;
    if(i<0 || i>= rows*columns)
    {
        cerr << "\nError: Subscripts out of range" << endl;
        exit(1);
    }

    return Array[i];
}

// access element at given row and column, the returned element can only be used as right value
template<class T>
const T& Table<T>::operator()(int R, int C) const
{
    int i = (columns * R) + C;
    if(i<0 || i>= rows*columns)
    {
        cerr-() << "\nError: Subscripts out of range" << endl;
        exit(1);
    }

    return Array[i];
}

// check if two arrays are equal
template<class T>
bool Table<T>::operator==(const Table &A2)
{
    if(rows != A2.rows || columns != A2.columns)
        return false;

    for(int i=0; i < rows*columns; i++)
        if(Array[i] != A2.Array[i])
            return false;

    return true;
}

// check if two arrays are different
template<class T>
bool Table<T>::operator!=(const Table &A2)
{
    return !(*this == A2);
}

// assign one array to another one
template<class T>
Table<T>& Table<T>::operator=(const Table &A2)
{

    // check for self-assignment
    if(&A2 != this)
    {
        // if the two arrays have different size, delete and reallocate memory
        if(rows != A2.rows || columns != A2.columns)
        {
            delete[] Array;
            rows = A2.rows;
            columns = A2.columns;
            Array = new T[rows*columns];
        }

        for(int i=0; i<rows*columns; i++)
            Array[i] = A2.Array[i];
    }

    return *this;
}

#endif // DOUBLESUBS_TEMPL_H_INCLUDED
