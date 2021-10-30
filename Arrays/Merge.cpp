/*
 * Merge.cpp
 *
 *  Created on: 24-Aug-2021
 *      Author: mehta
 */

//Program to merge 2 sorted arrays.


#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[],int m,int n){
    int arr3[m+n];

    int i=0,j=0,k=0;
    while(i<m &&j<n){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else if(arr1[i]>arr2[j]){
            arr3[k++]=arr2[j++];
        }
        else if(arr1[i]==arr2[j]){
            arr3[k++]=arr1[i++];
            j++;
        }
    }
    for( ;i<m;i++)
        arr3[k++]=arr1[i++];
    for( ;j<n;j++)
        arr3[k++]=arr2[j++];

    for(int i=0;i< (m+n);i++){
        cout<<arr3[i]<<" ";
    }
}
int main() {
    int arr1[]={33,43,55,76};
    int arr2[]={3,14,80};
    int m= sizeof(arr1)/sizeof(arr1[0]);
    int n= sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1,arr2,m,n);

}
