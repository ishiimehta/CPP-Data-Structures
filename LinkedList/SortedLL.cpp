/*
 * SortedLL.cpp
 *
 *  Created on: 21-Aug-2021
 *      Author: mehta
 */

//Program to insert and delete in a sorted Linked List.

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

void check(){
	int max;
	struct Node *p=start;
	max=p->data;

	while(p){
		p=p->next;
		if(p->data<max){
			cout<<"Not sorted.";
			break;
		}
	}
	cout<<"Sorted.";
}
void insert(int ele){
    struct Node *t,*p,*q;
    t=new Node;
    t->data=ele;

    q=NULL;
    p=start;

    while(p && (p->data < ele)){
        q=p;
        p=p->next;
    }
    t->next= q->next;
    q->next=t;
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

void ndelete(int pos){
    struct Node *p,*q;
    int x;
    p=start;
    q=NULL;

    if(pos==1){
        x=start->data;
        start=start->next;
        delete p;
    }
    else {
        for(int i=1 ; i<pos && p; i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x= p->data;
        delete p;
    }
    cout<<"Element "<<x<<" deleted.";
}

int main(){
    int A[]={10,20,33,45,56};
    int n=5;
    int ele,pos;
    create(A,n);
    //to check if LL is sorted or not.
    check();
    cout<<"Enter the element to be inserted: ";
    cin>>ele;
    insert(ele);
    display();
    cout<<"Enter position to delete from: ";
    cin>>pos;
    ndelete(pos);
    display();
}
