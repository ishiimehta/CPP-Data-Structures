/*
 * Set_operations.cpp
 *
 *  Created on: 27-Aug-2021
 *      Author: mehta
 */

//Program to perform set operations on sorted array (union, intersection, difference).

#include <iostream>
using namespace std;


void setunion(int A[], int B[], int m, int n){

    int i=0,j=0;

    while(i<m && j<n){
        if(A[i]<B[j])
            cout<<A[i++]<<" ";
        if(A[i]>B[j])
            cout<<B[j++]<<" ";
        if(A[i]==B[j]){
            cout<<A[i++]<<" ";
            j++;
        }
    }
    for( ;i<m;i++)
        cout<<A[i++]<<" ";
    for( ;j<n;j++)
        cout<<B[j++]<<" ";
    cout<<endl;

}

void setintersection(int A[], int B[], int m, int n){
    int i=0,j=0;

        while(i<m && j<n){
        if(A[i]<B[j])
            i++;
        if(A[i]>B[j])
            j++;
        if(A[i]==B[j]){
            cout<<A[i++]<<" ";
            j++;
        }
    }
    cout<<endl;
}

void setdifference(int A[], int B[], int m, int n){
    int i=0,j=0;

        while(i<m && j<n){
        if(A[i]<B[j])
            cout<<A[i++]<<" ";
        if(A[i]>B[j])
            j++;
        if(A[i]==B[j]){
            i++; j++;
        }
    }
    for( ;i<m;i++)
        cout<<A[i++]<<" ";
}

int main() {
    int A[]={12,44,87,101};
    int B[]={33,52,87,91,900};
    int m=4; int n=5; int res;

    cout<<"Union is: ";
    setunion(A,B,m,n);

    cout<<"Intersection is: ";
    setintersection(A,B,m,n);

    cout<<"Difference is: ";
    setdifference(A,B,m,n);
}


