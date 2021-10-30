/*
 * Reverse.cpp
 *
 *  Created on: 24-Aug-2021
 *      Author: mehta
 */

//Program to reverse an array.

#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int i=0;
    int j=n-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;j--;
    }
}
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[]={33,43,55,76,12};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    display(arr,n);
}


