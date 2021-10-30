/*
 * infix to postfix.cpp
 *
 *  Created on: 15-Sep-2021
 *      Author: mehta
 */

// Program to convert infix expression to postfix using stack.

#include <iostream>
#include<stack>
using namespace std;

int prec(char x){
    if(x=='^')
        return 3;
    else if(x=='/' || x=='*')
        return 2;
    else if(x=='+' || x=='-')
        return 1;
    else
        return -1;
}
void infixtopostfix(string str){
    stack<char>st;
    string postfix;
    for(int i=0; str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
            postfix+=str[i];
        else if(str[i]=='(')
            st.push(str[i]);
        else if(str[i]==')'){
            while(st.top()!='('){
                postfix+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(str[i]) <= prec(st.top())){
                postfix+= st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }
    while(!st.empty()){
        postfix+= st.top();
        st.pop();
    }
    cout<<postfix<<endl;
}

int main() {
    string str= "(3*4/2)-55+9";
    infixtopostfix(str);
}
