/*
 * postfix evaluation.cpp
 *
 *  Created on: 16-Sep-2021
 *      Author: mehta
 */


#include <iostream>
#include <stack>
using namespace std;

int isOperand(int x){
    if(x=='+' || x=='-' || x=='/' || x=='*')
        return 0;
    return 1;
}
int postfixeval(string str){
    stack<int>st;
    int x;
    int y;

    for(int i=0; str[i]!='\0';i++){
        if(isOperand(str[i]))
            st.push(str[i]-'0');
        else{
            y=st.top();
            st.pop();
            x=st.top();
            st.pop();

            switch(str[i]){
                case '-': st.push(x-y); break;
                case '+': st.push(x+y); break;
                case '*': st.push(x*y); break;
                case '/': st.push(x/y); break;
                }
        }

    }
    return st.top();
}

int main() {
    string str= "231*+9-*";
    cout<<postfixeval(str);
}
