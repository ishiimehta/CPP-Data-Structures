/*
 * TowerofHanoi.cpp
 *
 *  Created on: 19-Aug-2021
 *      Author: mehta
 */

// Tower of Hanoi problem.

#include <iostream>
using namespace std;

void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1, A,C,B);
        cout<< "Move disc from "<<A<<"to "<<C<<endl;
        TOH(n-1, B,A,C);
    }
}
int main() {
    cout<< "Enter n (Number of discs) : ";
    int n,A=1,B=2,C=3;
    cin>>n;
    TOH(n,A,B,C);

}


