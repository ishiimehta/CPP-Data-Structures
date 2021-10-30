/*
 * Build MaxHeap.cpp
 *
 *  Created on: 14-Oct-2021
 *      Author: mehta
 */

// Construct a MaxHeap using Heapify.

#include <iostream>
using namespace std;


void heapify(int A[], int n, int i){
    int largest=i;
    int l= 2*i +1;
    int r= 2*i +2;

    if(l<n && A[l]>A[largest])
        largest=l;
    if(r<n && A[r]>A[largest])
        largest=r;

    if(largest !=i){
        swap(A[i], A[largest]);
        heapify(A,n,largest);
    }
}

void BuildHeap(int A[], int n){
    int start= n/2 -1;

    for(int i=start; i>=0; i--)
        heapify(A,n,i);
}

int main() {
    int A[]= {1,3,7,4,6,12,8,5};
    int n=8;
    BuildHeap(A,n);

    for(int i=0; i<n ;i++)
        cout<<A[i]<<" ";

}
