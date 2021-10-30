/*
 * Move_last_to_front.cpp
 *
 *  Created on: 28-Aug-2021
 *      Author: mehta
 */

// Program to move last element to front in a Linked List.

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*start=NULL;


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

void move(struct Node* q){
    struct Node *p=NULL;

    while(q->next!=NULL){
        p=q;
        q=q->next;
    }
    q->next=start;
    start=q;
    p->next=NULL;
}

void display(){
    struct Node *iter;
    iter= start;

cout<< "Elements are: ";
    while(iter!= NULL){
        cout<< iter->data<< " ";
        iter=iter->next;
    }
    cout<<endl;
}

int main(){
    int A[]={2,13,66,89,121};
    int n=5;
    create(A,n);
    move(start);
    display();
}
