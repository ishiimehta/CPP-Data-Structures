/*
 * Anagram.cpp
 *
 *  Created on: 03-Sep-2021
 *      Author: mehta
 */

// Program to find duplicates by using bitwise operators (using Masking and Merging).
// Program to determine whether 2 strings are anagram or not.

#include <iostream>
#include <cstring>
using namespace std;

void bitwisedup(char S[]){
    int H=0;
    int x=0;

    for(int i=0; S[i]!='\0'; i++){
        x=1;
        x= x<< S[i]-97;
        if(x && H >0)
            cout<< S[i]<<" is duplicated."<<endl;
        else
            H=x||H;
        }
}

void anagram(char str1[], char str2[]){
    char sample[26]={0};
    int j;
    if(strlen(str1) != strlen(str2)) return;

    for(int i=0; str1[i]!='\0'; i++){
        sample[str1[i]-97]++;
    }
    for(j=0; str2[j]!='\0'; j++){
        sample[str2[j]-97]--;
        if(sample[str2[j]-97] < 0){
            break;
        }
    }
    if(str2[j]=='\0')
        cout<<"Yes,anagram.";
    else cout<<"Not anagram";
}

int main() {
	//Finding duplicates
    char S[]= "banana";
    bitwisedup(S);

    //For checking anagram.
    char str1[]= "trionn";
    char str2[]= "riotbc";
    anagram(str1, str2);

}


