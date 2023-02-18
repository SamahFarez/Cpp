#ifndef BLUE_H_INCLUDED
#define BLUE_H_INCLUDED

#include<iostream>
using namespace std;


class BlueMarine
{
public:
    BlueMarine()
    {
        type="BlueMarine";
    }
    virtual void print()
    {
        cout << "I belong to BlueMarine! " << endl;
    }

private:
    string type;

};


#endif // BLUE_H_INCLUDED
