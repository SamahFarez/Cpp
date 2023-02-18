#include"book.h"
#include"audio.h"


int main()
{
    int s,i=0;
    Publication *publi[10];

    for(int i=0; i<10; i++ )
    {
        cout << "you wanna enter data about\n1.Book \n2.AudioBook\n3.Stop?\n";
        cin >> s;
        if(s==1)
        {
            publi[i]=new Book;
            publi[i]->inputData();

            publi[i]->print();
        }



        else if(s==2)
        {
            publi[i]=new Audio;
            publi[i]->inputData();
            publi[i]->print();
        }



        else if(s==3 && i!=0)
        {
            break;
        }


        else if(s==3 && i==0)
        {

            cout << "\nGood Bye\n";
            exit(0);
        }



    }


    Publication minn(0,0,0);
    for( int i=0; i<10; i++)
    {

        if(publi[i]<publi[i+1])
            minn=*publi[i];

    }

    minn.print();

    delete [] publi;

    return 0;
}
