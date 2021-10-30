/*
 * Roman_to_numeric.cpp
 *
 *  Created on: 18-Aug-2021
 *      Author: mehta
 */

//Program to convert roman to numeral.


#include <iostream>
#include <map>
using  namespace std;

void roman(string str, int n){

map<char,int> m= {
    {'I',1},
    {'V',5},
    {'X',10},
    {'L',50},
    {'C',100},
    {'D',500},
    {'M',1000}
};
int res;
for(int i=0;i<n;i++){
    if(m[str[i]] < m[str[i+1]]){
        res=res+m[str[i+1]]-m[str[i]];
        i++;
        continue;
    }
    else{
        res=res+m[str[i]];
    }
}
cout<<"Number is: "<<res;
}

int main() {
    string str= "CDXLIII";
    int len=str.length();
    roman(str,len);

}
