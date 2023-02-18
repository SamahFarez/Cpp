#ifndef MARINE_H_INCLUDED
#define MARINE_H_INCLUDED

#include "Blue.h"


class MarineAnimals : public BlueMarine
{
public:
    MarineAnimals()
    {
        type="MarineAnimal";
    }
    void print()
    {
        cout << "i am a MarineAnimal! " << endl;
    }

private:
    string type;

};

#endif // MARINE_H_INCLUDED
