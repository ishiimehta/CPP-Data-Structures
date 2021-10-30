/*
 * Multiple_missing_elements.cpp
 *
 *  Created on: 27-Aug-2021
 *      Author: mehta
 */

//Program to find multiple missing elements using 2 methods.

#include <bits/stdc++.h>
using namespace std;

void multiplemissing(int arr[], int n){
    //sort the array
    sort(arr,arr+n);
    int diff=arr[0]-0;

    for(int i=0;i<n;i++){
        if(arr[i]-i !=diff){
            while(diff<arr[i]-i){
                cout<<diff+i<<" ";
                diff++;
            }
        }
    }
    cout<<endl;
}

void hashing(int arr[], int n){
    int low=1;
    int high= 10;
    int hash[high+1]={0};

    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    for(int i=low; i<high; i++){
        if(hash[i]==0)
            cout<<i<<" ";
    }
}
int main() {
    int arr[]={10,7,2,5,3,6,1};
    int n=7,ans;
    cout<<"Missing elements: ";
    multiplemissing(arr,n);
    cout<<"Missing elements(using hashing): ";
    hashing(arr,n);


}
