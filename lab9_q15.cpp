//Program to show string repeatedly by shifting the top character to the right
//including libraries
#include<iostream>
using namespace std;  

int main(){
	//variable declaration
	char str[20],*p;    //p is a character pointer
	//asks user to input 10 characters of string
	cout<<"Input about 10 characters of string\n";
	cin>>str;

	//pointer variable refers to address of string
	p = str;

	//show string by shifting top character of string to the right
	while(*p!='\0')                       //prints the characters till pointer p points to null character
	{
		cout<<p<<endl;
		p++;
	}

	//return statement
	return 0;
}
