#include <iostream>
using namespace std;
int main(){
float side, area;
cout << "Given side of an equilateral triangle and we have to find its area \n";
cout << "enter side\n";
cin >> side;
area = (1.73/4)*side*side;
cout << " The area of triangle is - "<< area << endl;
return 0;
} 
