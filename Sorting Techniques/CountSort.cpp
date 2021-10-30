/*
 * CountSort.cpp
 *
 *  Created on: 07-Sep-2021
 *      Author: mehta
 */

// Program to implement Count Sort.

#include <iostream>
#include <climits>
using namespace std;

int findmax(int A[], int n){
    int max= INT_MIN;

    for(int i=0; i<n; i++){
        if(A[i]>max)
            max=A[i];
    }
    return max;
}

void countsort(int A[], int n){
    int *C;
    int max=findmax(A,n);
    C= new int[max+1];
    for(int i=0; i<max+1; i++)
        C[i]=0;
    for(int i=0; i<n; i++){
        C[A[i]]++;
    }
    int i=0,k=0;
    while(i<max+1){
        if(C[i]>0){
            A[k++]=i;
            C[i]--;
        }
        else{
            i++;
        }
    }
}
int main() {
    int A[]= {32,4,18,5,12,1,33,29};
    int n=8;
    countsort(A,n);
    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";
}
