//including libraries
#include<iostream>
using namespace std;

/*
Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. 
*/
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

/*
Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that. 
*/
void maxim2(int x, int y, int &z){
			z = maxim1(x,y);
}

/*
The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum. 
*/
	int main(){
			int a,b,c,d;
			cout << "Enter two numbers: " << endl;
			cin >> a >> b;
		//y=f(x)
			c = maxim1(a,b);
			cout << "The maximum between the two number is : " << c << endl;
			
			maxim2(a,b,d);
			cout << "The maximum between the two number is : " << d << endl;
		
			return 0;
}
