#include "Sets.h"

integerset:: integerset()
{
    for (int i = 0; i < 101; i++)
        x[i]=0;

}

integerset integerset :: unionOfSets(integerset a, integerset b)
{
    integerset c;
    for (int i = 0; i < 101; i++)
    {
        if (a.x[i]==1 || b.x[i]==1)
        {
            c.x[i]=1;
        }
        if (a.x[i]==0 && b.x[i]==0)
        {
            c.x[i]=0;
        }
    }
    return c;
}
integerset integerset :: intersectionOfSets(integerset w, integerset z)
{
    integerset n;
    int c=0;
    for (int i = 0; i < 101; i++)
    {
        if (w.x[i]==z.x[i])
        {
            n.x[c]=z.x[i];
            c++;
        }
    }
    return n;
}
void integerset :: deleteElement(int m)
{
    x[m]=0;

}
void integerset :: inputSet()
{
    int n;
    for (int i = 0; i < 101; i++)
    {

        cout << "\nEnter element: ";
        cin >> n;

        if (n<0 || n>100)
        {
            cout << "\nWrong" << endl;
            return;
        }
        else
        {
            insertElement( n );

        }

    }
}
void integerset :: printSet()
{
    cout << endl;

    for (int i = 0; i < 101; i++)
    {
        if(x[i]==1)
            cout << i << " ";

        else
            cout << "--- ";
    }

    cout << endl;
}

bool integerset :: isequalto(integerset m)
{
    for (int i = 0; i < 101; i++)
    {

        if(m.x[i]!= x[i])
            return false;

        else continue;
    }

    return true;

}

void integerset :: insertElement( int n)
{

    if(n>=0 && n<=100)
        x[n]=1;

    else
        return;

}
