//Write a program that includes the three (Q.2,3,4) functions.

#include<iostream>
using namespace std;
	//Q.2
	int sum$(int x, int y){
		int sum = x+y;
		return sum;
}

	//Q.3
	int maxim1(int x, int y){
		int z;
		if (x>y){
			z = x;
}
		else {
			z = y; 
}
		return z;
}
	//Q.4
	int minim2(int x, int y){
		int z;
		if (x<y){
			z = x;
}
		else {
			z = y; 
}
		return z;
}

/*
Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
*/

int main(){
	
	//declaring variables
	int a,b,c,d,e,f;
	
	//obtaining the inputs
	cout << " Fun with two integers " << endl;
	cout << " Enter 1, if you want to add " << endl;
	cout << " Enter 2, if you want to find max " << endl;
	cout << " Enter 3, if you want to find min " << endl;
	cin >> a;

	cout << "Enter two numbers :" << endl;
	cin >> b >> c;

	//operations and results
	if (a==1){ 
		//y=f(x)
		d = sum$(b,c);
		cout << "The sum is " << d << endl;
	}

	else if (a==2){
		e = maxim1(b,c);
		cout << "The maximum of two numbers is " << e << endl;
	}

	else if (a==3){
		f = minim2(b,c);
		cout << "The minimum of two numbers is " << f << endl;
	}
	
	else {
		cout << "ERROR. Please enter 1,2 or 3 " << endl;
	}

	return 0;
}
