/*
 * Array_operations.cpp
 *
 *  Created on: 19-Aug-2021
 *      Author: mehta
 */

// Program to insert and delete elements of array.
#include <iostream>
using namespace std;

struct Array{
    int arr[20];
    int length;
    int size;
};

int insert(struct Array *A, int ele, int pos){
    if(pos<0 && pos>A->length) return 0;

    for(int i=A->length; i>=pos; i--){
        A->arr[i]= A->arr[i-1];
    }
    A->arr[pos-1]=ele;
    A->length++;
}

int display(struct Array A){
    for(int i=0;i<A.length;i++)
        cout<<A.arr[i]<<" ";
    cout<<endl;
}
int del(struct Array *A, int pos){
    if(pos<0 && pos>A->length) return 0;

    for(int i=pos; i<A->length-1 ;i++){
        A->arr[i]=A->arr[i+1];
    }
    A->length--;
    cout<< "Element deleted."<<endl;
}

int main(){
    struct Array A= {{12,23,34,33,21},5,10};
    int ele,pos,posd;
    cout<< "Enter element to be inserted: ";
    cin>>ele;
    cout<< "Enter position: ";
    cin>>pos;

    //insert an element
    insert(&A,ele,pos);
    //display
    display(A);
    //delete element
    cout<<"Enter position to delete from: ";
    cin>>posd;
    del(&A,posd);
    display(A);

}
