/*
 * ParenthesisBalancing.cpp
 *
 *  Created on: 15-Sep-2021
 *      Author: mehta
 */

#include<iostream>
#include<stack>
using namespace std;

stack<char> st;
char ch;

int isBalanced(string s){
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='{' || s[i]=='(' || s[i]=='['){
            st.push(s[i]);
            continue;
        }
        if(st.empty())
            return 0;
        switch(s[i]){
                case ')': ch=st.top();
                          st.pop();
                          if(ch=='{' || ch=='[')
                            return 0;
                            break;
                case '}': ch=st.top();
                          st.pop();
                          if(ch=='(' || ch=='[')
                            return 0;
                            break;
                case ']': ch=st.top();
                          st.pop();
                          if(ch=='{' || ch=='(')
                            return 0;
                            break;

            }

    }
    return(st.empty());
}

int main(){
    string s= "{[()]]]}";
    cout<<isBalanced(s);
}


