/*
 * Insert_Delete.cpp
 *
 *  Created on: 29-Sep-2021
 *      Author: mehta
 */

// Program to insert and delete elements in a heap.

#include <iostream>
using namespace std;

void insert(int H[], int n){
    int temp,i=n;
    temp=H[i];

    while(i>1 && temp>H[i/2]){
        H[i]=H[i/2];
        i=i/2;
    }
    H[i]=temp;
}

int Delete(int H[], int n){
    int i,j;
    H[1]=H[n];
    i=1, j=2*i;
    int val= H[i];
    while(j<n-1){
        if(H[j+1]>H[j])
            j=j+1;
        if(H[j]>H[i]){
            swap(H[i],H[j]);
            i=j;
            j=2*i;
        }
        else
            break;
    }
    return val;
}
int main() {
    int H[]= {0,2,5,8,9,4,10,7};
    for(int i=2;i<=7;i++)
        insert(H,i);
    for(int i=1;i<=7;i++)
        cout<<H[i]<<" ";

    cout<<"Deleted value is: "<< Delete(H,7);

}

