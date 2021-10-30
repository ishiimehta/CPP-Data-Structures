/*
 * Middle_element.cpp
 *
 *  Created on: 06-Sep-2021
 *      Author: mehta
 */

// Program to find middle element of a linked list.

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}* start=NULL;

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
void middlelement(){
    Node *p,*q;
    p=q=start;

    while(q){
        q=q->next;
        if(q)q=q->next;
        if(q)p=p->next;
    }
    cout<<"Middle element is: "<<p->data;
}
int main(){
    int A[]={10,90,33,425,5,89,77};
    int n=7;
    create(A,n);
    middlelement();
}

