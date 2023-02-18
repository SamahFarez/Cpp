#include"book.h"

Book :: Book (  string t, float p, float *s, int num, int c ): Publication (t,p,s,num)
{
    pageCount=c;

}


void  Book :: inputData()
{
    Publication :: inputData();

    cout << "Enter pageCount: ";
    cin >> pageCount;

}

void Book :: print()
{
    Publication ::print();
    cout << "\nPageCount:" << pageCount;
    return;

}
