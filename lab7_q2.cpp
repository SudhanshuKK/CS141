//including library
#include<iostream>
using namespace std;

//declaring the function for writing series from 1 to x
int series(int x, int i){
	if(i<=x){
		cout<< i<< endl;
		series(x,i+1);
	}
	//terminating recursive function
	else{
		return 1;
	}
}

//driver function
int main(){
	//declaring variables
		int n;
	//asking user to enter limit
		cout<<"Enter limit upto which you want to print the series."<<endl;
		cin>> n;
		cout<<"All natural numbers from 1 to "<<n<<" are -"<<endl;
	//calling function
		series(n,1);
	//returning integer value to main function
	return 0;
}
