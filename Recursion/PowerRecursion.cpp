/*
 * PowerRecursion.cpp
 *
 *  Created on: 15-Aug-2021
 *      Author: mehta
 */


#include<iostream>
using namespace std;


int pow(int m, int n){

	if(n==0)
		return 1;
	else{
		return pow(m,n-1)*m;
	}
}

// Using lesser number of multiplications,

int powless(int m, int n){

	if(n==0)
		return 1;
	else{
		if(n%2==0)
		return pow(m*m, n/2);

		else
		return pow(m*m , (n-1)/2)*m;
	}
}

int main(){
	int m,n,ans1,ans2;
	cout<< "Enter base: ";
	cin>>m;
	cout<< "Enter exponent: ";
	cin>>n;

	ans1=pow(m,n);
	cout<< ans1<< endl;

	ans2=pow(m,n);
	cout<< ans2;
}

