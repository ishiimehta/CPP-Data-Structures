/*
 * Fraction as string.cpp
 *
 *  Created on: 21-Sep-2021
 *      Author: mehta
 */

// Program to represent fraction of 2 numbers in string format. If the fractional part is repeatitive, enclose it in paranthesis.

#include <bits/stdc++.h>
using namespace std;

string editfraction(int num, int denom){
    int quo= num/denom;
    int rem= num%denom;

    int sign= (num<0 ^ denom<0)? -1:1;

    string res;

    if(sign==-1)
        res= res+ '-';

    res= res+to_string(quo);

    if(rem==0) return res;

    res=res+'.';

    int index;
    map<int,int>mp;
    bool repeating=false;

    while(rem>0 && !repeating){

        if(mp.find(rem) != mp.end()){
            index= mp[rem];
            repeating= true;
            break;
        }
        else{
            mp[rem]= res.length();
        }


        rem=rem*10;
        int q=rem/denom;
        res=res+ to_string(q);
        rem= rem % denom;
    }

    if(repeating){
        res= res+")";
        res.insert(index, "(");
    }

    return res;

}

int main() {
    int numerator= 23, denominator=3;
    cout<<editfraction(numerator, denominator);
}


