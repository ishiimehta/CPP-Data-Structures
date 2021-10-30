/*
 * CLL_operations.cpp
 *
 *  Created on: 28-Aug-2021
 *      Author: mehta
 */

// Program to create, insert and delete element in a Linked List.

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
    last->next=start;
}

void insert(struct Node *p){
    struct Node *t;
    struct Node *q=start;
    int ele,pos;
    cout<<"Enter element to insert: ";
    cin>>ele;
    cout<<"Enter position:  ";
    cin>>pos;

    t=new Node;
    t->data=ele;
    t->next=NULL;

    if(pos==1){
        if(start==NULL){
            start=t;
            start->next=start;
        }
        else{
            p=start;
            while(p->next!=start){
                p=p->next;
            }
            p->next=t;
            t->next=start;
            start=t;
        }
    }
    else{
        for(int i=1;i<pos-1;i++){
            q=q->next;
        }
        t->next=q->next;
        q->next=t;
    }

}
void display(struct Node *iter){
    cout<< "Elements are: ";
    do{
        cout<<iter->data<<" ";
        iter=iter->next;

    } while(iter!=start);
    cout<<endl;
}

void deletecll(struct Node *p){
    struct Node *n,*x;
    int pos;
    cout<<"Enter position to delete from: ";
    cin>>pos;

    if(pos==1){
        if(start==NULL){
            cout<<"No element present in cll."<<endl;
        }
        else{
            while(p->next!=start){
                p=p->next;
            }
            p->next=start->next;
            p=start;
            start=start->next;
            delete p;
        }
    }
    else{
        n=start;

        for(int i=1; i<pos-1; i++){
            n=n->next;
        }
        x=n->next;
        n->next=x->next;
        delete x;
    }
}
int main(){
    int A[]={2,13,66,89,121};
    int n=5;
    create(A,n);
    insert(start);
    display(start);
    deletecll(start);
    display(start);
}
