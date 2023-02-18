#include "Sets.h"
#include "Sets.cpp"


int main()
{

    integerset  X,Y;
    int n,m;

    cout << "Notice, when inputting, if the entered number is not in [0,100] the input will end and you go to next step!\n";

    cout << "\nSet 1\n";

    X.inputSet();


    cout << "\nSet \n";

    Y.inputSet();


    X.printSet();
    Y.printSet();

    while (true)
    {
        cout << "\nDelete from set 1" << endl;
        cin >> n ;
        if(n>=0 && n<=100)
            X.deleteElement(n);

        else break;
    }

    while(true)
    {
        cout << "\nDelete from set 2" << endl;
        cin >> m;

        if(m>=0 && m<=100)
            Y.deleteElement(m);

        else break;
    }

    X.printSet();
    Y.printSet();


    if(X.isequalto(Y)==true)
        cout  << "\nEqual";

    else
        cout << "\nNot Equal";



    return 0;
}
