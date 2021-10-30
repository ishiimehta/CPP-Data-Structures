// Program for finding the length of longest common prefix and suffix without overlapping using KMP Algorithm.

#include <bits/stdc++.h>
using namespace std;

int RMP(string str){

    int n= str.length();
    int len=0;
    int i=1;
    int rmp[n];
    rmp[0]=0;

while(i<n){
    if(str[len]==str[i]){
        len++;
        rmp[i]=len;
        i++;
    }
    else{
        if(len!=0){
            len= rmp[len-1];
        }
        else{
            rmp[i]=0;
            i++;
        }
    }
}
return rmp[n-1]>n/2 ? rmp[n-1]/2 : rmp[n-1];
}

int main()
{
    int ans;
    string str ="abcmnabc";
    ans=RMP(str);
    cout<<ans;

}
