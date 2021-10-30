/*
 * MergeSort (iterative).cpp
 *
 *  Created on: 06-Sep-2021
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
void MergeSort(int A[], int n){
    int p,i,l,mid,h;
    for(p=2; p<=n; p=p*2){
        for(i=0; i+p-1<n; i=i+p){
            l=i;
            h= i+p-1;
            mid=(l+h)/2;
            Merge(A,l,mid,h);
        }
    }
    if(p/2 < n)
        Merge(A, 0, p/2-1, n);

}
int main() {
    int A[]= {12,44,900,5,32,92,77,6};
    int n= 8;
    MergeSort(A,n);
    for(int i=0; i<n;i++) cout<<A[i]<<" ";

}

