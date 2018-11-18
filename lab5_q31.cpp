#include<iostream>
using namespace std;

int main(){
int n;

cout<<"Enter the number and program will tell you to the number of digits in the number : ";
cin>>n;

int i=0;
while(n!= 0){
	n=n/10;
	i++;
}

cout<<"the no. of digits are : "<<i<<endl;

return 0;
}
