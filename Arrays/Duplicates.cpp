/*
 * Duplicates.cpp
 *
 *  Created on: 28-Aug-2021
 *      Author: mehta
 */

//To find duplicate elements in a sorted and unsorted array.

#include <bits/stdc++.h>
#include<climits>
using namespace std;

void duplicate(int arr[], int n){
    sort(arr,arr+n);
    int dup=0;

    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            dup++;
        }
        else if(dup>0){
            cout<<"Duplicate element is "<<arr[i]<<" occuring "<<dup+1<<" times."<<endl;
            dup=0;
        }
    }
}
void hashing(int arr[], int n){
    sort(arr,arr+n);
    int max=arr[n-1];
    int hash[max+1]={0};

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<max+1; i++){
        if(hash[i]>1){
            cout<<i<<" duplicated "<<hash[i]<<" times."<<endl;
        }
    }
}
void unsorteddup(int arr[], int n){

    for(int i=0; i<n-1; i++){
        int count=0;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j] && arr[i]!= NULL){
                count++;
                arr[j]=NULL;
            }
        }
        if(count>0)
        cout<<arr[i]<<" duplicated "<<count+1<<" times."<<endl;
    }
}
int main(){
    int arr[]={12,43,34,66,7,12,12,7};
    int n=8;
    //duplicate of sorted elements.
    duplicate(arr,n);
    //duplicate by hashing.
    hashing(arr,n);
    //duplicates in unsorted array.
    unsorteddup(arr,n);
}
