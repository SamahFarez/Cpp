#ifndef MAMMALS_H_INCLUDED
#define MAMMALS_H_INCLUDED

#include<iostream>
using namespace std;

class Mammals
{
public:
    Mammals()
    {
        type="Mammal";
    }
    void print()
    {
        cout << "i am a Mammal! " << endl;
    }

private:
    string type;

};


#endif // MAMMALS_H_INCLUDED
