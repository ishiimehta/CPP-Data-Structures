/*
 * Circular Queue.cpp
 *
 *  Created on: 18-Sep-2021
 *      Author: mehta
 */


#include <iostream>
using namespace std;

class Queue{
private:
    int size;
    int front;
    int rear;
    int *q;

public:

void create(){
    cout<<"Enter size: ";
    cin>>size;
    q= new int[size];
    front=rear=-1;
}
    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue::enqueue(int x){
    if(front== (rear+1)%size)
        cout<<"Queue is full.";

    else if(front==-1&& rear==-1){
            front=rear=0;
            q[rear]=x;
        }
    else {
            rear=(rear+1)%size;
            q[rear]=x;
    }
}
int Queue::dequeue(){
    if(front==-1&& rear==-1)
        cout<<"No element present.";
    else if(front==rear)
        front=rear=-1;
    else{
        cout<<front<<" deleted.";
        front=(front+1)%size;
    }
     }

void Queue::display(){
    int i=front;
    while(i<=rear){
        cout<< q[i] <<" ";
        i=(i+1)% size;
    }
        }

int main() {
    class Queue Q;
    Q.create();
    Q.enqueue(12);
    Q.enqueue(2);
    Q.enqueue(1);
    Q.display();
}

