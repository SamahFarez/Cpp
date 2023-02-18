#include "Purchase.cpp"


int main()
{

    double a,b,c,d;

    cout << "Enter costumer 1 balance = " ;
    cin >> a;

    cout << "Enter costumer 2 balance =" ;
    cin >> b;

    PurchasesAccount c1(a), c2(b);

    cout << endl << "Enter annual discount = ";
    cin >> c;


    c1.modifyDiscountRate(c);

    cout << "~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl <<  "Costumer 1:\a" << endl;
    c1.calculateMonthlyDiscount();
    c1.display();

    cout <<endl <<   "Costumer 2:\a" << endl;

    c2.calculateMonthlyDiscount();
    c2.display();



    cout << endl << "Enter new annual discount =  ";
    cin >> d;


    c1.modifyDiscountRate(d);

    cout << "~~~~~~~~~~~~~~~~~~" << endl;


    cout << endl <<  "Costumer 1:\a" << endl;
    c1.calculateMonthlyDiscount();
    c1.display();


    cout <<endl <<   "Costumer 2: \a" << endl;
    c2.calculateMonthlyDiscount();
    c2.display();

    for(int i=0; i<12 ; i++)
    {


    cout << endl << "~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl << "Month "  << i+1 << endl;


    cout << endl <<  "Costumer 1:\a" << endl;
    c1.calculateMonthlyDiscount();
    c1.display();

    cout <<endl <<   "Costumer 2: \a" << endl;
    c2.calculateMonthlyDiscount();
    c2.display();


    }


    return 0;
}
