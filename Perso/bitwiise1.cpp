#include<iostream>
using namespace std;
int main()
{
    int n,m,x,i,p,X,NEW,s,c=0;

//===============check nth bit:
    /*
        cout << "Enter a num: " ;
        cin >> n;

        cout << "Position pls: ";
        cin >> p;


        m= 1 << p-1;

        x= (m&n);

        for(i=0; i<p; i++)
        {
            m = 1 << i;
            x= (m&n);
        }

        X=x>>p-1;


        cout << "The " << p << "th bit is: " << X << endl << "So it's ";

        if(X==1)
        {
            cout << "true!";

        }

        else
        {
            cout << "false!";
        }
    */

//=======================set to 1:



  /*   cout << "Enter a num: " ;
      cin >> n;

      cout << "Position pls: ";
      cin >> p;

       m= 1 << p-1;

       X=(m&n)>>p-1;

       if(X==0)
       {
           n=n+m;
           cout << "Done! here is the new num: " << n;
       }
       else
          {
              cout << "Aready 1 " << n;

          }
*/

//==================set all to 0:

/*
    cout << "Enter a num: " ;
    cin >> n;


    n=n&0;

    cout << "New num is: " << n;
    */


//==================set a bit to 0:
/*
    cout << "Enter a num: " ;
    cin >> n;

    cout << "Position pls: ";
    cin >> p;

    m = 1 << p-1;

    X=(~m&n);

    cout << "New num: " << X << endl;

    NEW = (m&X )>> p-1;

    cout << "Bit on pos " << p << "th is: " << NEW;
    */

//==================leading zeros

   /* cout << "Enter a num: " ;
    cin >> n;

    for(i=1;i<32;i++)
    {
        m=1<<i;

            if(((m&n)>>i )==0)
        {
            c++;
        }
        else
        {
            c=0;
        }
    }
    cout << "The num of leading zeros is: " << c;

*/
    return 0;
}
