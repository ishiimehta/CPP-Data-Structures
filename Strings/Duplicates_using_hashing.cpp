/*
 * Duplicates_using_hashing.cpp
 *
 *  Created on: 02-Sep-2021
 *      Author: mehta
 */

// To find duplicates of a string using hashing.

#include <iostream>
using namespace std;

int dups(char str[]){
    int hash[26]={0};

    //To reduce the size of array to 26.
    for(int i=0; str[i]!='\0'; i++){
        hash[str[i]- 97]++;
    }
    for(int i=0; i<26; i++){
        if(hash[i]>1)
            cout<<char(i+97)<<" ";
        }
    }

int main() {
   char str[]= "monuments";
   dups(str);
}



