#include <iostream>
using namespace std;
int main(){
//declaring variables
float centimetre, metre, kilometre;
cout << "convert centimetre into metre and kilometre\n";
cout << "input the length in centimetre ";
cin >> centimetre;
metre = centimetre/100;
kilometre = centimetre/100000;
cout << "The length in metre is - "<< metre << endl;
cout << "The length in kilometre is - "<< kilometre << endl;

return 0;
}
