/*
 * ncr_calculation.cpp
 *
 *  Created on: 19-Aug-2021
 *      Author: mehta
 */


// Program to find nCr.


#include <iostream>
using namespace std;

int ncr(int n, int r){
    if(r==0 || n==r)
    return 1;

    else return ncr(n-1,r-1) + ncr(n-1, r);
}
int main() {
    cout<< "Enter values of n and r: ";
    int n,r,res;
    cin>>n>>r;
    res=ncr(n,r);
    cout<<res;

}

