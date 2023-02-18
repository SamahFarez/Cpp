#ifndef DISCOUNT_H_INCLUDED
#define DISCOUNT_H_INCLUDED

#include<iostream>
using namespace std;

class PurchasesAccount
{
private:
    static double dis;
    double bal;

public:
    PurchasesAccount();
    PurchasesAccount(double a);
    void calculateMonthlyDiscount();
    static void modifyDiscountRate( double r );
    void balancenew(double m);
    void display();



};
#endif // DISCOUNT_H_INCLUDED
