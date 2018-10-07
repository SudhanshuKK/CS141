//including library
#include<iostream>
using namespace std;

//writing function for reversing a number
	int reverse(int n) {
  	if(n==0) {
   	return 1;
   }
  	else {
   	cout << n%10 ;
	//variable n now stores the number without the former ones digit i.e, if number was 1234 now variable n stores 123   	
	n=n/10;
	//recursion of the function
   	reverse(n) ;
   }
}

	// main/driver function
		int main(){
	//declaring variable
  		int num;
	//asking the user for input
  	cout << "Enter a number" << endl;
  	cin >> num;
  	//calling the function
  	reverse(num) ;
	//return statement
	  return 0;
}
