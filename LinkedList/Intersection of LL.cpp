/*
 * Find_intersection.cpp
 *
 *  Created on: 29-Aug-2021
 *      Author: mehta
 */

// Program to find the intersection point of 2 Linked Lists.

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}* start=NULL, *second=NULL;


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

int intersection(struct Node *p, struct Node *q,int m, int n){
    int diff= abs(m-n);
    if(m>n){
        for(int i=0; i<diff; i++){
            p=p->next;
        }
    }
    else if(m<n){
        for(int i=0; i<diff; i++){
            q=q->next;
        }
    }

    while(p!=NULL && q!=NULL){
        if(p==q){
            return p->data;
        }
        p=p->next;
        q=q->next;
    }
    return -1;
}

int main(){
    struct Node *t;

    start= new Node();
    start->data=11;

    t=new Node();
    t->data=8;
    start->next=t;

    t=new Node();
    t->data=2;
    start->next->next=t;

    t=new Node();
    t->data=5;
    start->next->next->next=t;

    t=new Node();
    t->data=6;
    start->next->next->next->next=t;

    second= new Node();
    second->data=9;

    t=new Node();
    t->data=3;
    second->next=t;

   second->next->next=start->next->next->next;
   start->next->next->next->next->next=NULL;

   int m=5,n=4;
   int ans=intersection(start,second,m,n);
   cout<<"Intersection at element: "<<ans;


}
