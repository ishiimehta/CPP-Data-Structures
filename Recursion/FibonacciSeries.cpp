/*
 * FibonacciSeries.cpp
 *
 *  Created on: 19-Aug-2021
 *      Author: mehta
 */

// Program for Fibonacci Series using Recursion.



#include <iostream>
using namespace std;

int fib(int n){
    if(n==1 || n==0)
    return n;

    else return fib(n-1) + fib(n-2);
}
int main() {
    cout<< "Enter number: ";
    int n,res;
    cin>>n;
    res=fib(n);
    cout<<res;

}
