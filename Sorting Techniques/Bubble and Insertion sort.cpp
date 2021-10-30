/*
 * Bubble_and_insertionsort.cpp
 *
 *  Created on: 05-Sep-2021
 *      Author: mehta
 */

//Program implementing Bubble and Insertion sort.

#include <iostream>
using namespace std;

void swap(int *p, int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void bubblesort(int A[], int n){
    // Added flag for adaptiveness.
    int flag=0;
    for(int i=0; i<n-1; i++){
        flag=0;
        for(int j=0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
                swap(&A[j], &A[j+1]);
                flag=1;
        }
    }
    if(flag==0) break;
}
for(int i=0;i<n;i++){cout<<A[i]<<" ";}
cout<<endl;
}

void insertionsort(int A[], int n){
    for(int j=1; j<n; j++){
        int i=j-1;
        int key= A[j];

        while(i>=0 && key>A[i]){
            A[i]>> A[i+1];
            i--;
        }
        A[i++]=key;
    }
    for(int i=0;i<n;i++){cout<<A[i]<<" ";}
}

int main() {
    int A[]= {12,55,32,4,78,98};
    int m=6;
    cout<<"Output using Bubble Sort: ";
    bubblesort(A,m);
    cout<<"Output using Insertion Sort: ";
    insertionsort(A,m);
    }

