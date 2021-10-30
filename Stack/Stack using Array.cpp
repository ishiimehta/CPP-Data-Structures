/*
 * Stack using Array.cpp
 *
 *  Created on: 11-Sep-2021
 *      Author: mehta
 */

// Program to implement stack using array and to check if parenthesis is balanced using stack.
#include <iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *p;
};

void create(struct stack* st){
    cout<<"Enter size of stack: ";
    cin>> st->size;
    st->top=-1;
    st->p= new int[st->size];
}

void Display(struct stack st){
    for(int i=st.top; i>=0; i--)
        cout<< st.p[i] <<" ";
    cout<<endl;
}

void push(struct stack* st, int ele){
    if(st->top == st->size-1)
        cout<< "Stack overflow."<<endl;
    else{
        st->top++;
        st->p[st->top]=ele;
    }
}

int pop(struct stack* st){
    int x=-1;
    if(st->top == -1)
        cout<< "Stack underflow."<<endl;
    else{
        x=st->p[st->top];
        st->top--;
        }
    return x;
}

int isEmpty(struct stack st){
    if(st.top==-1)
        return 1;
    return 0;
}

int isFull(struct stack st){
    return (st.top == st.size-1);
}

int StackTop(struct stack st){
    if(!isEmpty){
        return st.p[st.top];
    }
}

int isBalanced(struct stack st,char *str){
    for(int i=0; str[i]!='\0';i++){
        if(str[i]=='(')
            push(&st,str[i]);
        if(str[i]==')'){
            if(st.top==-1)
                return 0;
            pop(&st);
        }
    }
    if(st.top==-1)
        return 1;
}
int main() {
    struct stack st;
    create(&st);
    push(&st, 134);
    push(&st, 98);
    push(&st, 209);
    Display(st);
    cout<< pop(&st)<<endl;
    cout<< pop(&st)<<endl;
    cout<< pop(&st)<<endl;
    Display(st);
    isEmpty(st);

    //Parenthesis Balancing
    char *str= "(2(-3((3*4)))";
    cout<<"Parenthesis balanced: "<<isBalanced(st,str);

}
