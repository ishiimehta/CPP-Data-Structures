/*
 * StringRotation.cpp
 *
 *  Created on: 07-Sep-2021
 *      Author: mehta
 */

// Program to rotate a string.

#include <bits/stdc++.h>
using namespace std;

string rotation(string s,string t, int m, int n){
    if(m!=n){
        return "0";
    }
    else{
        queue<char> q1;
        for(int i=0;i<m;i++)
        q1.push(s[i]);

        queue<char> q2;
        for(int i=0;i<n;i++)
        q2.push(t[i]);

        int k= q2.size();
        while(k-- ){
            char fr= q2.front();
            q2.pop();
            q2.push(fr);

            if(q2==q1){
            return "yes!";

            }

        }
         return "no.";
     }
}

int main()
{
    string s="mint";
    string t="tmin";
    string ret;
    int m=4,n=4;
    ret=rotation(s,t,m,n);
    cout<<ret;

}

