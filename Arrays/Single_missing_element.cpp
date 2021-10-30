/*
 * Single_missing_element.cpp
 *
 *  Created on: 27-Aug-2021
 *      Author: mehta
 */

//Program to find single missing element in an array.

#include <bits/stdc++.h>
using namespace std;

int singlemissing(int arr[], int n){

    //sort the array
    sort(arr,arr+n);
    int x=arr[n-1];
    int sum=0;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    int ele=(x*(x+1))/2 - sum;
    cout<<"Missing element is: "<<ele;
}

int main() {
    int arr[]={10,7,2,5,3,6,1,9,8};
    int n=9,ans;
    singlemissing(arr,n);
}




