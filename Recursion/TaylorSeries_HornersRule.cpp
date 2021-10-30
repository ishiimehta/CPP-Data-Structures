/*
 * TaylorSeries_HornersRule.cpp
 *
 *  Created on: 16-Aug-2021
 *      Author: mehta
 */

//Taylor Series using Horner's Rule (n multiplications).

#include <iostream>
using namespace std;

double tseries(int x, int n){

    static double ans;
    if(n==0)
    return ans;

    ans= 1+x*ans/n;
    tseries(x,n-1);
}



int main(){
    int n=10;
    int x=1;
    double res;
    res=tseries(x,n);
    cout<< res;
}


