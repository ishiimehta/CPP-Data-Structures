/*
 * Palindrome_reverse.cpp
 *
 *  Created on: 02-Sep-2021
 *      Author: mehta
 */

// Program to check whether a string is a palindrome, and find reverse of a string.

#include <iostream>
using namespace std;

void reverse(char str[]){
    char sample[9];
    int i=0,j=0;
    for(j=0; str[j]!='\0'; j++);
    for(j=j-1,i=0; j>=0; i++,j--){
        sample[i]=str[j];
    }
    sample[i]='\0';
    cout<<sample<<endl;
}

int palindrome(char str[]){
    int i=0,j;
    for(j=0; str[j]!='\0'; j++);
    j=j-1;

    while(i<j){
        if(str[i]!=str[j])
            return 0;
        i++,j--;
    }
    return 1;
}

int main() {
    int pal;
    char str1[]= "carpenter";
    reverse(str1);
    char str2[]= "madam";
    pal=palindrome(str2);
    cout<<"Palindrome: "<<pal<<endl;

}


