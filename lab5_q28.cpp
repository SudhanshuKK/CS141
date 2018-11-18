#include<iostream>
using namespace std;

int main(){
	int sum,n,i=2;

cout<<"We have to print sum of all even natural numbers between 1 and n\n"<<"Enter n : ";
cin>> n;

while(i<=n){
	sum=sum+i;
	i=i+2;
}

cout<<"The sum of all even natural numbers between 1 to "<<n<<" is : "<<sum<<endl;

return 0;
}
