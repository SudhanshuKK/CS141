#include <iostream>
using namespace std;
int main(){
	float x;
	cout << "we have to find whether a number is positive, negative or zero\n";
	cout << "Enter the number ";
	cin >> x;
	if (x > 0 ) {
	cout << x << " is positive number" << endl;
	}
	else  if (x < 0 ) {
	cout << x << " is negative number " << endl;
}
	else if (x == 0 ){
	cout << x << " is zero " << endl;
}
	return 0;
}

	
