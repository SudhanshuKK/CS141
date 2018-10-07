//including library
#include<iostream>
using namespace std;

	//writing function for finding factorial
	int factorial(int n){
  	if(n==0) {
	//stop the recursion
    	return 1;
  }
 	else {
    //call the function to multiply the number with the previous number
    	return n*factorial(n-1);
  }
}

	//driver function
		int main(){
  		int num;
  		cout << "Enter a number to find factorial" << endl;
 		cin >> num;
  //call the recursive function and display the result 
  		cout << "The factorial of given number is " << factorial(num) << endl;
 
//returning integer value to main function
 	return 0;
}
