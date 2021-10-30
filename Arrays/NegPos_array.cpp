/*
 * NegPos_array.cpp
 *
 *  Created on: 07-Sep-2021
 *      Author: mehta
 */

// Shifting all negative elements to one side of the array.

#include <iostream>
using namespace std;

void sortt(int arr[],int n){
    int neg=0; int pos=n-1;

    while(neg<pos){

        if(arr[neg]>0)
        {
        swap(arr[neg],arr[pos]);
        pos--;
        }

        else
        neg++;
    }
}
void printt(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i];
    }

}

int main()
{
    int arr[]= {-1,3,4,-22,-5,-19};
    int n= sizeof(arr)/sizeof(arr[0]);

    sortt(arr,n);
    printt(arr,n);
}




