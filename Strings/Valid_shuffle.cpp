/*
 * Valid_shuffle.cpp
 *
 *  Created on: 07-Sep-2021
 *      Author: mehta
 */

// To find whether a string is a perfect shuffle of 2 distinct strings.

#include <bits/stdc++.h>
using namespace std;

int shuffle(string s1, string s2, string s3){
    if(s3.length()!=(s1.length()+s2.length()))
    return 0;

    int i=0,j=0,k=0;

    while(k< s3.length()){

    if(s1[i]==s3[k])
    i++;

    else if(s2[j]==s3[k])
    j++;

    else return 0;

    k++;
    }
    return 1;
}

int main()
{
    string s1="abkk";
    string s2= "ch";
    string s3= "abch";
    int x;
    x=shuffle(s1,s2,s3);
    cout<<x;
}
