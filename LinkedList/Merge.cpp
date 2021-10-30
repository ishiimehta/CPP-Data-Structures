/*
 * Merge.cpp
 *
 *  Created on: 25-Aug-2021
 *      Author: mehta
 */

//Merge 2 linked lists (sorted).

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}* start=NULL,*second=NULL,*third=NULL;

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

void display(struct Node *iter){
    cout<< "Elements are: ";
    while(iter!= NULL){
        cout<< iter->data<< " ";
        iter=iter->next;
    }
    cout<<endl;
}

void merge(struct Node *p, struct Node *q){
    struct Node *last=NULL;

    if(p->data < q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }

    while(p!=NULL && q!=NULL){
        if(p->data < q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
    }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
    }
       }
    if(p!=NULL) last->next=p;
    if(q!=NULL) last->next=q;

}
int main(){
    int A[]={2,13,66,89,121,230};
    int B[]={12,34,67};
    int m=6;
    int n=3;
    create(A,m);
    create2(B,n);
    merge(start,second);
    display(third);
}
