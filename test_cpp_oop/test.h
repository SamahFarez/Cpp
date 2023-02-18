#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

#include<iostream>

using namespace std;

class Publication
{
private:
    string title;
    float price;
    float *sales;
    static int n;

public:
    Publication();
    Publication( string = "", float=0, float* = 0, int =0);
    void print();
    void inputData();

    bool operator<( Publication&);

    ~Publication(){}

};


#endif // TEST_H_INCLUDED
