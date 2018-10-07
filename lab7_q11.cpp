//including library
#include<iostream>
using namespace std;

//recursive function to find gcd of two numbers
	int gcd(int n1, int n2) {
  		if(n2!= 0) {
    //divide n1 by n2,if remainder is not 0,set value of n2 into n1 and the remainder into n2
   		return gcd(n2, n1%n2);
  	}
  		else {
    		return n1;
  	}
}

	//driver function
	int main(){
  		int num1, num2;
  		cout << "Enter two numbers to find gcd" << endl;
  		cin >> num1 >> num2;
  	//calling the function
  		cout << "The GCD is " << gcd(num1, num2)<<endl;
  
//returning integer value to main function
	return 0;
}
