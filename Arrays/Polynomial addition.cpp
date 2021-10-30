/*
 * create_add.cpp
 *
 *  Created on: 12-Aug-2021
 *      Author: mehta
 */

// Program to create 2 polynomials and add them.


#include <iostream>
using namespace std;

class Terms{
public:
	int coeff;
	int exp;
};

class Poly{
private:
	int num;
	Terms *t;

public:
Poly(int num){
	this->num=num;
	t= new Terms[this->num * sizeof(Terms)];
}
~ Poly(){
    delete []t;
}

Poly operator+  (Poly &p);
friend istream & operator >> (istream &is, Poly &p);
friend ostream & operator << (ostream &os, Poly &p);


};

istream & operator >> (istream &is, Poly &p){

	cout<<"Enter coefficient and exponent: ";
		for(int i=0;i< p.num;i++)
			cin>> p.t[i].coeff >>p.t[i].exp;
			return is;
}


ostream & operator << (ostream &os, Poly &p){
	for(int i=0;i< p.num;i++)
		cout<<p.t[i].coeff<<"x"<< p.t[i].exp<<"+";
		return os;

}

Poly Poly :: operator+ (Poly &p){

	Poly *p3;
	p3->t= new Terms[(num +p.num)];

	int i=0,j=0,k=0;
	while(i< num && j<p.num){
		if(t[i].exp > p.t[j].exp)
			p3->t[k++]=t[i++];
		else if(t[i].exp < p.t[j].exp)
			p3->t[k++]=p.t[j++];
		else{
			p3->t[k].exp = t[i].exp;
			p3->t[k++].coeff = t[i++].coeff + p.t[j++].coeff;
		}
	}
	for( ;i<num;i++)
		p3->t[k++]=t[i++];
	for( ;j<p.num;j++)
		p3->t[k++]=p.t[j++];

p3->num=k;
return *p3;

}



int main(){

	Poly p1(1);
	Poly p2(2);

	cin>>p1;
	cout<<p1;
	cin>>p2;
	cout<<p2;
	Poly p = p1 + p2;
	cout<< p;

}
