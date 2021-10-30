// Taylor Series using recursion.

#include <iostream>
using namespace std;

double tseries(int x, int n){
    static double pow=1, fact=1;
    double ans;

    if(n==0)
    return 1;

    ans=tseries(x,n-1);
    pow=pow*x;
    fact=fact*n;

    return (pow/fact)+ans ;

}

int main()
{
    int n=10;
    int x=1;
    double res;
    res=tseries(x,n);
    cout<< res;
}
