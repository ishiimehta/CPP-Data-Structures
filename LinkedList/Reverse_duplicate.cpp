/*
 * Reverse_dup.cpp
 *
 *  Created on: 24-Aug-2021
 *      Author: mehta
 */

//Remove duplicates from sorted Linked List.
// Reverse a Linked List:
//1.By changing data elements.
//2.By reversing links( Sliding pointers).

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

void dups(int arr[], int n){
    struct Node *p,*q;
    p=start;
    q=start->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else if(p->data==q->data){
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
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

void reverse_data(struct Node *p, int n){
    int arr[n]; int i=0;

    while(p){
        arr[i]= p->data;
        i++;
        p=p->next;
    }
    p=start;
    i--;

    while(p){
        p->data= arr[i];
        i--;
        p=p->next;
    }
}

void reverse_links(struct Node *p, int n){
    struct Node *q,*r;
    q=NULL;
    r=NULL;

    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    start=q;
}
int main(){
    int A[]={11,49,49,56,112,112,400};
    int n=7;
    create(A,n);
    dups(A,n);
    display();
    reverse_data(start,n);
    display();
    reverse_links(start,n);
    display();
}


