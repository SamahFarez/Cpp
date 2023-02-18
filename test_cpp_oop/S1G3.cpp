#include <iostream>


using namespace std;

struct result
{
    int mn;
    int occ;
};

result arraymin(int A[])
{
    int c=1,i=0;

    while(A[i]==A[i+1])
    {
        c++;
        i++;
    }
    result res;
    res.mn=A[0];
    res.occ=c;
    return res;
}

int main()
{
    int  Arr[5]= {3,3,3,5,7};

    result out =arraymin(Arr);
    cout << "Min is: " <<  out.mn << endl;
    cout << "Frequency: " << out.occ << endl;

    return 0;
}
