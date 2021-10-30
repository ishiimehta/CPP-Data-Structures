/*
 * selection_and_quicksort.cpp
 *
 *  Created on: 05-Sep-2021
 *      Author: mehta
 */

/*
 * Sorting_techniques.cpp
 *
 *  Created on: 05-Sep-2021
 *      Author: mehta
 */

// Program implementing selection and quick sort.

#include <iostream>
using namespace std;

void swap(int *p, int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

void selectionsort(int A[], int n){
    int min=0;
    for(int i=0; i<n-1; i++){
        min=i;
        for(int j=i+1; j<n; j++){
            if(A[j]< A[min])
                min=j;
          }
        swap(&A[min],&A[i]);
    }
    for(int i=0;i<n;i++){cout<<A[i]<<" ";}
    cout<<endl;
}

int partition(int A[], int l, int h){
    int i=l;
    int j=h;
    int pivot= A[i];

    while(i<j){
        while(A[i]<=pivot)i++;
        while(A[j]>pivot)j--;
        if(i<j)
            swap(&A[i], &A[j]);
    }
    swap(&A[l], &A[j]);
    return j;
}

void quicksort(int A[], int l, int h){
  int j;
  if(l<h){
    j=partition(A,l,h);
    quicksort(A,l,j);
    quicksort(A,j+1,h);

  }
}
int main() {
    int A[]= {12,55,32,4,78,98};
    int m=6;
    cout<<"Output using Selection Sort: ";
    selectionsort(A,m);
    cout<<"Output using Quick Sort: ";
    int l=0;
    int h=m-1;
    quicksort(A,l,h);
     for(int i=0;i<m;i++){cout<<A[i]<<" ";}
}


