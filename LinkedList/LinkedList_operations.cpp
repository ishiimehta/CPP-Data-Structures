/*
 * create_display.cpp
 *
 *  Created on: 16-Aug-2021
 *      Author: mehta
 */

//Program to create, display(with and without recursion),count,add,search and find maximum element of a Linked List.

#include <iostream>
#include <climits>
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

void display_rec(struct Node *dis){

    if(dis!=NULL){
        cout<<dis->data<< " ";
        display_rec(dis->next);
    }

}

int count(struct Node *c){
    if(c==NULL)
        return 0;
    else return count(c->next)+1;
}

int cadd(struct Node *add){
    int sum=0;

    if(add==0)
    return 0;
    else return cadd(add->next)+add->data;

}

int maximum(struct Node *max){
    int m= INT_MIN;int x;

    if(max==0) return m;
    else{
        x=maximum(max->next);
        if(x>max->data)
        return x;
        else return max->data;
    }
}

struct Node *search(struct Node *el, int ele){
    if(el==NULL) return NULL;
    if(ele==el->data)
    return(el);
    return search(el->next,ele);
    }

int main(){
    int n,ctr,sum,max,ele;
    struct Node *el;
    cout<< "Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<< "Enter elements: ";

    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    //create
    create(arr,n);
    display();
    display_rec(start);
    cout<<endl;
    //count
    ctr=count(start);
    cout<<"Number of elements in Linked List are: "<<ctr<<endl;
    //add
    sum=cadd(start);
    cout<<"Sum of all elements is: "<<sum<<endl;
    //maximum
    max=maximum(start);
    cout<<"Maximum element is: "<<max<<endl;
    //search
    cout<<"Enter element to be searched: ";
    cin>>ele;
    el=search(start,ele);
    cout<<"Address of element:" <<el;
}
