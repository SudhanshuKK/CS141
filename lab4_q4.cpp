#include <iostream>
using namespace std;
int main(){
int years, weeks, days;
cout <<  "convert days into weeks and year \n";
cout << "input number of days - \n";
cin >> days;
years = days/365;
weeks = days/7;
cout << "The number of weeks are - "<< weeks << endl;
cout << "The number of years are - "<< years << endl;
return 0;
}
