/*
 * MergeSort (Recursive).cpp
 *
 *  Created on: 07-Sep-2021
 *      Author: mehta
 */

#include <iostream>
using namespace std;

void Merge(int A[], int l, int mid, int h){
    int i,j,k,B[100];
    i=l;
    j=mid+1;
    k=l;

    while(i<=mid && j<=h){
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    for( ;i<=mid;i++)
         B[k++]=A[i];
    for( ;j<=h;j++)
         B[k++]=A[j];
    for(int i=l; i<=h; i++)
         A[i]=B[i];
}
void MergeSort(int A[], int l, int h){
    int mid;
    if(l<h){
        mid= (l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }

}

int main() {
    int A[]= {12,44,900,5,32,92,77,6};
    int n= 8;
    int l=0,h=7;
    MergeSort(A,l,h);
    for(int i=0; i<n;i++) cout<<A[i]<<" ";
}

