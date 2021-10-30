/*
 * Concat.cpp
 *
 *  Created on: 24-Aug-2021
 *      Author: mehta
 */

//Concatenate  2 linked lists.

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}* start=NULL,*second=NULL;

void create(int arr[], int n){
    struct Node *last,*t;
    start = new Node;
    start->data= arr[0];
    start->next= NULL;
    last=start;

    for(int i=1;i<n;i++){
        t= new Node;
        t->data= arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void create2(int arr[], int n){
    struct Node *last,*t;
    second = new Node;
    second->data= arr[0];
    second->next= NULL;
    last=second;

    for(int i=1;i<n;i++){
        t= new Node;
        t->data= arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void concatenate(int A[], int B[], int m, int n){
    struct Node *p;
    p=start;

    while(p->next !=NULL){
        p=p->next;
    }
    p->next=second;
    second=NULL;
}
void display(struct Node *iter){
    cout<< "Elements are: ";
    while(iter!= NULL){
        cout<< iter->data<< " ";
        iter=iter->next;
    }
    cout<<endl;
}

int main(){
    int A[]={2,13,66,89,121,230};
    int B[]={12,34,131,23};
    int m=6;
    int n=4;
    create(A,m);
    create2(B,n);
    concatenate(A,B,m,n);
    display(start);
}


