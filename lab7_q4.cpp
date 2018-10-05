//including libraries
#include<iostream>
using namespace std;

//declaring the function to find sum of natural numbers from 1 to n
	int sum$(int n, int i, int sum){
		if(i<=n){
		sum=sum+i;
		//calling the function
		sum$(n, i+1, sum);
	}
		else{
		cout<<"Sum of all natural numbers from 1 to "<<n<<" is "<<sum<<endl;
		//terminating loop
		return 1;
	}
}

//declaring driver function
	int main(){
	//declaring variables
	int n;
	//asking user to enter limit
	cout<<"Enter limit"<<endl;
	cin>>n;
	//calling function
	sum$(n, 1, 0);
	//returning integer value to main function
	return 0;
}
