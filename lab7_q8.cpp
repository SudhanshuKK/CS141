//including libraries
#include<iostream>
using namespace std;

//declaring the function to find sum of digits of any number
	int sum$(int x, int sum){
	//declaring variables
	int y;
	//adding digits
		y=x%10;
		sum=sum+y;
		x=x/10;
	//calling function
		if(x!=0){
		sum$(x,sum);
	}
		else{
		cout<<"Sum of the digits is "<<sum<<endl;
		//terminating loop
		return 1;
	}
}

//driver function
	int main(){
	//declaring variables
		int n;
	//asking user to enter a number
		cout<<"Enter a number."<<endl;
	//accepting value
		cin>>n;
	//calling function
		sum$(n, 0);
	//returning integer value to main function
	return 0;
}
