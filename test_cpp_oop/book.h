#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include"test.h"

class Book : public Publication
{
private:
    int pageCount;

    public:
    Book( string="none", float=0 , float* = 0, int =0, int =0 );
    void inputData();
    void print();
    ~Book();


};

#endif // BOOK_H_INCLUDED
