//including libraries
#include<iostream>
using namespace std;

//declaring the function to find the sum of even numbers
	int even(int x, int y, int sume){
	if(x<=y){
		if(x%2==0){
			sume=sume+x;
		}
		//calling function
		even(x+1, y, sume);
	}
	else{
		cout<<"The sum of all even numbers is "<<sume<<endl;
		//terminating function
		return 1;
	}
}

//declaring the function to find the sum of odd numbers
	int odd(int x, int y, int sumo){
	
	if(x<=y){
		if(x%2!=0){
			sumo=sumo+x;
		}
		//calling function
		odd(x+1, y, sumo);
	}
	else{
		cout<<"The sum of all odd numbers is "<<sumo<<endl;
		//terminating function
		return 1;
	}
}
//driver function
	int main(){
	//declaring variables
		int n1, n2, c;
	//asking user to enter upper and lower limit
		cout<<"Enter lower limit."<<endl;
		cin>>n1;
		cout<<"Enter upper limit."<<endl;
		cin>>n2;
	//asking user to enter choice
		cout<<"1. Sum of all even numbers between lower and upper limit."<<endl;
		cout<<"2. Sum of all odd numbers between lower and upper limit."<<endl;
		cout<<"Enter your choice."<<endl;
		cin>>c;
	//calling function based on choice of user
	if(c==1){
		even(n1, n2, 0);
	}
	else if(c==2){
		odd(n1, n2, 0);
	}
	else{
		cout<<"Error! either enter 1 or 2"<<endl;
	}
	//returning integer value to main function
	return 0;
}
