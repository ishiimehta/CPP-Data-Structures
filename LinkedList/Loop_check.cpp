/*
 * Loop_check.cpp
 *
 *  Created on: 26-Aug-2021
 *      Author: mehta
 */

// Check if there is a loop present in Linked List or not. If present,delete it.

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*start=NULL;

void deleteloop(struct Node*p, struct Node*q);

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

void checkloop(){
    struct Node *p,*q;
    q=p=start;

    do{
        p=p->next;
        q=q->next;
        q=q ? q->next:q;
      } while(p && q && p!=q);

    if(p==q){
        cout<<"Yes, there is a loop."<<endl;
        deleteloop(p,q);
    }
    else cout<<"No loop present.";
}

void deleteloop(struct Node*p, struct Node*q){
    while(q->next!=p){
        q=q->next;
    }
    q->next=NULL;
    checkloop();
}
int main(){
    int A[]={2,13,66,89,121};
    int n=5;
    create(A,n);

    struct Node *t1,*t2;
    t1= start->next->next;
    t2= start->next->next->next;
    t2->next=t1;

    checkloop();

}
