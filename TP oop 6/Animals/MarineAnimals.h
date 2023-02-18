#ifndef MARINEANIMALS_H_INCLUDED
#define MARINEANIMALS_H_INCLUDED

#include<iostream>
using namespace std;

class MarineAnimals
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


#endif // MARINEANIMALS_H_INCLUDED
