/*
 * Check for BST.cpp
 *
 *  Created on: 14-Oct-2021
 *      Author: mehta
 */

// Program to check if a given Binary tree is a BST or not.

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *prev;
    Node *next;

Node(int data){
    this->data=data;
    this->prev=NULL;
    this->next=NULL;
}

};

int checkBst(Node *node, int min, int max){
    if(node==NULL)
        return 1;
    if(node->data<min || node->data>max)
        return 0;
    return
        checkBst(node->prev, min, node->data-1) &&
        checkBst(node->next, node->data+1, max);
}

int isBst(Node *node){
    return (checkBst(node, INT_MIN, INT_MAX));
}

int main() {
    Node *root;
    root= new Node(18);
    root->prev= new Node(12);
    root->next= new Node(22);
    root->prev->next= new Node(13);
    root->next->prev= new Node(21);

    if(isBst(root))
        cout<<"is a BST.";
    else cout<<"not a BST."<<endl;
}
