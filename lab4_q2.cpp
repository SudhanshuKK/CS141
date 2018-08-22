#include <iostream>
using namespace std;
int main(){
float celsius, fahrenheit;
cout <<  "convert celsius into fahrenheit \n";
cout << "input the temperature in celsius - \n";
cin >> celsius;
fahrenheit = (1.8 * celsius) + 32;
cout << "The temperature in fahrenheit is - "<< fahrenheit << endl;

return 0;
}
