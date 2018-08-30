#include <iostream>
using namespace std;
int main(){
	float x1, x2, x3;
	cout << "we have to find maximum between three numbers\n";
	cout << "Enter the three numbers ";
	cin >> x1 >> x2 >> x3;
	if (x1 > x2 && x1 > x3 ) {
	cout << x1 << " is larger than " << x2 << " and " << x3 << endl;
	}
	else  if (x2 > x1 && x2 > x3 ) {
	cout << x2 << " is larger than " << x1 << " and " << x3 << endl;
}
	else if (x3 > x2 && x3 > x1 ){
	cout << x3 << " is larger than " << x1 << " and " << x2 << endl;
}
	return 0;
}

	
