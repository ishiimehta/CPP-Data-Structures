/*
 * Reverse_in_groups.cpp
 *
 *  Created on: 26-Aug-2021
 *      Author: mehta
 */

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
}*start=NULL;

void create(int arr[], int n){
    Node *last,*t;
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
Node*  reverse(Node *p,int k){
    if(!p) return NULL;

    Node *q,*r;
    q=NULL;
    r=NULL;
    int count=0;

    while(p && count<k){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
        count++;
    }

    if(p){
        start->next=reverse(p,k);
    }
    return q;
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
    int A[]={1,2,3,4,5,6};
    int n=6,k=3;
    create(A,n);
    reverse(start,k);
    display();
}


