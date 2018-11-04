//Program to understand pointer basics
//including libraries
#include<iostream>
using namespace std;

int main(){
	//variable declaration
	int a,b,*p;   //p is a pointer variable
	p = &a;
	b = *p;
	a = 2;
	b = 3;
	//displays the output
	cout<<"a: "<<a<<" b: "<<b<<" *p: "<<*p<<endl;
	p = &b;
	//displays the output
	cout<<"a: "<<a<<" b: "<<b<<" *p: "<<*p<<endl;
	//return statement
	return 0;
}
