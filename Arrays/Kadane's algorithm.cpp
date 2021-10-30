// To find maximum contiguous subarray sum using KADANES ALGORITHM.

#include <iostream>
#include<climits>
using namespace std;

int main()
{

    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};

    int max_yet= 0;
    int max_final= 0;

    for(int i=0; i<8; i++){
        max_yet+= arr[i];

        if(max_yet>max_final)
        max_final=max_yet;

        if(max_yet<0)
        max_yet=0;
    }
    cout<<max_final;

//OR DYNAMIC ALGO.

int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};

int currmax=arr[0];
int finalmax=arr[0];

for(int i=1;i<8;i++){
    currmax= max(arr[i], currmax+arr[i]);
    finalmax= max(currmax,finalmax);
}
cout<<finalmax;
}





