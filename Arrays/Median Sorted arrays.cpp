/*
 * median.cpp
 *
 *  Created on: 26-Jul-2021
 *      Author: mehta
 */

// median of sorted arrays.
#include <iostream>
using namespace std;

int main() {
	int m,n,arr1[50],arr2[50];
	cout<<"Enter size of array 1:";
	cin>>m;

	cout<<"Enter array elements:";
	for(int i=0;i<m;i++){
		cin>>arr1[i];
	}

	cout<<"Enter size of array 2:";
	cin>>n;

	cout<<"Enter array 2 elements:";
	for(int i=0;i<n;i++){
		cin>>arr2[i];
		}

	int x=m+n;
	int arr3[m+n];

	for(int j=0;j<x;j++){
	   if(j<m)
	   arr3[j]=arr1[j];

	   else
	   arr3[j]=arr2[j-m];
	}

	if(x%2==0){
		cout<<"Median is:"<<arr3[x/2-1]<<"and"<<arr3[(x/2)+1-1];
	}
	else{
		cout<<"Median is:"<<arr3[((x+1)/2)-1];
	}

}



