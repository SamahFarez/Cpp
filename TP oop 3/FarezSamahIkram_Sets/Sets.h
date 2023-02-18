#ifndef SETS_H
#define SETS_H

#include <iostream>
using namespace std;

class integerset
{
private:
    int x[101];
public:

    integerset();
    ~integerset()
    {
        cout << "dest";
    }
    void insertElement(int n);
    integerset unionOfSets(integerset a, integerset b);
    integerset intersectionOfSets(integerset w, integerset z);
    void deleteElement(int m);
    void inputSet();
    void printSet();
    bool isequalto( integerset m);

};


#endif // SETS_H_INCLUDED
