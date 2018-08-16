//library
#include <iostream>
//using namespace keyword
using namespace std;
//writing main function
int main()
{
//declaring variables
int a,b;
//assign the values
a=16;
b=3;
//airthmetic calculations
int sum;
int difference;
int multiply;
float divide;
float divideWithDecimal;
int remainder;
sum = a+b;
difference = a-b;
multiply = a*b;
divide = a/b;
divideWithDecimal = float(a)/float(b);
remainder = 16%3;
//printing materials
cout << "The Sum of 16 and 3 is " << sum << endl;
cout << "The Difference of 16 and 3 is " << difference << endl;
cout << "The product of 16 and 3 is " << multiply << endl;
cout << "The quotient when 16 is divided by 3 is " << divide << endl;
cout << "The remainder we get when 16 is divided by 3 is " << remainder << endl;
cout << "The value we get when 16 is divided by 3 is " << divideWithDecimal << endl;
return 0;
}

