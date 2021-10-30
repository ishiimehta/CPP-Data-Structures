/*
 * String_operations.cpp
 *
 *  Created on: 01-Sep-2021
 *      Author: mehta
 */


#include <iostream>
using namespace std;


int count(char str[]){
    int i;
    for(i=0; str[i]!='\0';i++);
    return i;
}

void changecase(char str[]){
    int i;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]=str[i]+ 32;
        }
        if(str[i]>=97 && str[i]<=122){
            str[i]=str[i]- 32;
        }
    }
    cout<<str<<endl;
}

void consvowelcount(char str[]){
    int i,vow=0,cons=0;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vow++;
        }
        else cons++;
    }
    cout<<"Number of vowels: "<<vow<<endl;
    cout<<"Number of consonants: "<<cons<<endl;
}
int validate(char str[]){
    int i;
     for(i=0; str[i]!='\0'; i++){
        if(!(str[i]>=65 && str[i]<=90) && !(str[i]>=97 && str[i]<=122) && !(str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9')){
            return 0;
        }
    }
    return 1;
}
int main() {
    int ct,val;
    char str[]= "icecream";

    // To find length of a string.
    cout<<"Length of string is: ";
    ct=count(str);
    cout<<ct<<endl;

    //To convert upper to lower and lower to upper case.
    cout<<"Case conversion is: ";
    changecase(str);

    //To count number of vowels and consonants in a string.
    consvowelcount(str);

    //To check if a string is valid (Invalid string has special characters like: '?','_','!' etc.)
    val=validate(str);
    cout<<"Valid string: "<<val;
}

