#include <iostream>
using namespace std;
int main(){
float angle1, angle2, angle3;
cout << "Given two angles of a triangle and we have to find third angle \n";
cout << "enter first angle \n";
cin >> angle1;
cout << "enter second angle \n";
cin >> angle2;
angle3 = 180 - (angle1 + angle2);
cout << " The third angle of triangle is - "<< angle3 << endl;
return 0;
} 
