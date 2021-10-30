/*
 * Move_to_front.cpp
 *
 *  Created on: 18-Aug-2021
 *      Author: mehta
 */

// Improving Linear search in Linked List by moving the searched element to the front.

#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};
struct Node*start=NULL;


void create(int arr[], int n){
	struct Node*t,*last;
	t= new Node;
	t->data= arr[0];
	t->next= NULL;
	start=t;
	last=start;

	for(int i=1;i<n;i++){
		t=new Node;
		t->data= arr[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}

}

struct Node* search_mvf(struct Node *s, int ele){
	struct Node *t=NULL;
	while(s!=NULL){
		if(s->data==ele){
			return(s);
			t->next=s->next;
			s->next=start;
			start=s;
		}
		t=s;
		s=s->next;
	}
	return NULL;
}

int main(){
	struct Node* res;
	int arr[5]={12,23,34,55,66};
	int n=5;
	int ele=55;
	create(arr,n);
	res=search_mvf(start,ele);
	cout<<"Address of searched element:"<<res;
}


