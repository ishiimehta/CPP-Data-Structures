/*
 * DLL_operations.cpp
 *
 *  Created on: 31-Aug-2021
 *      Author: mehta
 */

// Program to create, insert, delete and reverse a Doubly Linked List.

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
}*start=NULL;

void create(int A[], int n){
    Node*t,*last;
    start= new Node;
    start->prev=NULL;
    start->data=A[0];
    start->next=NULL;
    last=start;

    for(int i=1; i<n; i++){
        t= new Node;
        t->data= A[i];
        t->next=NULL;
        last->next=t;
        t->prev=last;
        last=t;
    }
}

void Display(Node *iter){
    cout<<"Elements of Linked List: ";
    while(iter!=NULL){
        cout<<iter->data<<" ";
        iter=iter->next;
    }
    cout<<endl;
}

void findlength(Node *iter){
    int ctr=0;
    while(iter){
        ctr++;
        iter=iter->next;
    }
    cout<<"Length of linked list is: "<<ctr<<endl;
}

int insert(Node *p, int n){
    Node*t;
    int ele,pos;
    cout<<"Enter element to insert: ";
    cin>>ele;
    cout<<"Enter position: ";
    cin>>pos;

if(pos<=0 || pos> n+1){
    cout<<"Invalid"<<endl;
    return NULL;
}
else{
    t=new Node;
    t->data=ele;
    t->prev=t->next=NULL;

    if(pos==1){
        t->next=start;
        start->prev=t;
        start=t;
    }
    else{
        for(int i=1; i<pos-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
        t->prev=p;
        if(p->next)
            p->next->prev=t;
    }
}
}

int deletedll(int n){
    Node*p=start;
    int pos;
    cout<<"Enter position to delete from: ";
    cin>>pos;

    if(pos<=0 || pos>n) {
        cout<<"Invalid"<<endl;
        return NULL;
    }
    else{
        if(pos==1){
            start=start->next;
            start->prev=NULL;
            delete p;
        }
        else{
            for(int i=1; i<pos;i++){
                p=p->next;
        }
       p->prev->next=p->next;
       if(p->next)
            p->next->prev=p->prev;
       delete p;
        }

    }
}

void reverse(Node* p){
    Node *t;
    while(p){
        t=p->next;
        p->next=p->prev;
        p->prev=t;
        p=p->prev;
        if(p->next==NULL) start=p;
    }
}
int main() {
    int A[]={12,55,21,90,500};
    int m=5;
    create(A,m);
    Display(start);
    findlength(start);
    insert(start,m);
    Display(start);
    deletedll(m);
    Display(start);
    reverse(start);
    Display(start);
}
