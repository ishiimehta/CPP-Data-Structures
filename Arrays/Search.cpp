/*
 * Search.cpp
 *
 *  Created on: 27-Jul-2021
 *      Author: mehta
 */

//Implementing improved linear search: Transposition and move to front.
//Binary Search.

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int transposition(int arr[], int ele, int n){
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            swap(arr[i],arr[i-1]);
            cout<<"Element found at index ";
            return i;
        }
    }
    return -1;
}

int movetofront(int arr[], int ele, int n){
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            swap(arr[i],arr[0]);
            cout<<"Element now at index ";
            return 0;
        }
    }
    return -1;
}

int binarysearch(int arr[], int ele,int n){
    //first sort the elements.
    sort(arr,arr+n);
    int low=0;
	int high=n-1;

	while(low<=high){

	    int mid=(low+high)/2;
	    if(arr[mid]==ele){
	        cout<<"Element found at index ";
	        return mid;
	    }
	    else if(arr[mid]<ele){
	        low=mid+1;
	    }
	    else if(arr[mid]>ele){
	        high=mid-1;
	    }

	}
	return -1;
}
int main(){
	int arr[]= {1,23,44,55,66,77,88};
	int n= sizeof(arr)/sizeof(arr[0]);
	int ele,t,mvf,binary;
	cout<<"Element to be searched: ";
	cin>>ele;

	t=transposition(arr,ele,n);
	cout<<t<<endl;

	mvf=movetofront(arr,ele,n);
	cout<<mvf<<endl;

	//binary search
	binary=binarysearch(arr,ele,n);
	cout<<binary;


}


