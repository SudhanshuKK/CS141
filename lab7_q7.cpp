//including libraries
#include<iostream>
using namespace std;

//writing function for finding whether a number palindrome
	int palindrome(int x, int y) {
 	if (x==0) {
  	return y;
  }
 	else {
  		y=(y*10)+(x%10);
  
	return palindrome(x/10, y);
  }
}
	//driver function
		int main() {
 		int num;
 	//asking the user for a input
		cout << "Enter a number" << endl;
 		cin >> num;
	//calling the function
		int rev= palindrome(num, 0);
 		if(rev==num) {
	//printing the result
  		cout << "Yes, palindrome" << endl;
  }
 		else {
  		cout << "Not palindrome" << endl;
  }
 //return statement
	return 0;
}
