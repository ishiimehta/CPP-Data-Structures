/*
 * Queue using Array.cpp
 *
 *  Created on: 17-Sep-2021
 *      Author: mehta
 */

#include <iostream>
using namespace std;

class Queue{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
void create(){
    cout<<"Enter size of queue: ";
    cin>>size;
    Q=new int[size];
    front=rear=-1;
    }

void enqueue(int x);
int dequeue();
void Display();
};

void Queue :: enqueue(int x){
    if(rear==size-1)
        cout<<"Queue is full."<<endl;
    else{
        if(front==-1) front=0;
        rear++;
        Q[rear]=x;
    }
}

int Queue :: dequeue(){
    int x;
    if(front==-1|| front>rear)
        cout<<"Queue is empty."<<endl;
    else{
        x= Q[front];
        front++;

    }
}

void Queue :: Display(){
    if(front==-1)
        cout<<"Queue is empty."<<endl;
    else{
        for(int i=front; i<=rear; i++)
            cout<<Q[i]<<" ";
    }
}

int main()
{
  class Queue q;
  q.create();
  q.enqueue(12);
  q.enqueue(2);
  q.enqueue(23);
  q.dequeue();
  q.Display();

}



