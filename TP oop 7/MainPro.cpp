#include "PrepackedFood.h"
#include "FreshFood.h"

int main()
{
    Product *p1[3];

    int a;
    char str;

    for(int i=0; i<100; i++)
    {
        cout << "Another customer(y/n)?\n" << endl;
        cin >> str;

        if(str=='y')
        {
            a = p1[0]->record();
            switch(a)
            {

            case 0:
                i--;
                break;
            case 1:
                p1[i]=new FreshFood;
                p1[i]->scanner();

                break;
            case 2:
                p1[i]=new PrepackedFood;
                p1[i]->scanner();

            }


        }


        if(str=='n')
        {
            if(i!=0)
            {


                for(int j=0; j<i; j++)
                {
                    cout << "\n**************************\n"
                         << "Product number " << j+1 << " : \n" ;
                    p1[j]->printer();
                }
            }


            cout << "\nHave a good day! :3 ";
            exit(0);
        }
    }


    return 0;
}
