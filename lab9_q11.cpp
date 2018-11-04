//Program to find the sizes of the predefined datatypes and sizes of the corresponding pointers

//including libraries
#include<iostream>
using namespace std; 

int main(){
	//variable declaration of predefined datatypes and their corresponding pointers
	int p,*p1;
	bool q,*q1;
	char r,*r1;
	double s,*s1;
	float t,*t1;
	//displays the sizes of the predefined datatype and their corresponding pointers
	cout<<"Sizes are: "<<endl;
	cout<<"Integer: "<<sizeof(p)<<" Pointer: "<<sizeof(p1)<<endl;
	cout<<"Bool: "<<sizeof(q)<<" Pointer: "<<sizeof(q1)<<endl;
	cout<<"Char: "<<sizeof(r)<<" Pointer: "<<sizeof(r1)<<endl;
	cout<<"Double: "<<sizeof(s)<<" Pointer: "<<sizeof(s1)<<endl;
	cout<<"Float: "<<sizeof(t)<<" Pointer: "<<sizeof(t1)<<endl;
	
	//return statement
	return 0;
}
