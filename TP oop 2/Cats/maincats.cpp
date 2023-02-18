#include "cat.h"

//===============================check fights

void check( Cat *cats[])
{


    static int g=0,b=0,gr=0,bl=0,br=0, x=0;

    for(int i=0; i<x; i++)
    {
        if(cats[i]->getfur()=="grey")
        g++;

    if(cats[i]->getfur()=="brown")
        b++;

    if(cats[i]->getfur()=="black" && cats[i]->geteye()=="green")
        gr++;
    if(cats[i]->getfur()=="black" && cats[i]->geteye()=="blue")
        bl++;
    if(cats[i]->getfur()=="black" && cats[i]->geteye()=="brown")
        br++;

    }
    x++;

if(g>b || ( gr>=1 && bl>=1 && br==1))
    {cout <<  endl <<"\nFight!\n";
    }

else cout << endl << "\nPeace~\n";


}

//========================================== main

int main()
{
    Cat *room[7];

    for ( int count = 0; count < 7; count++ )
    {
        cout << "\nPress a key to add the next cat to the room\n" << endl;
        cin.get();

        room[count]= new Cat();

        check(room);
    }

    for(int i=0; i<7; i++)
    {
        delete room[i];
    }


    return 0;
}


