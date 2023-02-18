#include "discount.h"


double PurchasesAccount :: dis = 0;

PurchasesAccount :: PurchasesAccount()
{
    bal=0;
}

PurchasesAccount :: PurchasesAccount( double a)
{
    bal=a;
}


void PurchasesAccount :: calculateMonthlyDiscount()

{
    double month;
    month=bal*(dis/12);

    cout << "\Month discount = " << month << endl;
    balancenew( month );

}


void PurchasesAccount :: modifyDiscountRate( double r)
{
    dis=r;
}


void PurchasesAccount :: balancenew( double m )
{
   bal=bal-m;

}

void  PurchasesAccount :: display()
{
    cout << "Balance = " << bal << endl;
}
