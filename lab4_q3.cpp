#include <iostream>
using namespace std;
int main(){
float celsius, fahrenheit;
cout <<  "convert fahrenheit into celsius \n";
cout << "input the temperature in fahrenheit - \n";
cin >> fahrenheit;
celsius = (fahrenheit - 32) / 1.8;
cout << "The temperature in celsius is - "<< celsius << endl;

return 0;
}
