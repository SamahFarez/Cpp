#ifndef MAMMALS_H_INCLUDED
#define MAMMALS_H_INCLUDED


#include "Blue.h"

class Mammals : public BlueMarine
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
