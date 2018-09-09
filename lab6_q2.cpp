//libraries
#include<iostream>
using namespace std;
/*Write a program with a function that takes two int parameters, adds them together, then returns the sum.*/
int sum$(int a, int b){
int sum;
sum = a+b;
return sum;
}
/*Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.*/
void sum$$(int a, int b, int &c){
c = a+b;
}
/*The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
*/
int main(){
	int x,y,z,p;
	cout << "enter the two numbers" << endl;
	cin >> x >> y;
	
	z = sum$(x,y);
	cout << "the sum is " << z <<endl;
//calling the function by reference	
	sum$$(x,y,p);
	cout << "the sum is " << p <<endl;

return 0;

}
