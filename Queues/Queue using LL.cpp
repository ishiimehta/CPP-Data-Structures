/*
 * Queue using LL.cpp
 *
 *  Created on: 18-Sep-2021
 *      Author: mehta
 */

#include <iostream>
using namespace std;

class Node{
private:
    int data;
    Node *next;
    Node *front=NULL;
    Node *rear=NULL;
public:
    void enqueue(int x);
    int dequeue();
    void display();
};

void Node::enqueue(int x){
  Node *t;
  t=new Node();
  if(t==NULL)
    cout<<"Queue full."<<endl;
  else {
      t->data=x;
      t->next=NULL;
    if(front==NULL)
        front=rear=t;
    else{
        rear->next=t;
        rear=t;
    }
  }
}
int Node::dequeue(){
    Node *t;
    int x=-1;

    if(front==NULL)
        cout<<"Queue is empty."<<endl;
    else{
        t=front;
        front=front->next;
        x=t->data;
        free(t);
    }

    return x;
}

void Node::display(){
    Node *p=front;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main() {
    class Node Q;
    Q.enqueue(12);
    Q.enqueue(233);
    Q.enqueue(1);
    Q.display();
}
