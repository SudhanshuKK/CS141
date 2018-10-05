//including libraries
#include<iostream>
using namespace std;

//declaring the function for printing even numbers
	int even(int x, int y){
		if(x<=y){
			if(x%2==0){
			cout<< x<<endl;
	}
		//calling the function
			even(x+1, y);
	}
	//terminating recursive function
		else{
		return 0;
	}
}

	//declaring the function for printing odd numbers
	int odd(int x, int y){
		if(x<=y){
			if(x%2!=0){
			cout<< x<<endl;
	}
		//calling the function
			odd(x+1, y);
	}
	//terminating recursive function
		else{
		return 0;
	}
}

	//driver function
	int main(){
	//declaring variables
		int a, b, c;
	//asking user to enter starting and ending limit
		cout<<"Enter starting limit."<<endl;
		cin>>a;
		cout<<"Enter ending limit."<<endl;
		cin>>b;
	//asking user for option
		cout<<"1. Print all even numbers between "<<a<<" and "<<b<<endl;
		cout<<"2. Print all odd numbers between "<<a<<" and "<<b<<endl;
		cout<<"choose your option."<<endl;
		cin>>c;
	
		if(c==1){
		//calling function for even numbers
			even(a, b);
	}
		else if(c==2){
		//calling function for odd numbers
			odd(a, b);
	}
		else{
		cout<<"Error! Please enter either 1 or 2."<<endl;
	}
	//returning integer value to main function
	return 0;
}
