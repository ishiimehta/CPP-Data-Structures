/*
 * Compare_strings.cpp
 *
 *  Created on: 02-Sep-2021
 *      Author: mehta
 */

// Program to compare 2 strings (if they are equal, lesser or greater than the other).

#include <iostream>
using namespace std;

void compare(char str1[], char str2[]){
    int i,j;
    for(i=0,j=0; str1[i]!='\0' && str2[j]!='\0'; i++,j++){
        if(str1[i]!=str2[j]){
            break;
        }
    }
    if(str1[i]==str2[j])
        cout<<"The 2 strings are equal."<<endl;
    else if(str1[i]<str2[j])
        cout<<"String 1 is smaller than string 2."<<endl;
    else if(str1[i]>str2[j])
        cout<<"String 2 is smaller than string 1."<<endl;
}

int main() {
    char str1[]= "carpenter";
    char str2[]= "car";
    compare(str1,str2);
}
