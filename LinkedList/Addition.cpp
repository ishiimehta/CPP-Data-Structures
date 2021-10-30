/*
 * Addition.cpp
 *
 *  Created on: 30-Aug-2021
 *      Author: mehta
 */

// Program to add 2 numbers represented as Linked Lists.

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

void create(Node **start_ref, int ele){
    Node *t=new Node;
    t->data=ele;
    t->next=(*start_ref);
    (*start_ref)=t;
}

Node* addsamesize(Node *start, Node *second,int *carry){

    int sum;

    if(start==NULL){
        return NULL;
    }
    Node *newnode= new Node;
    newnode->next=addsamesize(start->next, second->next,carry);

    sum= start->data+second->data+ *carry;
    *carry= sum>=10 ? 1:0 ;
    sum=sum%10;
    newnode->data=sum;
    return newnode;

}

void swap(Node **p, Node **q){
    Node *t= *p;
    *p=*q;
    *q=t;
}

void addremaining(Node* start, Node* cur, int* carry,Node** result){
    int sum;

    if(start!=cur){
        addremaining(start->next, cur, carry,
                            result);
    sum= start->data + *carry;
    *carry = sum / 10;
    sum %= 10;

    create(result,sum);
    }
}

void display(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

void addition(Node* start, Node* second, int m, int n, Node **result){

    Node* cur;
    if(start==NULL){
        (*result)=second;
        return;
    }
    if(second==NULL){
        (*result)=start;
        return;
    }
    int carry=0;
    if(m==n){
        (*result)=addsamesize(start,second,&carry);
    }

    else{
    if(m<n){
        swap(&start, &second);
    }

    int diff= abs(m-n);

    for(cur=start; diff--; cur=cur->next);

    (*result)=addsamesize(cur,second,&carry);

    addremaining(start,cur,&carry,result);
    }
    if (carry)
        create(result, carry);
}

int main() {
    Node *start=NULL, *second=NULL, *result=NULL;

    int arr1[]={4,5,6,7,8};
    int arr2[]={8,3,9};

    int m= sizeof(arr1)/sizeof(arr1[0]);
    int n= sizeof(arr2)/sizeof(arr2[0]);

    for(int i=m-1; i>=0; i--){
        create(&start, arr1[i]);
    }
    for(int i=n-1; i>=0; i--){
        create(&second, arr2[i]);
    }

    addition(start,second,m,n,&result);
    display(result);

}
